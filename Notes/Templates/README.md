# Templates

Previously, we have done function overloading. eg:

```cpp
int add(int a, int b)
{
	int c=a+b;
	return c;
}

float add(float a, float b)
{
	float c=a+b;
	return c;
}

double add(double a, double b)
{
	double c=a+b;
	return c;
}

int main()
{
	int a,b;
	int c=add(a,b);        // add(int,int).   Case 1
	float e,f,d;
	d=add(e,f);            // add(float,float).   Case 2
	return 0;
}
```

It enables us to write multiple definitions for the same function out of which, the best match is executed based on the types of arguments passed. But still, we are required to manually write multiple definitions for the same function.

The main purpose of using templates (also called as generic functions) is same as function overloading, but here we pass over the writing stuff to the compiler!

We don't need to write multiple definitions for a single function(like in function overloading) but provide a blueprint which is flexible to adjust itself according to the datatypes provided.

It helps us in situations where the logic (algorithm) is same irrespective of the data type passed. 
Eg: Sorting an array. It doesn't matter if the array is of integer type or float, it has to be sorted the same way, thus algorithm being the same.

### The syntax:

```cpp
template <typename , typename>
ret_type func-name (parameter list)
{ 
	//body of the function
}
```

```cpp
//example 1
template <typename t1, typename t2>
t1 add(t1 a, t2 b){ t1 c=a+b; return c;}

//example 2
template<typename t1, typename t2>
t1 add(t1 a, t2 b, t1 c, t2 d, int e){...}
```

It is important to understand that no other statements can occur between the template statement and the start of the generic function definition. For example, the fragment shown next will not compile.

```cpp
// This will not compile.
template <class X>
int i; // this is an error
void swapargs(X &a, X &b)
{
	X temp;
	temp = a;
	a = b;
	b = temp;
}
```

As the comments imply, the template specification must directly precede the
function definition.

### The keyword `typename` can be interchangeably used with the keyword `class`.

> **IMPORTANT:** The typenames inside angular brackets have nothing to do with the number of arguments in the function header. It just tells the compiler that how many distinct datatypes can be used simultaneously for the function.

Going back to the first program,

In Case 1, the compiler will look for an `add(int,int)` function. If it exists, it will be used. If it doesn't exist, then compiler looks for standard template definition. If no template is found, it returns an error. If template found, compiler will generate `t1` as `int` and `t2` as `int.`

Similarly, in Case 2, the compiler will look for `add(float,float)` function. if it exists, it will be used. If it doesn't exist, the compiler will look for standard template. If template is found, it will generate `t1` as `float` and `t2` as `float`. If template is also absent, it will return an error.

### Rules for templates:

1. Templates can be overloaded. There can exist exact definitions for a function and also a template, simultaneously. But the compiler checks for the exact definition first and then looks for template in case the definition is not found.
2. Not all arguments in the template function need to be defined as `typenames` . They may be defined as exact datatypes like int, float, etc. (see example 2 of template syntax).
3. Only write as much typenames in the angular brackets which are being used in the function definition. If we write extra typenames which are not being used anywhere in the function definition, we'll get an error.

**Observe the following code:**

```cpp
#include<iostream>
using namespace std;

template <typename t1, typename t2>
t1 add(t1 a, t2 b)
{
    t1 c=a+b;
    return c;
}

int main()
{
    float z=add(6.3,2);     //t1=float.   t2=int.   So, return type becomes float
    cout<<z<<endl;
    z=add(2,6.3);            //t1=int.   t2=float.   So, return type becomes int
    cout<<z<<endl;
    return 0;
}
```

**Output:**

```cpp
8.3
8
```

- A program to swap the value of two variables, made with templates (click on the arrow to expand)

    ```cpp
    // Function template example.
    #include <iostream>
    using namespace std;
    // This is a function template.
    template <class X> void swapargs(X &a, X &b)
    {
		X temp;
		temp = a;
		a = b;
		b = temp;
    }
    int main()
    {
		int i=10, j=20;
		double x=10.1, y=23.3;
		char a='x', b='z';
		cout << "Original i, j: " << i << ' ' << j << '\n';
		cout << "Original x, y: " << x << ' ' << y << '\n';
		cout << "Original a, b: " << a << ' ' << b << '\n';
		swapargs(i, j); // swap integers
		swapargs(x, y); // swap floats
		swapargs(a, b); // swap chars
		cout << "Swapped i, j: " << i << ' ' << j << '\n';
		cout << "Swapped x, y: " << x << ' ' << y << '\n';
		cout << "Swapped a, b: " << a << ' ' << b << '\n';
		return 0;
    }
    ```

