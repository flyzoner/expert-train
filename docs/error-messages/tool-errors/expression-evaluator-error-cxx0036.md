---
description: "Learn more about: Expression Evaluator Error CXX0036"
title: "Expression Evaluator Error CXX0036"
ms.date: "11/04/2016"
f1_keywords: ["CXX0036"]
helpviewer_keywords: ["CXX0036", "CAN0036"]
ms.assetid: 383404be-df5b-4eec-b113-df21bb5d269d
---
# Expression Evaluator Error CXX0036

bad context {...} specification

This message can be generated by any of several errors in the use of the context operator (**{}**).

- The syntax of the context operator (**{}**) was given incorrectly.

   The syntax of the context operator is:

     {*function*,*module*,*dll*}*expression*

   This specifies the context of *expression*. The context operator has the same precedence and usage as a type cast.

   Trailing commas can be omitted. If any of *function*, *module*, or *dll* contains a literal comma, you must enclose the entire name in parentheses.

- The function name was spelled incorrectly, or does not exist in the specified module or dynamic-link library.

   Because C is a case-sensitive language, *function* must be given in the exact case as it is defined in the source.

- The module or DLL could not be found.

   Check the full path name of the specified module or DLL.

This error is identical to CAN0036.