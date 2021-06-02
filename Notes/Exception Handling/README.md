# Exception Handling

## Introduction

Exception handling allows you to manage run-time errors in an orderly fashion. Using exception handling, your program can automatically invoke an error-handling routine when an error occurs.

Code that you want to monitor for exceptions must have been executed from within a **try** block.

Exceptions that can be thrown by the monitored code are caught by a **catch** statement

**Syntax:**

```cpp
try {
// try block
}
catch (type1 arg) {
// catch block }
catch (type2 arg) { // catch block
}
catch (type3 arg) {
// catch block
}
.
.
.
catch (typeN arg) {
// catch block
}
```

The **throw** keyword throws an exception when a problem is detected, which lets us create a custom error

**Syntax:** `throw exception;`

Throwing an unhandled exception causes the standard library function terminate( ) to be invoked. By default, terminate( ) calls abort( ) to stop your program

**Possible Modifications:**

- try, catch, throw all in main()
- try, catch in main(), throw in another function
- try, catch, throw all localised in a function

## Creating Exception Classes

```cpp
#include <iostream>
#include <cstring>
using namespace std;
class MyException
{
public:
    char str_what[80];
    int what;
    MyException()
    {
        *str_what = 0;
        what = 0;
    }
    MyException(const char *s, int e)
    {
        strcpy(str_what, s);
        what = e;
    }
};
int main()
{
    int i;
    try
    {
        cout << "Enter a positive number: ";
        cin >> i;
        if (i < 0)
            throw MyException("Not Positive", i);
    }
    catch (MyException e)
    { // catch an error
        cout << e.str_what << ": ";
        cout << e.what << "\n";
    }
    return 0;
}
```

**Output :**

`Enter a positive number: -4`<br>
`Not Positive: -4`

## Using Multiple catch Statements

you can have more than one catch associated with a try. In fact, it is common to do so. However, each catch must catch a different type of exception. For example, this program catches both integers and strings.

```cpp
#include <iostream>
using namespace std;
void Xhandler(int test)
{
    try
    {
        if (test)
            throw test;
        else
            throw "Value is zero";
    }
		// responds to integer exception
    catch (int i)
    {
        cout << "Caught Exception #: " << i << '\n';
    }
		// responds to string exception
    catch (const char *str)
    {
        cout << "Caught a string: ";
        cout << str << '\n';
    }
}
int main()
{
    cout << "Start\n";
    Xhandler(1);
    Xhandler(2);
    Xhandler(0);
    Xhandler(3);
    cout << "End";
    return 0;
}
```

**Output:**

`Start Caught Exception #: 1` <br>
`Caught Exception #: 2` <br>
`Caught a string: Value is zero` <br> 
`Caught Exception #: 3 End`

## Handling Derived-Class Exceptions

If you want to catch exceptions of both a base class type and a derived class type, _put the derived class first in the catch sequence_. If you don't do this, the base class catch will also catch all derived classes.

```cpp
#include <iostream>
using namespace std;
class B
{
};
class D : public B
{
};
int main()
{
    D derived;
    try
    {
        throw derived;
    }
    catch (B b)
    {
        cout << "Caught a base class.\n";
    }
    catch (D d)
    {
        cout << "This won't execute.\n";
    }
    return 0;
}
```

## Catching All Exceptions
```cpp
catch(...) {
// _process all exceptions_

}
```

```cpp
#include <iostream>
using namespace std;
void Xhandler(int test)
{
    try
    {
        if (test == 0)
            throw test; // throw int
        if (test == 1)
            throw 'a'; // throw char
        if (test == 2)
            throw 123.23; // throw double
    }
    catch (int i)
    { // catch an int exception
        cout << "Caught an integer\n";
    }
    catch (...)
    { // catch all other exceptions
        cout << "Caught One!\n";
    }
}
int main()
{
    cout << "Start\n";
    Xhandler(0);
    Xhandler(1);
    Xhandler(2);
    cout << "End";
    return 0;
}
```

## Restricting Exceptions

```cpp
// This function can only throw ints, chars, and doubles.
   void Xhandler1(int test) throw(int, char, double)
// This function can throw NO exceptions!
   void Xhandler2(int test) throw()
```

The function Xhandler1( ) may only throw integer, character, and double exceptions.If it attempts to throw any other type of exception, an abnormal program termination will occur. (That is, unexpected( ) will be called.)

## Rethrowing an Exception

```cpp
#include <iostream>
using namespace std;
void Xhandler()
{
    try
    {
        throw "hello"; // throw a char *
    }
    catch (const char *)
    { // catch a char *
        cout << "Caught char * inside Xhandler\n";
        throw; // rethrow char * out of function
    }
}
int main()
{
    cout << "Start\n";
    try
    {
        Xhandler(); // throws an exception
    }
    catch (const char *)
    {
        cout << "Caught char * inside main\n";
    }
    cout << "End";
    return 0;
}
```

**Output:**

`Start` <br>
`Caught char * inside Xhandler` <br>
`Caught char * inside main End` 

## terminate( ) and unexpected( ):

These functions require the header `<exception>`

- The **terminate( )** function is called -

  (a) whenever the exception handling subsystem fails to find a matching **catch** statement for an exception.

  (b) if your program attempts to rethrow an exception when no exception was originally thrown.

- By default, **terminate( )** calls **abort( )**.
- The **unexpected( )** function is called -

  when a function attempts to throw an exception that is not allowed by its throw list.

- By default, **unexpected( )** calls **terminate( ).**

To change the terminate handler, use **set_terminate( )**, shown here:

```cpp
terminate_handler set_terminate(terminate_handler newhandler) throw( );
```

To change the unexpected handler, use **set_unexpected( )**, shown here:

```cpp
unexpected_handler set_unexpected(unexpected_handler newhandler) throw( );
```

**Example Code:**

```cpp
void my_Thandler()
{
    cout << "Inside new terminate handler\n";
    abort();
}
int main()
{
    // set a new terminate handler
    set_terminate(my_Thandler);
    try
    {
        cout << "Inside try block\n";
        throw 100; // throw an error
    }
    catch (double i) // won't catch an int exception so terminate() is called
    {
        // ...
    }
    return 0;
}
```

## uncaught_exception( )

`bool uncaught_exception( );`

This function returns **true** if an exception has been thrown but not yet caught. Once caught, the function returns **false**.

## The exception and bad_exception Classes

When a function supplied by the C++ standard library throws an exception, it will be an object derived from the base class **exception**. An object of the class **bad_exception** can be thrown by the unexpected handler. These classes require the header **<exception>.**

## Example Code (divide-by-zero error)

```cpp
#include <iostream>
using namespace std;
void divide(double a, double b);
int main()
{
    double i, j;
    do
    {
        cout << "Enter numerator (0 to stop): ";
        cin >> i;
        cout << "Enter denominator: ";
        cin >> j;
        divide(i, j);
    } while (i != 0);
    return 0;
}
void divide(double a, double b)
{
    try
    {
        if (!b)
            throw b; // check for divide-by-zero
        cout << "Result: " << a / b << endl;
    }
    catch (double b)
    {
        cout << "Can't divide by zero.\n";
    }
}
```