> **Some Important terms related to templates:**

First, a generic function (that is, a function definition preceded by a template statement) is also called a template function. Both terms can be used interchangeably. When the compiler creates a specific version of this function, it is said to have created a specialisation. This is also called a generated function. The act of generating a function is referred to as instantiating it. 

Put differently, a generated function is a specific instance of a template function.

## Explicitly overloading generic functions

Even though a generic function overloads itself as needed, we can explicitly overload
one, too. This is formally called explicit specialisation. If we overload a generic function,
that overloaded function overrides (or "hides") the generic function relative to that specific version. For example, consider the following revised version of the argument-
swapping example shown earlier.

```cpp
// Overriding a template function.
#include <iostream>
using namespace std;
template <class X> void swapargs(X &a, X &b)
{
	X temp;
	temp = a;
	a = b;
	b = temp;
	cout << "Inside template swapargs.\n";
}
// This overrides the generic version of swapargs() for ints.
void swapargs(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "Inside swapargs int specialization.\n";
}
int main()
{
	int i=10, j=20;
	double x=10.1, y=23.3;
	char a='x', b='z';
	cout << "Original i, j: " << i << ' ' << j << '\n';
	cout << "Original x, y: " << x << ' ' << y << '\n';
	cout << "Original a, b: " << a << ' ' << b << '\n';
	swapargs(i, j); // calls explicitly overloaded swapargs()
	swapargs(x, y); // calls generic swapargs()
	swapargs(a, b); // calls generic swapargs()
	cout << "Swapped i, j: " << i << ' ' << j << '\n';
	cout << "Swapped x, y: " << x << ' ' << y << '\n';
	cout << "Swapped a, b: " << a << ' ' << b << '\n';
	return 0;
}
```

**Output:**

```cpp
Original i, j: 10 20
Original x, y: 10.1 23.3
Original a, b: x z
Inside swapargs int specialization.
Inside template swapargs.
Inside template swapargs.
Swapped i, j: 20 10
Swapped x, y: 23.3 10.1
Swapped a, b: z x
```

As the comments inside the program indicate, when `swapargs(i,j)` is called, it
invokes the explicitly overloaded version of `swapargs( )` defined in the program. Thus,
the compiler does not generate this version of the generic `swapargs( )` function, because
the generic function is overridden by the explicit overloading.

> Recently, a new-style syntax was introduced to denote the explicit specialisation of a function. This new method uses the template keyword.

```cpp
// Use new-style specialization syntax.
template<> void swapargs<int>(int &a, int &b)     //notice <int> 
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout << "Inside swapargs int specialization.\n";
}
```

### Overloading templates:

```cpp
// Overload a function template declaration.
#include <iostream>
using namespace std;

// First version of f() template.
template <class X> void f(X a)
{
	cout << "Inside f(X a)\n";
}

// Second version of f() template.
template <class X, class Y> void f(X a, Y b)
{
	cout << "Inside f(X a, Y b)\n";
}
int main()
{
	f(10); 	// calls f(X)
	f(10, 20); // calls f(X, Y)
	return 0;
}
```

Though templates provide us with the flexibility of data types passed in the function, it also restricts us by execution the same set of statements for the the data types, unlike overloaded functions, where we have the freedom of fully changing the algorithm inside the function body. This can be fixed by template overloading.

## Some important generic functions:

- Generic Sort

    ```cpp
    template <class X> void bubble(
    X *items, // pointer to array to be sorted
    int count) // number of items in array
    {
	register int a, b;
	X t;
	for(a=1; a<count; a++)
	for(b=count-1; b>=a; b--)
	if(items[b-1] > items[b]) 
	{
		// exchange elements
		t = items[b-1];
		items[b-1] = items[b];
		items[b] = t;
	}
    }
    ```

