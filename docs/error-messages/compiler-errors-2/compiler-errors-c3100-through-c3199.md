---
description: "Learn more about: Compiler errors C3100 Through C3199"
title: "Compiler errors C3100 Through C3199"
ms.date: "04/21/2019"
f1_keywords: ["C3102", "C3105", "C3107", "C3108", "C3109", "C3111", "C3112", "C3119", "C3122", "C3123", "C3124", "C3125", "C3127", "C3128", "C3129", "C3143", "C3144", "C3146", "C3147", "C3148", "C3151", "C3158", "C3164", "C3165", "C3169", "C3177", "C3178", "C3184", "C3188", "C3191", "C3193"]
helpviewer_keywords: ["C3102", "C3105", "C3107", "C3108", "C3109", "C3111", "C3112", "C3119", "C3122", "C3123", "C3124", "C3125", "C3127", "C3128", "C3129", "C3143", "C3144", "C3146", "C3147", "C3148", "C3151", "C3158", "C3164", "C3165", "C3169", "C3177", "C3178", "C3184", "C3188", "C3191", "C3193"]
ms.assetid: 7bc40c2f-6a8d-488a-b665-f39375afee77
---
# Compiler errors C3100 Through C3199

The articles in this section of the documentation explain a subset of the error messages that are generated by the compiler.

[!INCLUDE[error-boilerplate](../../error-messages/includes/error-boilerplate.md)]

## Error messages

