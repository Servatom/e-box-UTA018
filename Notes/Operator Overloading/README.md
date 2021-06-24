# Operator Overloading

C++ allows us to specify more than one definition for an operator in the same scope, which is called **operator overloading**.

Operator overloading enables us to use operators (arithmetic, braces, arrow operator, etc.) with objects of user defined classes. This makes our work easy and saves the need of making and calling functions to perform operation on objects.

It is a type of **polymorphism.**

> **What is the difference between operator functions and normal functions?**

Operator functions are same as normal functions. The only differences are, **name of an operator function is always `operator` keyword** followed by **symbol of operator** and operator functions are called when the corresponding operator is used.

Though almost all operators can be overloaded in C++, the following operators are the *few exceptions*:

- scope resoluter (::)
- sizeof()
- member selection/ dot operator (.)
- ternary operator (?:)

When we use primitive datatypes (like int, float , double), we can directly perform arithmetic operations on them as follows:

```cpp
int x=5,y=6;
int z;
z=x+y;      // Completely fine 
```

But when we are working with objects of user defined classes, we can't directly add/subtract the objects because the compiler doesn't know what it means. 

```cpp
class Complex
{...}

Complex a,b,c;
c=a+b; 	// Doesn't work as the compiler doesn't know it has 
	//to add real part with real and imaginary part with imaginary

//rather, we used to create member funstions like add(Complex a, Complex b)
// and do something like c3.add(c1,c2);

```

Now with operator overloading, we can do the following:

```cpp
#include<iostream>
using namespace std;

class Complex
{
    float real,img;
    public:
    Complex(float a, float b)
    {
        real=a;
        img=b;
    }
    Complex(){}

    void show()
    {
        cout<<real<<" + "<<img<<"i"<<endl;
    }
    Complex operator +(Complex c)
    {
        Complex c2;
        c2.real=real+c.real;
        c2.img=img+c.img;
        return c2;
    }
};

int main()
{
    Complex c1(3,4);
    Complex c2(1,2);
    Complex c3;
    c3=c1+c2;           // look how we are using '+' directly with objects
                        // similar to c3=c1.add(c2);
    c3.show();
    return 0;
}
```

**The output:**

```cpp
4 + 6i
```

---

eg 2:

```cpp
int main()
{
    Complex c1(3,4);
    Complex  c2(1,2);
    Complex c3(2,3);
    Complex c4;
    c4=c1+c2+c3;       // benefit of operator overloading
    c4.show();
    return 0;
}
```

> Here, (c2+c3) is computed first, then c1+(c2+c3) is computed.

**The output:**

```cpp
6 + i9
```

---

## The syntax:

```cpp
return_type operator operator (type operand_2){...}
```

> *return_type* - can be the class type, void, or any other return type. 
**operator** - keyword. Mandatory for operator overloading.
*operator* - write the operator to be overloaded i.e. '+' , '-', '/' ,'()', etc.

And in case of binary operator, we need to specify the argument also.

## Important Points about operator overloading:

1. For operator overloading to work, at least one of the operands must be a user defined class object.
2. **Assignment Operator**: Compiler automatically creates a default assignment operator with every class. The default assignment operator does assign all members of right side to the left side and works fine most of the cases (this behaviour is same as copy constructor). 

