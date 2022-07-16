---
title: "log2, log2f, log2l"
description: "API reference for log2, log2f, and log2l; which determine the binary (base-2) logarithm of the specified value."
ms.date: "9/1/2020"
api_name: ["log2", "log2l", "log2f", "_o_log2", "_o_log2f", "_o_log2l"]
api_location: ["msvcrt.dll", "msvcr80.dll", "msvcr90.dll", "msvcr100.dll", "msvcr100_clr0400.dll", "msvcr110.dll", "msvcr110_clr0400.dll", "msvcr120.dll", "msvcr120_clr0400.dll", "ucrtbase.dll", "api-ms-win-crt-math-l1-1-0.dll", "api-ms-win-crt-private-l1-1-0.dll"]
api_type: ["DLLExport"]
topic_type: ["apiref"]
ms.assetid: 94d11b38-70b7-4d3a-94ac-523153c92b2e
---
# log2, log2f, log2l

Determines the binary (base-2) logarithm of the specified value.

## Syntax

```C
double log2(
   double x
);

float log2(
   float x
); //C++ only

long double log2(
   long double x
); //C++ only

float log2f(
   float x
);

long double log2l(
   long double x
);

#define log2(X) // Requires C11 or higher
```

### Parameters

*x*\
The value to determine the base-2 logarithm of.

## Return Value

On success, returns return log2 *x*.

Otherwise, may return one of the following values:

|Issue|Return|
|-----------|------------|
|*x* < 0|NaN|
|*x* = ±0|-INFINITY|
|*x* = 1|+0|
|+INFINITY|+INFINITY|
|NaN|NaN|
|domain error|NaN|
|pole error|-HUGE_VAL, -HUGE_VALF, or -HUGE_VALL|

Errors are reported as specified in [_matherr](matherr.md).

## Remarks

If *x* is an integer, this function essentially returns the zero-based index of the most significant 1 bit of *x*.

By default, this function's global state is scoped to the application. To change this, see [Global state in the CRT](../global-state.md).

## Requirements

|Function|C header|C++ header|
|--------------|--------------|------------------|
|**log2**, **log2f**, **log2l**|\<math.h>|\<cmath>|
|**log2** macro | \<tgmath.h> ||

For additional compatibility information, see [Compatibility](../../c-runtime-library/compatibility.md).

## See also

[Alphabetical Function Reference](crt-alphabetical-function-reference.md)<br/>
[exp2, exp2f, exp2l](exp2-exp2f-exp2l.md)<br/>
[log, logf, log10, log10f](log-logf-log10-log10f.md)<br/>