|Error|Message|
|-----------|-------------|
|[Compiler error C3100](compiler-error-c3100.md)|'*identifier*': unknown attribute qualifier|
|[Compiler error C3101](compiler-error-c3101.md)|illegal expression for named attribute argument '*identifier*'|
|Compiler error C3102|Obsolete.|
|[Compiler error C3103](compiler-error-c3103.md)|'*identifier*': repeated named argument|
|[Compiler error C3104](compiler-error-c3104.md)|illegal attribute argument|
|Compiler error C3105|'*symbol*': cannot be used as an attribute|
|[Compiler error C3106](compiler-error-c3106.md)|'*attribute*': unnamed arguments must precede named arguments|
|Compiler error C3107|'*attribute*': member functions of native attributes cannot be defined|
|Compiler error C3108|cannot deduce a type as an initializer list is not an expression|
|Compiler error C3109|'*identifier*': interface methods must use either the '__stdcall' or '__cdecl' calling convention|
|[Compiler error C3110](compiler-error-c3110.md)|'*function*': you cannot overload a COM interface method|
|Compiler error C3111|An initializer list cannot be used as the default argument for a template parameter|
|Compiler error C3112|'*interface*': an interface can only be declared at global or namespace scope|
|[Compiler error C3113](compiler-error-c3113.md)|an 'interface/enum' cannot be a template/generic|
|[Compiler error C3114](compiler-error-c3114.md)|'*identifier*': not a valid named attribute argument|
|[Compiler error C3115](compiler-error-c3115.md)|'*attribute*': this attribute is not allowed on '*construct*'|
|[Compiler error C3116](compiler-error-c3116.md)|'*specifier*': invalid storage class for interface method|
|[Compiler error C3117](compiler-error-c3117.md)|'*interface*': an interface can only have one base class|
|[Compiler error C3118](compiler-error-c3118.md)|'*interface*': interfaces do not support virtual inheritance|
|Compiler error C3119|alignas(void) is not allowed|
|[Compiler error C3120](compiler-error-c3120.md)|'*identifier*': interface methods cannot take a variable argument list|
|[Compiler error C3121](compiler-error-c3121.md)|cannot change GUID for class '*class*'|
|Compiler error C3122|'*interface*': a WinRT generic interface cannot have GUID|
|Compiler error C3123|WinRT generic interface cannot have constraints|
|Compiler error C3124|'signed char' is not a valid WinRT data type. Use 'unsigned char', 'wchar_t' or 'signed short' instead.|
|Compiler error C3125|'*type*': type cannot directly or indirectly derive from 'Platform::Exception'|
|[Compiler error C3126](compiler-error-c3126.md)|cannot define a union '*union*' inside of managed/WinRT type '*type*'|
|Compiler error C3127|'*type*': '*trait*' trait can only be used on a WinRT ref class|
|Compiler error C3128|'*type*' does not have a vtable that was introduced by '*type*'|
|Compiler error C3129|'*type*': __default_vptr_for_base can only be used on locally defined polymorphic types and bases|
|[Compiler error C3130](compiler-error-c3130.md)|Internal Compiler error: failed to write injected code block to PDB|
|[Compiler error C3131](compiler-error-c3131.md)|project must have a 'module' attribute with a 'name' property|
|[Compiler error C3132](compiler-error-c3132.md)|'*parameter*': parameter arrays can only be applied to a formal argument of type 'single-dimensional managed/WinRT array'|
|[Compiler error C3133](compiler-error-c3133.md)|Attributes cannot be applied to C++ varargs|
|[Compiler error C3134](compiler-error-c3134.md)|'*value*': value of attribute argument '*argument*' does not have valid type '*type*'|
|[Compiler error C3135](compiler-error-c3135.md)|'*identifier*': a property cannot have a 'const' or 'volatile' type|
|[Compiler error C3136](compiler-error-c3136.md)|'*interface*': a COM interface can only inherit from another COM interface, '*interface*' is not a COM interface|
|[Compiler error C3137](compiler-error-c3137.md)|'*identifier*': a property cannot be initialized|
|[Compiler error C3138](compiler-error-c3138.md)|'*identifier*': a '*attribute*' interface must inherit from IDispatch, or from an interface that inherits from IDispatch|
|[Compiler error C3139](compiler-error-c3139.md)|'*type*': cannot export a UDT without members|
|[Compiler error C3140](compiler-error-c3140.md)|cannot have multiple 'module' attributes in the same compilation unit|
|[Compiler error C3141](compiler-error-c3141.md)|'*interface*': interfaces only support public inheritance|
|[Compiler error C3142](compiler-error-c3142.md)|'*property*': you cannot take the address of a property|
|Compiler error C3143|'*argument*': attribute argument cannot have multiple values|
|Compiler error C3144|'*attribute*': attribute requires explicit arguments, '*argument*' is unnamed|
|[Compiler error C3145](compiler-error-c3145.md)|'*identifier*': global or static variable may not have managed/WinRT type '*type*'|
|Compiler error C3146|Obsolete.|
|Compiler error C3147|Obsolete.|
|Compiler error C3148|Obsolete.|
|[Compiler error C3149](compiler-error-c3149.md)|'*type*': cannot use this type here without a top-level '*token*'|
|[Compiler error C3150](compiler-error-c3150.md)|'*construct*': '*attribute*' can only be applied to a class, struct, interface, array or pointer|
|Compiler error C3151|Obsolete.|
|[Compiler error C3152](compiler-error-c3152.md)|'*function*': '*keyword*' can only be applied to a class, struct, or virtual member function|
|[Compiler error C3153](compiler-error-c3153.md)|'*interface*': you cannot create an instance of an interface|
|[Compiler error C3154](compiler-error-c3154.md)|Expected ',' before ellipsis. Non-comma separated ellipsis not supported on parameter array functions.|
|[Compiler error C3155](compiler-error-c3155.md)|attributes are not allowed in a property indexer|
|[Compiler error C3156](compiler-error-c3156.md)|'*class*': you cannot have a local definition of a managed/WinRT type|
|[Compiler error C3157](compiler-error-c3157.md)|ParamArray attribute can only be applied to the last parameter|
|Compiler error C3158|'*function*': '*keyword*' can only be applied to a virtual member function|
|[Compiler error C3159](compiler-error-c3159.md)|'*identifier*': array of pointers to value type cannot be declared|
|[Compiler error C3160](compiler-error-c3160.md)|'*type*': a data member of a managed/WinRT class cannot have this type|
|[Compiler error C3161](compiler-error-c3161.md)|'*interface*': nesting class, struct, or interface in an interface is illegal; nesting interface in a class or struct is illegal|
|[Compiler error C3162](compiler-error-c3162.md)|'*type*': a reference type which has a destructor cannot be used as the type of static data member '*member*'|
|[Compiler error C3163](compiler-error-c3163.md)|'*class*': attributes inconsistent with previous declaration|
|Compiler error C3164|Obsolete.|
|Compiler error C3165|'*value*': cannot convert to an integral or floating point value|
|[Compiler error C3166](compiler-error-c3166.md)|Obsolete. '*type*': a data member of a managed/WinRT class cannot have type '*pointer_type* to interior *managed_pointer_type*'|
|[Compiler error C3167](compiler-error-c3167.md)|Unable to initialize .NET Framework: make sure it is installed|
|[Compiler error C3168](compiler-error-c3168.md)|'*type*': illegal underlying type for enum|
|Compiler error C3169|'*type*': cannot deduce type for 'auto' from '*type*'|
|[Compiler error C3170](compiler-error-c3170.md)|cannot have different module identifiers in a project|
|[Compiler error C3171](compiler-error-c3171.md)|'*module*': cannot specify different module attributes in a project|
|[Compiler error C3172](compiler-error-c3172.md)|'*identifier*': cannot specify different idl_module attributes in a project|
|[Compiler error C3173](compiler-error-c3173.md)|version mismatch in idl merge|
|[Compiler error C3174](compiler-error-c3174.md)|module attribute was not specified|
|[Compiler error C3175](compiler-error-c3175.md)|'*function*': cannot call a method of a managed type from unmanaged function '*function*'|
|[Compiler error C3176](compiler-error-c3176.md)|'*type*': cannot declare local value type|
|Compiler error C3177|you cannot have a conversion function to a type that contains '*type*'|
|Compiler error C3178|'*type*': cannot use ParamArray in a function with default arguments|
|[Compiler error C3179](compiler-error-c3179.md)|an unnamed managed/WinRT type is not allowed|
|[Compiler error C3180](compiler-error-c3180.md)|'*type*': name exceeds meta-data limit of '*number*' characters|
|[Compiler error C3181](compiler-error-c3181.md)|'*type*': invalid operand for *operator*|
|[Compiler error C3182](compiler-error-c3182.md)|'*type*': a member using-declaration or access declaration is illegal within a managed/WinRT type|
|[Compiler error C3183](compiler-error-c3183.md)|cannot define unnamed class, struct or union inside of managed/WinRT type '*class*'|
|Compiler error C3184|Obsolete.|
|[Compiler error C3185](compiler-error-c3185.md)|'typeid': used on managed/WinRT type '*type*', use '*operator*' instead|
|Compiler error C3186|Obsolete.|
|[Compiler error C3187](compiler-error-c3187.md)|'*identifier*': is only available within the body of a function|
|Compiler error C3188|Obsolete.|
|[Compiler error C3189](compiler-error-c3189.md)|'typeid<*declarator*>': this syntax is no longer supported, use::typeid instead|
|[Compiler error C3190](compiler-error-c3190.md)|'*declarator*' with the provided template arguments is not the explicit instantiation of any member function of '*type*'|
|Compiler error C3191|Obsolete.|
|[Compiler error C3192](compiler-error-c3192.md)|syntax error: '^' is not a prefix operator (did you mean '*'?)|
|Compiler error C3193|'*construct*': requires '/clr' or '/ZW' command line option|
|[Compiler error C3194](compiler-error-c3194.md)|'*type*': a value-type cannot have an assignment operator|
|[Compiler error C3195](compiler-error-c3195.md)|'*keyword*': is reserved and cannot be used as a member of a ref class or value type. CLR/WinRT operators must be defined using the 'operator' keyword|
|[Compiler error C3196](compiler-error-c3196.md)|'*identifier*': used more than once|
|[Compiler error C3197](compiler-error-c3197.md)|'*keyword*': can only be used in definitions|
|[Compiler error C3198](compiler-error-c3198.md)|invalid use of floating-point pragmas: fenv_access pragma operates only in precise mode|
|[Compiler error C3199](compiler-error-c3199.md)|invalid use of floating-point pragmas: exceptions are not supported in non-precise mode|

## See also

[C/C++ Compiler and build tools errors and warnings](../compiler-errors-1/c-cpp-build-errors.md) \
[Compiler errors C2000 - C3999, C7000 - C7999](../compiler-errors-1/compiler-errors-c2000-c3999.md)