- **An interesting code example that will show you the usage of overloaded arithmetic operators:**
(click arrow to expand)

    ```cpp
    #include<iostream>
    using namespace std;

    int hcf(int,int);
    class fraction
    {
        int num,den;
        public:
        fraction(){}
        fraction(int a, int b)
        {
            num=a;
            den=b;
        }
        fraction operator +(fraction f)
        {
            fraction f2;
            f2.num= num*f.den + den*f.num;
            f2.den= den*f.den;
    	    int h=hcf(f2.num,f2.den);         // this code reduces the fraction in its standard form
            f2.num=f2.num/h;
            f2.den=f2.den/h;
            return f2;
        }
        fraction operator -(fraction f)
        {
            fraction f2;
            f2.num= num*f.den - den*f.num;
            f2.den= den*f.den;
            int h=hcf(f2.num,f2.den);
            f2.num=f2.num/h;
            f2.den=f2.den/h;
            return f2;
        }
        fraction operator *(fraction f)
        {
            fraction f2;
            f2.num= num*f.num;
            f2.den= den*f.den;
            int h=hcf(f2.num,f2.den);
            f2.num=f2.num/h;
            f2.den=f2.den/h;
            return f2;
        }
        fraction operator /(fraction f)
        {
            fraction f2;
            f2.num= num*f.den;
            f2.den= den*f.num;
            int h=hcf(f2.num,f2.den);
            f2.num=f2.num/h;
            f2.den=f2.den/h;
            return f2;
        }

        void show()
        {
            cout<<num<<"/"<<den<<endl;
        }
    };

    int hcf(int a, int b)
    {
        if(a==0)
        return b;
        else 
        return hcf(b%a,a);
    }

    int main()
    {
        fraction f1(3,4);
        fraction f2(1,2);
        fraction f3;

        f3=f1+f2;      // addition 
        f3.show();
        
        f3=f1-f2;       // subtraction
        f3.show();

        f3=f1*f2;       // multiplication
        f3.show();

        f3=f1/f2;       //division
        f3.show();

        return 0;
    }
    ```

    **The Output:**

    ```cpp
    5/4
    1/4
    3/8
    3/2
    ```

## Unary operator overloading

This includes overloading of pre/post increment or decrement operators. Since these operators require only one operand, we don't require any argument of the class type inside operator overloading function. The return type can also be set to `void` as we are not returning any value, but simply incrementing/decrementing the value of a member of an object.

**Pre-increment/decrement  vs Post-increment/decrement:**

```cpp
#include<iostream>
using namespace std;
class weight
{
    int kg;
    public:
    weight(){
        kg=0;
    }
    weight(int a)
    {
        kg=a;
    }
    void show()
    {
        cout<<"Weight in Kg : "<<kg<<endl;
    }
    void operator ++()      // pre-increment operator overloading. Pre-decrement can be overloaded in a same way
    {
        ++kg;
    }
    void operator ++(int)   // post-increment operator overloading. Post-decrement can be overloaded in a same way
    {
        kg++;
    }
};

int main()
{
    weight obj(60);
    obj.show();
    ++obj;
    cout<<"After pre-incrementing\n";
    obj.show();
    obj++;                   // observe that no argument is passed while calling, but only in declaration 
    cout<<"After post-incrementing\n";
    obj.show();

    return 0;
}
```

**Output:**

```cpp
Weight in Kg : 60
After pre-incrementing
Weight in Kg : 61
After post-incrementing
Weight in Kg : 62
```

> **The Difference?**

The only key difference in the syntax for overloading pre and post operators is that while declaring post increment/decrement, we need to pass `int` as an argument in the function definition. This is just to make the compiler distinguish between pre and post operators. Nothing else. Because if we would have not written `int`, there is practically no difference between the function declarations of pre and post increment/decrement overloaded functions, so the compiler won't be able to tell which definition needs to be executed. 
**REMEMBER:** The int argument is passed **only while declaring** the function, and not while calling it.

Now, what would happen if we do the following with the above code:

```cpp
weight obj1(70);
weight obj2;
obj2= ++obj1;
obj2.show();
```

- **Solution**

    We will get an error as follows:

    ```cpp
    no viable overloaded '='
        obj2= ++obj1;
    ```

    This is because our return type for the overloaded operator was `void`. Thus, the RHS doesn't return any value but we are trying to assign it to the LHS. In order to fix this, we need to change the return type to `weight`. The following code can be used to fix the problem:

    ```cpp
    weight operator ++()
    {
	weight temp;
	temp.kg=++kg;
	return temp;
    }
    ```

    Now, `obj2= ++obj1;` is valid. Also, we can simply use `++obj1;` too as the value of `kg` is being incremented in the function. So, the above definition serves both the purposes. 

    It is a good practice to write the function definition in this way as it helps us to increment/decrement objects in the same manner as primitive data types.

 

## Operator overloading using friend functions

