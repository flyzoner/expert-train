---
description: "Learn more about: CAutoPtr class"
title: "CAutoPtr class"
ms.date: "11/04/2016"
f1_keywords: ["CAutoPtr", "ATLBASE/ATL::CAutoPtr", "ATLBASE/ATL::CAutoPtr::CAutoPtr", "ATLBASE/ATL::CAutoPtr::Attach", "ATLBASE/ATL::CAutoPtr::Detach", "ATLBASE/ATL::CAutoPtr::Free", "ATLBASE/ATL::CAutoPtr::m_p"]
helpviewer_keywords: ["CAutoPtr class"]
ms.assetid: 08988d53-4fb0-4711-bdfc-8ac29c63f410
---
# `CAutoPtr` class

This class represents a smart pointer object.

> [!IMPORTANT]
> This class and its members cannot be used in applications that execute in the Windows Runtime.

## Syntax

```cpp
template <typename T>
class CAutoPtr
```

### Parameters

*`T`*\
The pointer type.

## Members

### Public constructors

| Name | Description |
|--|--|
| [`CAutoPtr::CAutoPtr`](#cautoptr) | The constructor. |
| [`CAutoPtr::~CAutoPtr`](#dtor) | The destructor. |

### Public methods

| Name | Description |
|--|--|
| [`CAutoPtr::Attach`](#attach) | Call this method to take ownership of an existing pointer. |
| [`CAutoPtr::Detach`](#detach) | Call this method to release ownership of a pointer. |
| [`CAutoPtr::Free`](#free) | Call this method to delete an object pointed to by a `CAutoPtr`. |

### Public operators

| Name | Description |
|--|--|
| [`CAutoPtr::operator T*`](#operator_t_star) | The cast operator. |
| [`CAutoPtr::operator =`](#operator_eq) | The assignment operator. |
| [`CAutoPtr::operator ->`](#operator_ptr) | The pointer-to-member operator. |

### Public data members

| Name | Description |
|--|--|
| [`CAutoPtr::m_p`](#m_p) | The pointer data member variable. |

## Remarks

This class provides methods for creating and managing a smart pointer. Smart pointers help protect against memory leaks by automatically freeing resources when it falls out of scope.

Further, `CAutoPtr`'s copy constructor and assignment operator transfer ownership of the pointer, copying the source pointer to the destination pointer and setting the source pointer to NULL. That's why it's impossible to have two `CAutoPtr` objects each storing the same pointer, and it reduces the possibility of deleting the same pointer twice.

`CAutoPtr` also simplifies the creation of collections of pointers. Instead of deriving a collection class and overriding the destructor, it's simpler to make a collection of `CAutoPtr` objects. When the collection is deleted, the `CAutoPtr` objects will go out of scope and automatically delete themselves.

[`CHeapPtr`](../../atl/reference/cheapptr-class.md) and variants work in the same way as `CAutoPtr`, except that they allocate and free memory using different heap functions instead of the C++ **`new`** and **`delete`** operators. [`CAutoVectorPtr`](../../atl/reference/cautovectorptr-class.md) is similar to `CAutoPtr`, the only difference being that it uses **vector new[]** and **vector delete[]** to allocate and free memory.

See also [`CAutoPtrArray`](../../atl/reference/cautoptrarray-class.md) and [`CAutoPtrList`](../../atl/reference/cautoptrlist-class.md) when arrays or lists of smart pointers are required.

## Requirements

**Header:** atlbase.h

## Example

[!code-cpp[NVC_ATL_Utilities#74](../../atl/codesnippet/cpp/cautoptr-class_1.cpp)]

## <a name="attach"></a> `CAutoPtr::Attach`

Call this method to take ownership of an existing pointer.

```cpp
void Attach(T* p) throw();
```

### Parameters

*`p`*\
The `CAutoPtr` object will take ownership of this pointer.

### Remarks

When a `CAutoPtr` object takes ownership of a pointer, it will automatically delete the pointer and any allocated data when it goes out of scope. If [`CAutoPtr::Detach`](#detach) is called, the programmer is again given responsibility for freeing any allocated resources.

In debug builds, an assertion failure will occur if the [`CAutoPtr::m_p`](#m_p) data member currently points to an existing value; that is, it's not equal to NULL.

### Example

See the example in the [`CAutoPtr` Overview](../../atl/reference/cautoptr-class.md).

## <a name="cautoptr"></a> `CAutoPtr::CAutoPtr`

The constructor.

```cpp
CAutoPtr() throw();
explicit CAutoPtr(T* p) throw();

template<typename TSrc>
CAutoPtr(CAutoPtr<TSrc>& p) throw();

template<>
CAutoPtr(CAutoPtr<T>& p) throw();
```

### Parameters

*`p`*\
An existing pointer.

*`TSrc`*\
The type being managed by another `CAutoPtr`, used to initialize the current object.

### Remarks

The `CAutoPtr` object can be created using an existing pointer, in which case it transfers ownership of the pointer.

### Example

See the example in the [`CAutoPtr` overview](../../atl/reference/cautoptr-class.md).

## <a name="dtor"></a> `CAutoPtr::~CAutoPtr`

The destructor.

```cpp
~CAutoPtr() throw();
```

### Remarks

Frees any allocated resources. Calls [`CAutoPtr::Free`](#free).

## <a name="detach"></a> `CAutoPtr::Detach`

Call this method to release ownership of a pointer.

```cpp
T* Detach() throw();
```

### Return value

Returns a copy of the pointer.

### Remarks

Releases ownership of a pointer, sets the [`CAutoPtr::m_p`](#m_p) data member variable to NULL, and returns a copy of the pointer. After calling `Detach`, it's up to the programmer to free any allocated resources over which the `CAutoPtr` object may have previously assumed responsibility.

### Example

See the example in the [`CAutoPtr` overview](../../atl/reference/cautoptr-class.md).

## <a name="free"></a> `CAutoPtr::Free`

Call this method to delete an object pointed to by a `CAutoPtr`.

```cpp
void Free() throw();
```

### Remarks

The object pointed to by the `CAutoPtr` is freed, and the [`CAutoPtr::m_p`](#m_p) data member variable is set to NULL.

## <a name="m_p"></a> `CAutoPtr::m_p`

The pointer data member variable.

```cpp
T* m_p;
```

### Remarks

This member variable holds the pointer information.

## <a name="operator_eq"></a> `CAutoPtr::operator =`

The assignment operator.

```cpp
template<>
CAutoPtr<T>& operator= (CAutoPtr<T>& p);

template<typename TSrc>
CAutoPtr<T>& operator= (CAutoPtr<TSrc>& p);
```

### Parameters

*`p`*\
A pointer.

*`TSrc`*\
A class type.

### Return value

Returns a reference to a `CAutoPtr< T >`.

### Remarks

The assignment operator detaches the `CAutoPtr` object from any current pointer and attaches the new pointer, *`p`*, in its place.

### Example

See the example in the [`CAutoPtr` overview](../../atl/reference/cautoptr-class.md).

## <a name="operator_ptr"></a> `CAutoPtr::operator ->`

The pointer-to-member operator.

```cpp
T* operator->() const throw();
```

### Return value

Returns the value of the [`CAutoPtr::m_p`](#m_p) data member variable.

### Remarks

Use this operator to call a method in a class pointed to by the `CAutoPtr` object. In debug builds, an assertion failure will occur if the `CAutoPtr` points to NULL.

### Example

See the example in the [`CAutoPtr` Overview](../../atl/reference/cautoptr-class.md).

## <a name="operator_t_star"></a> `CAutoPtr::operator T*`

The cast operator.

```cpp
operator T* () const throw();
```

### Return value

Returns a pointer to the object data type defined in the class template.

### Example

See the example in the [`CAutoPtr` overview](../../atl/reference/cautoptr-class.md).

## See also

[`CHeapPtr` class](../../atl/reference/cheapptr-class.md)\
[`CAutoVectorPtr` class](../../atl/reference/cautovectorptr-class.md)\
[Class overview](../../atl/atl-class-overview.md)
