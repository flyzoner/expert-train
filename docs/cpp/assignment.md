---
description: "Learn more about: Assignment"
title: "Assignment"
ms.date: "11/04/2016"
helpviewer_keywords: ["operators [C++], assignment", "assignment operators [C++], overloaded"]
ms.assetid: d87e4f89-f8f5-42c1-9d3c-184bca9d0e15
---
# Assignment

The assignment operator (**=**) is, strictly speaking, a binary operator. Its declaration is identical to any other binary operator, with the following exceptions:

- It must be a nonstatic member function. No **operator=** can be declared as a nonmember function.
- It is not inherited by derived classes.
- A default **operator=** function can be generated by the compiler for class types, if none exists.

The following example illustrates how to declare an assignment operator:

```cpp
class Point
{
public:
    int _x, _y;

    // Right side of copy assignment is the argument.
    Point& operator=(const Point&);
};

// Define copy assignment operator.
Point& Point::operator=(const Point& otherPoint)
{
    _x = otherPoint._x;
    _y = otherPoint._y;

    // Assignment operator returns left side of assignment.
    return *this;
}

int main()
{
    Point pt1, pt2;
    pt1 = pt2;
}
```

The supplied argument is the right side of the expression. The operator returns the object to preserve the behavior of the assignment operator, which returns the value of the left side after the assignment is complete. This allows chaining of assignments, such as:

```cpp
pt1 = pt2 = pt3;
```

The copy assignment operator is not to be confused with the copy constructor. The latter is called during the construction of a new object from an existing one:

```cpp
// Copy constructor is called--not overloaded copy assignment operator!
Point pt3 = pt1;

// The previous initialization is similar to the following:
Point pt4(pt1); // Copy constructor call.
```

> [!NOTE]
> It is advisable to follow the [rule of three](https://en.wikipedia.org/wiki/Rule_of_three_(C%2B%2B_programming)) that a class which defines a copy assignment operator should also explicitly define copy constructor, destructor, and, starting with C++11, move constructor and move assignment operator.

## See also

- [Operator Overloading](../cpp/operator-overloading.md)
- [Copy Constructors and Copy Assignment Operators (C++)](../cpp/copy-constructors-and-copy-assignment-operators-cpp.md)