# Polymorphism

# Virtual Functions

A virtual function is a member function that is declared within a base class and redefined by a derived class. To create a virtual function, precede the function's declaration in the base class with the keyword **virtual.**

```cpp
class Base
{
	public : virtual void vfunc() { cout << "Parent"; }
};
class derived1 : public Base
{
	public : void vfunc() { cout << "First Child"; }
};
class derived2 : public Base
{
	public : void vfunc() { cout << "Second Child"; }
};

// Use a base class reference parameter.
void f(base &r) {
    r.vfunc(); 
}

int main()
{
	base *p, b;
	derived d1;
	derived d2;

	/* Calling through base-class pointer */
	p = &b; p -> vfunc();
	p = &d1; p -> vfunc();
	p = &d2; p -> vfunc();

	/* Calling through base-class reference */
	f(b); // pass a base object to f()
	f(d1); // pass a derived1 object to f()
	f(d2); // pass a derived2 object to f()
}
```

### Differences b/w virtual functions and function overloading

- Prototype for a redefined *virtual function* must match exactly the prototype specified in the base class. In *function overloading*, return types and the number and type of parameters may differ.1.

### Restrictions

- virtual functions must be nonstatic members of the classes of which they are part.
- They cannot be friends.
- Finally, constructor functions cannot be virtual, but destructor functions can.

*Because of the restrictions and differences between function overloading and virtual function redefinition, the term overriding is used to describe virtual function redefinition by a derived class.*

### Properties

- **The Virtual Attribute Is Inherited**

    When a virtual function is inherited, its virtual nature is also inherited. This means that when a derived class that has inherited a virtual function is itself used as a base class for another derived class, the virtual function can still be overridden.

- **Virtual Functions Are Hierarchical**

    When a derived class fails to override a virtual function, then when an object of that derived class accesses that function, the function defined by the base class is used.

### Pure Virtual Functions

A *pure virtual function* is a virtual function that has no definition within the base class. To declare a pure virtual function, use this general form:

`virtual type func-name(parameter-list*) = 0;`

⚠️ When a virtual function is made pure, any derived class must provide its own definition. If the derived class fails to override the pure virtual function, a compile-time error will result.

### Abstract Class

- A class that contains at least one pure virtual function is said to be abstract.
- Because an abstract class contains one or more functions for which there is no definition (that is,a pure virtual function), no objects of an abstract class may be created.
- An abstract class constitutes an incomplete type that is used as a foundation for derived classes.
- Although you cannot create objects of an abstract class, you can create pointers and references to an abstract class.

### Early vs Late Binding

1. Early binding refers to events that occur at compile time. Early binding means that an object and a function call are bound during compilation.
2. Examples of early binding include normal function calls (including standard library functions), overloaded function calls, and overloaded operators.
3. The main advantage to early binding is efficiency. Because all information necessary to call a function is determined at compile time, these types of function calls are very fast.

---

1. Late binding refers to function calls that are not resolved until run time.
2. Virtual functions are used to achieve late binding.
3. The main advantage to late binding is flexibility. Unlike early binding, late binding allows you to create programs that can respond to events occurring while the program executes without having to create a large amount of "contingency code."