- Compacting an Array

    ```cpp
    template <class X> void compact(
    X *items, // pointer to array to be compacted
    int count, // number of items in array
    int start, // starting index of compacted region
    int end) // ending index of compacted region
    {
	register int i;
	for(i=end+1; i<count; i++, start++)
	items[start] = items[i];
	/* For the sake of illustration, the remainder of
	the array will be zeroed. */
	for( ; start<count; start++) items[start] = (X) 0;
    }
    ```

---

# Generic Classes

In addition to generic functions, we can also define a generic class. By this, we create a class that defines all the algorithms used by that class; however, the actual type of the data being manipulated will be specified as a parameter when objects of that class are created.

> The use of generic classes?

👉 Generic classes are useful when a class uses logic that can be generalised. For example, the same algorithms that maintain a queue of integers will also work for a queue of characters, and the same mechanism that maintains a linked list of mailing  addresses will also maintain a linked list of auto part information. When you create a generic class, it can perform the operation you define, such as maintaining a queue or a linked list, for any type of data. The data type is provided while declaring the object and then the compiler handles all the remaining stuff related to creation of appropriate object for the same.

### The syntax:

```cpp
template <class Ttype> class *class-name* 
{
		...
}
```

N number of generic data types (here, Ttype) may be declared while defining the template.

Once the template for a generic class is made, the object for the class is declared in the following format:

`*class-name* <type> ob;`

> **Fun fact**

> STL is based on the concept of generic classes!

### An implementation of generic classes

In the following program, the **stack** class is reworked into a generic class. Thus, it can be used to store objects of any type. In this example, a character stack and a floating-point stack are created, but any data type can be used.

```cpp
// This function demonstrates a generic stack.
#include <iostream>
using namespace std;
const int SIZE = 10;
// Create a generic stack class
template <class StackType> 
class stack 
{
	StackType stck[SIZE]; // holds the stack
	int tos;              // index of top-of-stack
	public:
	stack() { tos = 0; }      // initialize stack

	void push(StackType ob); // push object on stack
	StackType pop();         // pop object from stack
};

// Push an object.
template <class StackType> void stack<StackType>::push(StackType ob)
{
	if(tos==SIZE) {
		cout << "Stack is full.\n";
		return;
	}
	stck[tos] = ob;
	tos++;
}

// Pop an object.
template <class StackType> StackType stack<StackType>::pop()
{
	if(tos==0) {
		cout << "Stack is empty.\n";
		return 0; // return null on empty stack
	}
	tos--;
	return stck[tos];
}

int main()
{
	// Demonstrate character stacks.
	stack<char> s1, s2; // create two character stacks
	int i;
	s1.push('a');
	s2.push('x');
	s1.push('b');
	s2.push('y');
	s1.push('c');
	s2.push('z');
	for(i=0; i<3; i++) cout << "Pop s1: " << s1.pop() << "\n";
	for(i=0; i<3; i++) cout << "Pop s2: " << s2.pop() << "\n";

	// demonstrate double stacks
	stack<double> ds1, ds2; // create two double stacks
	ds1.push(1.1);
	ds2.push(2.2);
	ds1.push(3.3);
	ds2.push(4.4);
	ds1.push(5.5);
	ds2.push(6.6);
	for(i=0; i<3; i++) cout << "Pop ds1: " << ds1.pop() << "\n";
	for(i=0; i<3; i++) cout << "Pop ds2: " << ds2.pop() << "\n";
	return 0;
}
```

### Output:

```
Pop s1: c
Pop s1: b
Pop s1: a
Pop s2: z
Pop s2: y
Pop s2: x
Pop ds1: 5.5
Pop ds1: 3.3
Pop ds1: 1.1
Pop ds2: 6.6
Pop ds2: 4.4
Pop ds2: 2.2
```

Notice how the desired data type is passed inside the **angle brackets**. By changing the type of data specified when stack objects are created, we can change the type of data stored in that **stack.**

We can also pass user define datatypes inside angular brackets, thus forming a stack of the same data type. Eg: 

```cpp
struct addr 
{
	char name[40];
	char street[40];
	char city[30];
	char state[3];
	char zip[12];
};
```

