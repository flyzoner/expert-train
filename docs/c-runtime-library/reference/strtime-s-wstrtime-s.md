---
description: "Learn more about: _strtime_s, _wstrtime_s"
title: "_strtime_s, _wstrtime_s"
ms.date: "4/2/2020"
api_name: ["_wstrtime_s", "_strtime_s", "_o__strtime_s", "_o__wstrtime_s"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-time-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
f1_keywords: ["_wstrtime_s", "strtime_s", "wstrtime_s", "_strtime_s"]
helpviewer_keywords: ["wstrtime_s function", "copying time to buffers", "strtime_s function", "_wstrtime_s function", "time, copying", "_strtime_s function"]
ms.assetid: 42acf013-c334-485d-b610-84c0af8a46ec
---
# _strtime_s, _wstrtime_s

Copy the current time to a buffer. These are versions of [_strtime, _wstrtime](strtime-wstrtime.md) with security enhancements as described in [Security Features in the CRT](../../c-runtime-library/security-features-in-the-crt.md).

## Syntax

```C
errno_t _strtime_s(
   char *buffer,
   size_t numberOfElements
);
errno_t _wstrtime_s(
   wchar_t *buffer,
   size_t numberOfElements
);
template <size_t size>
errno_t _strtime_s(
   char (&buffer)[size]
); // C++ only
template <size_t size>
errno_t _wstrtime_s(
   wchar_t (&buffer)[size]
); // C++ only
```

### Parameters

*buffer*<br/>
A buffer, at least 10 bytes long, where the time will be written.

*numberOfElements*<br/>
The size of the buffer.

## Return Value

Zero if successful.

If an error condition occurs, the invalid parameter handler is invoked, as described in [Parameter Validation](../../c-runtime-library/parameter-validation.md). The return value is an error code if there is a failure. Error codes are defined in ERRNO.H; see the following table for the exact errors generated by this function. For more information on error codes, see [errno Constants](../../c-runtime-library/errno-constants.md).

### Error Conditions

|*buffer*|*numberOfElements*|Return|Contents of *buffer*|
|--------------|------------------------|------------|--------------------------|
|**NULL**|(any)|**EINVAL**|Not modified|
|Not **NULL** (pointing to valid buffer)|0|**EINVAL**|Not modified|
|Not **NULL** (pointing to valid buffer)|0 < size < 9|**EINVAL**|Empty string|
|Not **NULL** (pointing to valid buffer)|Size > 9|0|Current time formatted as specified in the remarks|

## Security Issues

Passing in an invalid non-**NULL** value for the buffer will result in an access violation if the *numberOfElements* parameter is greater than 9.

Passing a value for *numberOfElements* that is greater than the actual size of the buffer will result in buffer overrun.

## Remarks

These functions provide more secure versions of [_strtime](strtime-wstrtime.md) and [_wstrtime](strtime-wstrtime.md). The **_strtime_s** function copies the current local time into the buffer pointed to by *timestr*. The time is formatted as **hh:mm:ss** where **hh** is two digits representing the hour in 24-hour notation, **mm** is two digits representing the minutes past the hour, and **ss** is two digits representing seconds. For example, the string **18:23:44** represents 23 minutes and 44 seconds past 6 P.M. The buffer must be at least 9 bytes long; the actual size is specified by the second parameter.

**_wstrtime** is a wide-character version of **_strtime**; the argument and return value of **_wstrtime** are wide-character strings. These functions behave identically otherwise.

In C++, using these functions is simplified by template overloads; the overloads can infer buffer length automatically (eliminating the need to specify a size argument) and they can automatically replace older, non-secure functions with their newer, secure counterparts. For more information, see [Secure Template Overloads](../../c-runtime-library/secure-template-overloads.md).

The debug library versions of these functions first fill the buffer with 0xFE. To disable this behavior, use [_CrtSetDebugFillThreshold](crtsetdebugfillthreshold.md).

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

### Generic-Text Routine Mapping:

|TCHAR.H routine|_UNICODE & _MBCS not defined|_MBCS defined|_UNICODE defined|
|---------------------|------------------------------------|--------------------|-----------------------|
|**_tstrtime_s**|**_strtime_s**|**_strtime_s**|**_wstrtime_s**|

## Requirements

|Routine|Required header|
|-------------|---------------------|
|**_strtime_s**|\<time.h>|
|**_wstrtime_s**|\<time.h> or \<wchar.h>|

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## Example

```C
// strtime_s.c

#include <time.h>
#include <stdio.h>

int main()
{
    char tmpbuf[9];
    errno_t err;

    // Set time zone from TZ environment variable. If TZ is not set,
    // the operating system is queried to obtain the default value
    // for the variable.
    //
    _tzset();

    // Display operating system-style date and time.
    err = _strtime_s( tmpbuf, 9 );
    if (err)
    {
       printf("_strdate_s failed due to an invalid argument.");
      exit(1);
    }
    printf( "OS time:\t\t\t\t%s\n", tmpbuf );
    err = _strdate_s( tmpbuf, 9 );
    if (err)
    {
       printf("_strdate_s failed due to an invalid argument.");
       exit(1);
    }
    printf( "OS date:\t\t\t\t%s\n", tmpbuf );

}
```

```Output
OS time:            14:37:49
OS date:            04/25/03
```

## See also

[Time Management](../../c-runtime-library/time-management.md)<br/>
[asctime_s, _wasctime_s](asctime-s-wasctime-s.md)<br/>
[ctime_s, _ctime32_s, _ctime64_s, _wctime_s, _wctime32_s, _wctime64_s](ctime-s-ctime32-s-ctime64-s-wctime-s-wctime32-s-wctime64-s.md)<br/>
[gmtime_s, _gmtime32_s, _gmtime64_s](gmtime-s-gmtime32-s-gmtime64-s.md)<br/>
[localtime_s, _localtime32_s, _localtime64_s](localtime-s-localtime32-s-localtime64-s.md)<br/>
[mktime, _mktime32, _mktime64](mktime-mktime32-mktime64.md)<br/>
[time, _time32, _time64](time-time32-time64.md)<br/>
[_tzset](tzset.md)<br/>