We can overload an operator for a class by using a non-member function, which is
usually a friend of the class. Since a friend function is not a member of the class, it
does not have a `this` pointer. Therefore, an overloaded friend operator function is passed
the operands explicitly. This means that a friend function that overloads a binary operator
has two parameters, and a friend function that overloads a unary operator has one
parameter. **When overloading a binary operator using a friend function, the left operand
is passed in the first parameter and the right operand is passed in the second parameter.**

```cpp
#include <iostream>
using namespace std;
class loc {
    int longitude, latitude;
    public:
    loc() {} // needed to construct temporaries
    loc(int lg, int lt) 
    {
        longitude = lg;
        latitude = lt;
    }
    void show() 
    {
        cout << longitude << " ";
        cout << latitude << "\n";
    }
    friend loc operator+(loc op1, loc op2); // now a friend
    loc operator=(loc op2);

};

// Now, + is overloaded using friend function.
loc operator+(loc op1, loc op2)
{
    loc temp;
    temp.longitude = op1.longitude + op2.longitude;
    temp.latitude = op1.latitude + op2.latitude;
    return temp;
}

// Overload assignment for loc.
loc loc::operator=(loc op2)
{
    longitude = op2.longitude;
    latitude = op2.latitude;
    return *this; // i.e., return object that generated call
}

int main()
{
    loc ob1(10, 20), ob2( 5, 30);
    ob1 = ob1 + ob2;
    ob1.show();
    return 0;
}
```

> There are some restrictions that apply to friend operator functions. You
may not overload the =, ( ), [ ], or –> operators by using a friend function.

## Overloading ++ and - - using Friend functions

If you want to use a friend function to overload the increment or decrement operators, **you must pass the operand as a reference parameter**. This is because friend functions do not have `this` pointers. If you overload these operators by using a friend, then the operand is passed by value as a parameter. This means that a friend operator function has no way to modify the operand. Since the friend operator function is not passed a `this` pointer to the operand, but rather a copy of the operand, no changes made to that parameter affect the operand that generated the call.

Thus, to actually make the operator work the way it is supposed to work, we must pass the object as reference to make changes in it.

```cpp
#include <iostream>
using namespace std;
class loc {
	int longitude, latitude;
	public:
	loc() {}
	loc(int lg, int lt) {
			longitude = lg;
			latitude = lt;
	}
	void show() {
			cout << longitude << " ";
			cout << latitude << "\n";
	}
	friend loc operator++(loc &op);
	friend loc operator--(loc &op);
};

loc operator++(loc &op)      // ++ overloading using friend function
{                            // this is pre-increment
	++op.longitude;
	++op.latitude;
	return op;
}

loc operator--(loc &op)      // pre-decrement
{                            
	--op.longitude;
	--op.latitude;
	return op;
}

int main()
{
	loc ob1(10, 20), ob2;
	ob1.show();  // displays 10 20
	++ob1;
	ob1.show();  // displays 11 21
	ob2 = ++ob1;
	ob2.show();  // displays 12 22
	--ob2;
	ob2.show();  // displays 11 21
	return 0;
}
```

If you want to overload the postfix versions of the increment and decrement operators
using a friend, simply specify a second, dummy integer parameter.

```cpp
// friend, postfix version of ++
friend loc operator++(loc &op, int x);
```

## Benefits of using friend functions over member functions?

Friend functions make operator overloading more flexible. The restriction with operator overloading through member functions is that the first operand has to be an object of the class, as it calls the function. So, if we want to do arithmetic operations on an object and a primitive data type, the object needs to be written first and then the primitive data type. 

```cpp
obj2= obj1 + 5       // valid (but we need to overload the operator in this way first)

obj2= 5 + obj1       // not valid using member functions
```

Since, in case of friend functions, we need to explicitly pass all the operands as arguments, we can create 2 versions for the same function, with different order of arguments, like this:

```cpp
// + is overloaded for loc + int.
loc operator+(loc op1, int op2)
{
	loc temp;
	temp.longitude = op1.longitude + op2;
	temp.latitude = op1.latitude + op2;
	return temp;
}
// + is overloaded for int + loc.
loc operator+(int op1, loc op2)
{
	loc temp;
	temp.longitude = op1 + op2.longitude;
	temp.latitude = op1 + op2.latitude;
	return temp;
}
```

