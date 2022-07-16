---
description: "Learn more about: C Runtime Error R6035"
title: "C Runtime Error R6035"
ms.date: "11/04/2016"
f1_keywords: ["R6035"]
helpviewer_keywords: ["R6035"]
ms.assetid: f8fb50b8-18bf-4258-b96a-b0a9de468d16
---
# C Runtime Error R6035

Microsoft Visual C++ Runtime Library, Error R6035 - A module in this application is initializing the module's global security cookie while a function relying on that security cookie is active.  Call __security_init_cookie earlier.

[__security_init_cookie](../../c-runtime-library/reference/security-init-cookie.md) must be called before the first use of the global security cookie.

The global security cookie is used for buffer overrun protection in code compiled with [/GS (Buffer Security Check)](../../build/reference/gs-buffer-security-check.md) and in code that uses structured exception handling. Essentially, on entry to an overrun-protected function, the cookie is put on the stack, and on exit, the value on the stack is compared against the global cookie. Any difference between them indicates that a buffer overrun has occurred and results in immediate termination of the program.

Error R6035 indicates that a call to `__security_init_cookie` was made after a protected function was entered. If execution were to continue, a spurious buffer overrun would be detected because the cookie on the stack would no longer match the global cookie.

Consider the following DLL example. The DLL entry point is set to DllEntryPoint through the linker [/ENTRY (Entry-Point Symbol)](../../build/reference/entry-entry-point-symbol.md) option. This bypasses the CRT's initialization which would ordinarily initialize the global security cookie, so the DLL itself must call `__security_init_cookie`.

```
// Wrong way to call __security_init_cookie
DllEntryPoint(...) {
   DllInitialize();
   ...
   __try {
      ...
   } __except()... {
      ...
   }
}

void DllInitialize() {
   __security_init_cookie();
}
```

This example will generate error R6035 because DllEntryPoint uses structured exception handling and therefore uses the security cookie to detect buffer overruns. By the time DllInitialize is called, the global security cookie has already been put on the stack.

The correct way is demonstrated in this example:

```
// Correct way to call __security_init_cookie
DllEntryPoint(...) {
   __security_init_cookie();
   DllEntryHelper();
}

void DllEntryHelper() {
   ...
   __try {
      ...
   } __except()... {
      ...
   }
}
```

In this case, DllEntryPoint is not protected against buffer overruns (it has no local string buffers and doesn't use structured exception handling); therefore it can safely call `__security_init_cookie`. It then calls a helper function that is protected.

> [!NOTE]
> Error message R6035 is only generated by the x86 debug CRT, and only for structured exception handling, but the condition is an error on all platforms, and for all forms of exception handling, such as C++ EH.

## See also

[Security Features in MSVC](https://devblogs.microsoft.com/cppblog/security-features-in-microsoft-visual-c/)