Creating a stack of `addr` type

`stack<addr> obj;`

### Generic class with two are more generic data types

---

A template class can have more than one generic data type. Simply declare all the data types required by the class in a comma-separated list within the template specification.

Eg:

```cpp
#include <iostream>
using namespace std;
template <class Type1, class Type2> class myclass
{
	Type1 i;
	Type2 j;
	public:
	myclass(Type1 a, Type2 b) { i = a; j = b; }
	void show() { cout << i << ' ' << j << '\n'; }
};
int main()
{
	myclass<int, double> ob1(10, 0.23);
	myclass<char, char *> ob2('X', "Templates add power.");
	ob1.show(); // show int, double
	ob2.show(); // show char, char *
	return 0;
}
```

**Output:**

```
10 0.23
X Templates add power.
```

### Using non-type arguments with generic classes

---

While defining the template, we can also specify some standard arguments like an integer or a pointer.

```cpp
#include <iostream>
#include <cstdlib>
using namespace std;

**// Here, int size is a non-type argument.**
template <class AType, int size> class atype {
AType a[size];       // length of array is passed in size
public:
atype() {
register int i;
for(i=0; i<size; i++) a[i] = i;
}
AType &operator[](int i);
};

// Provide range checking for atype.
template <class AType, int size>
AType &atype<AType, size>::operator[](int i)
{
if(i<0 || i> size-1) {
cout << "\nIndex value of ";
cout << i << " is out-of-bounds.\n";
exit(1);
}
return a[i];
}
```

Here, the `size` argument is used inside the template to define the size of the array `a` . It is also used in the operator function to check bounds of the array. 

Though, the argument `size` appears as a variable, its value is known at compile time.

> Non-type parameters are restricted to integers, pointers, or references. Other types, such as float, are not allowed. The arguments that you pass to a non-type parameter must consist of either an integer constant, or a pointer or reference to a global function or object. 

Thus, non-type parameters should themselves be thought of as constants, since their values cannot be changed.

For example, inside operator[ ]( ), the following statement is not allowed.

`size = 10; // Error`

### Using Default Arguments with Template Classes

---

 We can even define default arguments in the template header, which will be used in case no argument is passed explicitly.

```cpp
template <class X=int> class myclass { //...
```

Here, the type int will be used if no other type is specified when an object of type `myclass` is instantiated.

Example code for better understanding:

```cpp
#include <iostream>
#include <cstdlib>
using namespace std;

// Here, AType defaults to int and size defaults to 10.
template <class AType=int, int size=10> 
class atype {
	AType a[size]; // size of array is passed in size
	public:
	atype() {
		register int i;
		for(i=0; i<size; i++) a[i] = i;
	}
	AType &operator[](int i);
};

// Provide range checking for atype.
template <class AType, int size>
AType &atype<AType, size>::operator[](int i)
{
	if(i<0 || i> size-1) {
		cout << "\nIndex value of ";
		cout << i << " is out-of-bounds.\n";
		exit(1);
	}
	return a[i];
}

int main()
{
	atype<int, 100> intarray; // integer array, size 100

	atype<double> doublearray; // double array, default size

	atype<> defarray; // default to int array of size 10

	int i;
	cout << "int array: ";
	for(i=0; i<100; i++) intarray[i] = i;
	for(i=0; i<100; i++) cout << intarray[i] << " ";
	cout << '\n';
	cout << "double array: ";
	for(i=0; i<10; i++) doublearray[i] = (double) i/3;
	for(i=0; i<10; i++) cout << doublearray[i] << " ";
	cout << '\n';
	cout << "defarray array: ";
	for(i=0; i<10; i++) defarray[i] = i;
	for(i=0; i<10; i++) cout << defarray[i] << " ";
	cout << '\n';
	return 0;
}
```

Here, `AType` defaults to type int, and `size` defaults to 10. As the program illustrates,
`atype` objects can be created three ways:

👉 explicitly specifying both the type and size of the array
👉 explicitly specifying the type, but letting the size default to 10
👉 letting the type default to int and the size default to 10

---
<p align="center">Fin. ✌️</p>

---