# Overloading [ ], () and - >

C++ defines array subscripting, function calling, and class member access as operations.
The operators that perform these functions are the [ ], ( ), and –>, respectively. 
One important restriction applies to overloading these three operators: They must
be non-static member functions. They cannot be **friends.**

### Overloading [ ]

```cpp
type class_name::operator[](int i)     // i is the index of the element which we want to access
{
// . . .
}
```

When we have an array as a member (say, *arr*) of a class and we want to access the value at index i of the member, we can overload the [ ] operator to work it in a way that when we write `obj[i]` , it actually returns us the value `obj.arr[i]`.

```cpp
#include <iostream>
using namespace std;
class atype {
	int a[3];
	public:
		atype(int i, int j, int k) 
		{
				a[0] = i;
				a[1] = j;
				a[2] = k;
		}
	int operator[](int i) { return a[i]; }
};
int main()
{
	atype ob(1, 2, 3);
	cout << ob[1]; // displays 2
	return 0;
}
```

We can design the operator [](notion://www.notion.so/Operator-Overloading-c3a361073a0e49949fce556b3b38a1a9) function in such a way that the [ ] can be used on both the left and right sides of an assignment statement. To do this, simply specify the return value of operator [](notion://www.notion.so/Operator-Overloading-c3a361073a0e49949fce556b3b38a1a9) as a reference. The following program makes this change and shows its use:

```cpp
#include <iostream>
using namespace std;
class atype {
	int a[3];
	public:
	atype(int i, int j, int k) 
	{
		a[0] = i;
		a[1] = j;
		a[2] = k;
	}
	int &operator[](int i) { return a[i]; }
};
int main()
{
	atype ob(1, 2, 3);
	cout << ob[1]; // displays 2
	cout << " ";
	ob[1] = 25; // [] on left of =
	cout << ob[1]; // now displays 25
	return 0;
}
```

### Overloading ( )

We can pass any arbitrary number of arguments in this overloaded operator function. When we overload the ( ) operator, we define the parameters that we want to pass to that function. When we use the ( ) operator in our program, the arguments we specify are copied to those parameters.

```cpp
#include <iostream>
using namespace std;
class loc {
	int longitude, latitude;
	public:
	loc() {}
	loc(int lg, int lt) 
	{
		longitude = lg;
		latitude = lt;
	}
	void show() 
	{
		cout << longitude << " ";
		cout << latitude << "\n";
	}
	loc operator+(loc op2);
	loc operator()(int i, int j);
};

// Overload ( ) for loc.
loc loc::operator()(int i, int j)
{
	longitude = i;
	latitude = j;
	return *this;
}

// Overload + for loc.
loc loc::operator+(loc op2)
{
	loc temp;
	temp.longitude = op2.longitude + longitude;
	temp.latitude = op2.latitude + latitude;
	return temp;
}
int main()
{
	loc ob1(10, 20), ob2(1, 1);
	ob1.show();
	ob1(7, 8);      // can be executed by itself
	ob1.show();
	ob1 = ob2 + ob1(10, 10);     // can be used in expressions
	ob1.show();
	return 0;
}
```

Output: 

```cpp
10 20
7 8
11 11
```

> **Remember**, when overloading ( ), we can use any type of parameters and return any type of value. These types will be dictated by the demands of our programs. We can also specify default arguments.

### Overloading - >

The –> pointer operator is also called the ***class member access operator.*** Its general usage is shown here:

*`object->element;`*

The operator–>( ) function must return a pointer to an object of the class that operator–>( ) operates upon. The *element* must be some member accessible within the object.

```cpp
#include <iostream>
using namespace std;
class myclass {
	public:
	int i;
	myclass *operator->()    
	{
		return this;         // very simple definition
	}
};
int main()
{
	myclass ob;
	ob->i = 10;       // same as ob.i
	cout << ob.i << " " << ob->i;
	return 0;
}
```

 

> An operator–>( ) function must be a member of the class upon which it works.

---

<p align="center">Fin.  ✌️ </p>

---
