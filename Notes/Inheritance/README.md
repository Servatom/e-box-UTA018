# Inheritance

The capability of a class to derive properties and characteristics from another class is called ***Inheritance.***

Sub Class:

The class that inherits properties from another class is called Sub class or Derived Class.

Super Class:

The class whose properties are inherited by sub class is called Base Class or Super class.

Implementing inheritance in C++:

- we either have to include definition of default base constructor or we need to explicitly call it
- we need to mark private variables of base class as protected if we want the derived class to access them


## **Syntax**:

```cpp
class subclass_name : access_mode base_class_name
{
  //body of subclass
};
```

```cpp
#include <iostream>
 using namespace std;
 class base 
 {
   int i, j;
 public:
   void set(int a, int b) { i=a; j=b; }
	 void show() { cout << i << " " << j << "\n"; }
 };
 class derived : public base 
 {
   int k;
   public:
   derived(int x) { k=x; }
   void showk() { cout << k << "\n"; }
};
int main() 
{
   derived ob(3);
   ob.set(1, 2); // access member of base
   ob.show(); // access member of base
   ob.showk(); // uses member of derived class
	return 0; 
}
```
## Types of Inheritance:

There are many types of inheritances, based on the number of subclasses/ base classes linked to each other. Let us have a look:

1. Single Inheritance - An inheritance in which a single derived class inherits its properties from a single parent class.
2. Multilevel Inheritance - Similar to Single inheritance, but here, the derived class further inherits its properties to another sub class.
3. Multiple Inheritance - Here, a single derived class inherits its properties from more than one base classes. 
4. Hierarchical Inheritance - Here, a single base class inherits its properties to more than one derived classes.
5. Hybrid Inheritance - It is the combination of various inheritances listed above. For eg, below is shown a hybrid inheritance consisting of Hierarchical, Multilevel and Multiple inheritance.

[![Inheritance-Flowchart](https://i.postimg.cc/Hn0J9ppt/Screenshot-2021-06-07-at-2-11-33-PM.png)](https://postimg.cc/V06LYP0S)

## Constructor, Destructor and Inheritance

- Constructors are executed in their order of derivation.
- Destructors are executed in reverse order of derivation.

```cpp
#include <iostream>
using namespace std;
class base {
    public:
    base() { cout << "Constructing base\n"; }
    ~base() { cout << "Destructing base\n"; }
    };
    class derived1 : public base {
    public:
    derived1() { cout << "Constructing derived1\n"; }
    ~derived1() { cout << "Destructing derived1\n"; }
    };
    class derived2: public derived1 {
    public:
    derived2() { cout << "Constructing derived2\n"; }
    ~derived2() { cout << "Destructing derived2\n"; }
};
int main() {
    derived2 ob;
    return 0; 
}

```

Output:

`Constructing base` <br>
`Constructing derived1` <br>
`Constructing derived2` <br>
`Destructing derived2` <br>
`Destructing derived1` <br>
`Destructing base` <br>

## DERIVING MULTIPLE BASE CLASSES

Syntax:

```cpp
class derived-class-name : access baseclass-name, access baseclass-name { 
	// body of class
};*
```

Constructors and destructors in multiple inheritance:

```cpp
#include <iostream>
using namespace std;
class base1 {
public:
    base1() { cout << "Constructing base1\n"; }
    ~base1() { cout << "Destructing base1\n"; }
};
class base2 {
public:
    base2() { cout << "Constructing base2\n"; }
    ~base2() { cout << "Destructing base2\n"; }
};
class derived: public base1, public base2 {
public:
    derived() { cout << "Constructing derived\n"; }
    ~derived() { cout << "Destructing derived\n"; }
};
int main() {
    derived ob;// construct and destruct ob
    return 0; 
}
```

Output:

`Constructing base1`<br>
`Constructing base2`<br>
`Constructing derived`<br>
`Destructing derived`<br>
`Destructing base2`<br>
`Destructing base1`<br>

Constructors are called in order of derivation, left to right, as specified in derived's inheritance list.

Destructors are called in reverse order, right to left

## Passing Parameters to Base-Class Constructors

Syntax:

```cpp
derived-constructor(arg-list) : base1(arg-list), base2(arg-list),
																// ... baseN(arg-list)
{
// body of derived constructor
}
```

Even if a derived class' constructor does not use any arguments, it will still need to declare one if the base class requires it. In this situation, the arguments passed to the derived class are simply passed along to the base.

## Virtual Base Classes

The only difference between a normal base class and a virtual one is what occurs when an object inherits the base more than once. 

If virtual base classes are used, then only one base class is present in the object. Otherwise, multiple copies will be found.

```cpp
class base { i };

class derived1: public base {  } // inherits 'i'
class derived2: public base {  } // inherits 'i'

class derived3: public derived1, public derived2 {  } // inherits 'derived1::i', 'derived2::i'. i.e. two copies of 'i' 

derived ob;
ob.i = 3; // this is ambiguous as to which copy of 'i' we're referring to
```

Using namespace:

```cpp
derived3 ob;
ob.derivded1::i = 88;
```

Using virtual:

```cpp
class base { i };

class derived1: virtual public base {  } // i
class derived2: virtual public base {  } // i

class derived3: public derived1, public derived2 {  } // i       only one copy created

derived ob;
ob.i = 3; // this is unambiguous

derived1 ob2;
ob2.i = 88; // this works perfectly fine cause individual copies are maintained
```
