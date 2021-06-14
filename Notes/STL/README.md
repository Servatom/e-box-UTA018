# STL - Standard Template Library

After having learned about generic functions and classes, let's see their implementation. 

It provides general-purpose, *templatized* classes and functions that implement many popular and commonly used algorithms and data structures, like vectors, lists, queues, stacks, etc. Because the STL is constructed from template classes, the algorithms and data structures can be applied to nearly any type of data.

**Contents:**

Any STL has three parts:

1. **Container** eg: Lists, Set, Map, Vector, which is the memory block that stores data. These are objects that store other objects.
2. **Iterator** which helps us to move across the elements in the container. They are analogous to pointers that help us move through an array.  
3. **Algorithms** like sorting, searching, reversing etc. These act on the containers and provide a means to manipulate the content of the containers.

> In short, algorithms use iterators to interact with containers.

[Some widely used containers:](STL%20-%20Standard%20Template%20Library%2066a0eb69071242f092e93e99d9cd2bf2/Some%20widely%20used%20containers%20d0dae3432d814ae08740df85aa92d185.csv)

> List: UNORDERED, Not DISTINCT
Set: ORDERED, DISTINCT

Before we proceed, we shall look at the general syntax of defining an iterator for a template class:

```cpp
container_name<class type> :: iterator iter_name
```

## Vector

Till now we have mostly used a static array who's size is fixed at compile time. The vector class supports a dynamic array. This is an array that can grow as needed.

**Syntax:**

```cpp
vector<data_type> obj_name;
```

A vector has the following constructors:

```cpp
vector<int> iv;            // create zero-length int vector
vector<char> cv(5);        // create 5-element char vector
vector<char> cv(5, 'x');   // initialize a 5-element char vector with 'x'
vector<int> iv2(iv);       // create int vector from an int vector; copy constructor
```

> The following comparison operators are defined for vector:
==, <, <=, !=, >, >=

Though `vector` is a a dynamic array, it allows us to use [ ] for subscripting, i.e accessing elements with index, just like in static arrays. Once a vector contains elements, you can use array subscripting to access or modify those elements.

**Some important member functions defined for vectors:**

- `size()` The size( ) function returns the current size of the vector. It allows you to determine     the size of a vector at run time.
- `begin()` Returns an iterator to the start of the vector.
- `end()` Returns an iterator to the end of the vector.
- `empty()` Returns true if the invoking vector is empty and false otherwise.
- `push_back(value)` Puts a value onto the end of the vector. If necessary, the vector is increased in length to accommodate the new element.
- `pop_back()` Removes the last element in the vector.
- `insert(i, value)` Add element at specified position. Here `i` is an iterator that has to be defined beforehand.
- `insert(i, num, value)` Inserts ***num*** copies of ***val*** immediately before the element specified by ***i***.
- `erase(start, end)` Remove elements from start to end in a vector; if one arg passed, removes element at that position
- `clear()` Removes all elements from a vector.

A code example that shows basic operations on a vector:

```cpp
#include <iostream>
#include <vector> // must include to use vector containers
#include <cctype>
using namespace std;
int main()
{
    vector<char> v(10); // create a vector of type char of length 10
    unsigned int i;

    // display original size of v
    cout << "Size = " << v.size() << endl;

    // assign the elements of the vector some values
    for (i = 0; i < 10; i++)
        v[i] = i + 'a'; // notice the array subscripting

    // display contents of vector
    cout << "Current Contents:\n";
    for (i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << "\n\n";

    cout << "Expanding vector\n";
    /* put more values onto the end of the vector,
		it will grow as needed */
    for (i = 0; i < 10; i++)
        v.push_back(i + 10 + 'a');

    // display current size of v
    cout << "Size now = " << v.size() << endl;

    // display contents of vector
    cout << "Current contents:\n";
    for (i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << "\n\n";

    // change contents of vector
    for (i = 0; i < v.size(); i++)
        v[i] = toupper(v[i]);

    cout << "Modified Contents:\n";
    for (i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    return 0;
}
```

**Output:**

```cpp
Size = 10
Current Contents:
a b c d e f g h i j
Expanding vector
Size now = 20
Current contents:
a b c d e f g h i j k l m n o p q r s t
Modified Contents:
A B C D E F G H I J K L M N O P Q R S T
```

---

**Accessing vector elements using an iterator:**

Arrays and pointers are closely linked together. Just like how elements of an array can be accessed either using subscript or using pointers, in STL, the pointer's job is done by an **iterator**.

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<char> v(10);         // creating a char vector of size 10;
    vector<char>::iterator p;   // declaring an iterator
    int i = 0;
    p = v.begin();              // p now points to the start of vector v
    while (p != v.end())
    {
        *p = i + 'a';           // This is called dereferencing
        p++;
        i++;
    }

    // diplaying contents of v
    cout << "Original contents:\n";
    p = v.begin();
    while (p != v.end())
    {
        cout << *p << " ";
        p++;
    }
    return 0;
}
```

**Output:**

```cpp
Original contents:
a b c d e f g h i j
```

---

**Inserting and deleting elements in a vector:**

In addition to putting new values on the end of a vector, we can insert elements into the middle using the `insert( )` function. We can also remove elements using `erase( ).` The following program demonstrates insert( ) and erase( ):

```cpp
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<char> v(10);
    vector<char> v2;
    char str[] = "<Vector>";
    unsigned int i;

    // initialize v
    for (i = 0; i < 10; i++)
        v[i] = i + 'a';

    // copy characters in str into v2
    for (i = 0; str[i] != '\0'; i++)
        v2.push_back(str[i]);

    // display original contents of vector
    cout << "Original contents of v:\n";
    for (i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << "\n\n";

    vector<char>::iterator p = v.begin();
    p += 2; // point to 3rd element

    // insert 10 X's into v
    v.insert(p, 10, 'X');

    // display contents after insertion
    cout << "Size after inserting X's = " << v.size() << endl;
    cout << "Contents after insert:\n";
    for (i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << "\n\n";

    // remove those elements
    p = v.begin();
    p += 2;             // point to 3rd element
    v.erase(p, p + 10); // remove next 10 elements

    // display contents after deletion
    cout << "Size after erase = " << v.size() << endl;
    cout << "Contents after erase:\n";
    for (i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << "\n\n";

    // Insert v2 into v
    v.insert(p, v2.begin(), v2.end());
    cout << "Size after v2's insertion = ";
    cout << v.size() << endl;
    cout << "Contents after insert:\n";
    for (i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    return 0;
}
```

**Output:**

```cpp
Original contents of v:
a b c d e f g h i j
Size after inserting X's = 20
Contents after insert:
a b X X X X X X X X X X c d e f g h i j
Size after erase = 10
Contents after erase:
a b c d e f g h i j
Size after v2's insertion = 18
Contents after insert:
a b < V e c t o r > c d e f g h i j
```

---

**Storing Class Objects in a Vector:**

Just like we store primitive datatypes, we can store user define datatypes and class objects in vectors.

```cpp
#include <iostream>
#include <vector>
using namespace std;

class temp
{
    float Cent;
    float Fahr;

public:
    temp()
    {
        Cent = 0;
        Fahr = 0;
    }
    temp(float x)
    {
        Cent = x;
        Fahr = (9 / 5) * Cent + 32;
    }
    void calcFahr()
    {
        Fahr = (float)(9 * Cent) / 5 + 32;
    }
    float getCent()
    {
        return Cent;
    }
    float getFahr()
    {
        return Fahr;
    }
};
int main()
{
    vector<temp> t;
    vector<temp>::iterator p;
    int i;
    for (i = 0; i < 10; i++)
    {
        t.push_back(temp(i));
    }

    cout << "Temperature in Centigrade: \n";
    for (i = 0; i < t.size(); i++)
        cout << t[i].getCent() << " ";

    cout << endl
         << endl;

    for (i = 0; i < t.size(); i++)
    {
        t[i].calcFahr();
    }

    p = t.begin();
    cout << "Temperature in Fahrenheit: \n";
    while (p != t.end())
    {
        cout << p->getFahr() << " ";
        p++;
    }
    return 0;
}
```

**Output:**

```cpp
Temperature in Centigrade: 
0 1 2 3 4 5 6 7 8 9 

Temperature in Fahrenheit: 
32 33.8 35.6 37.4 39.2 41 42.8 44.6 46.4 48.2
```

---

## List

The list class supports a bidirectional, linear list. Unlike a vector, which supports random access, a list can be accessed **sequentially only**. Since lists are bidirectional, they may be accessed front to back or back to front.

**Syntax:**

```cpp
list<data_type> obj_name;
```

A list has the following constructors:

```cpp
list<int> l;                     // empty list
list<int> l(4);                  // a list with 4 elements
list<int> l(5, 1);               // a list with 5 elements initialised as 1
list<int> l({1, 2, 3, 4, 5});    // list conatins all the inner elements
list<int> l(l2);                 // all elements of l2, which is another list, copied to l
list<int> l(v.begin(), v.end()); // list conatining all elements of a vector v
```

> The following comparison operators are defined for list:
==, <, <=, !=, >, ≥

**Some commonly used member functions of lists:**

- `size()` Returns the number of elements currently in the list.
- `begin()` Returns an iterator to the first element in the list.
- `end()` Returns an iterator to the end of the list.
- `list1.merge(list2)`  Merges one list into another; list being merged becomes empty;
- `push_back(val)` Adds an element with the value specified by *val* to the end of the list.
- `push_front(val)` Adds an element with the value specified by *val* to the front of the list.
- `pop_back()` Removes the last element in the list.
- `pop_front()` Removes the first element in the list.
- `insert(i, val)` Inserts *val* immediately before the element specified by i.
- `insert(i, num, val)` Inserts *num* copies of *val* immediately before the element specified by i.
- `remove(val)` Removes elements with the value *val* from the list.
- `sort()` Sorts the list.
- `splice()` Joins two lists.
- `empty()` Returns true if invoking list is empty, else returns false.
- `erase(i)`  Removes the element at position given by iterator i.
- `clear()`  Removes all elements from the list.

The functions common to list and vectors can be used with lists in a similar fashion as we used with vectors above.

**Understanding end( )**

`end( )` does not return a pointer to the last element in a container. Instead, it returns a pointer one past the last element. Thus, the last element in a container is pointed to by `end( ) - 1`. When the iterator has the same value as the one returned by end( ), we know that all elements have been accessed.

```cpp
// Understanding end().
#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> lst; // create an empty list
    int i;
    for (i = 0; i < 10; i++)
        lst.push_back(i);
    cout << "List printed forwards:\n";
    list<int>::iterator p = lst.begin();
    while (p != lst.end())
    {
        cout << *p << " ";
        p++;
    }
    cout << "\n\n";
    cout << "List printed backwards:\n";
    p = lst.end();
    while (p != lst.begin())
    {
        p--; // decrement pointer before using
        cout << *p << " ";
    }
    return 0;
}
```

**Output:**

```cpp
List printed forwards:
0 1 2 3 4 5 6 7 8 9
List printed backwards:
9 8 7 6 5 4 3 2 1 0
```

As `push_back()` was used to add elements at the end of the container, `push_front()` adds elements at the start of the list. 

```cpp
list<int> lst1, lst2;
int i;
for(i=0; i<10; i++) lst1.push_back(i);    // 0 1 2 3 4 5 6 7 8 9
for(i=0; i<10; i++) lst2.push_front(i);   // 9 8 7 6 5 4 3 2 1 0
```

The `sort()` function makes our life easy by doing the sorting with a single function call. Following is an example:

```cpp
// Sort a list.
#include <iostream>
#include <list>
#include <cstdlib>
using namespace std;
int main()
{
    list<int> lst;
    int i;

    // create a list of random integers
    for (i = 0; i < 10; i++)
        lst.push_back(rand());

    cout << "Original contents:\n";
    list<int>::iterator p = lst.begin();
    while (p != lst.end())
    {
        cout << *p << " ";
        p++;
    }
    cout << endl
         << endl;

    // sort the list
    lst.sort();

    cout << "Sorted contents:\n";
    p = lst.begin();
    while (p != lst.end())
    {
        cout << *p << " ";
        p++;
    }
    return 0;
}
```

**Output:**

```cpp
Original contents:
41 18467 6334 26500 19169 15724 11478 29358 26962 24464
Sorted contents:
41 6334 11478 15724 18467 19169 24464 26500 26962 29358
```

---

**Merging one list with other:**

One ordered list may be merged with another. The result is an ordered list that contains the contents of the two original lists. The new list is left in the invoking list, and the second list is left empty.

```cpp
// Merge two lists.
#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> lst1, lst2;
    int i;
    for (i = 0; i < 10; i += 2)
        lst1.push_back(i);
    for (i = 1; i < 11; i += 2)
        lst2.push_back(i);

    cout << "Contents of lst1:\n";
    list<int>::iterator p = lst1.begin();
    while (p != lst1.end())
    {
        cout << *p << " ";
        p++;
    }
    cout << endl
         << endl;

    cout << "Contents of lst2:\n";
    p = lst2.begin();
    while (p != lst2.end())
    {
        cout << *p << " ";
        p++;
    }
    cout << endl
         << endl;

    // now, merge the two lists
    lst1.merge(lst2);
    if (lst2.empty())
        cout << "lst2 is now empty\n";

    cout << "Contents of lst1 after merge:\n";
    p = lst1.begin();
    while (p != lst1.end())
    {
        cout << *p << " ";
        p++;
    }
    return 0;
}
```

**Output:**

```cpp
Contents of lst1:
0 2 4 6 8
Contents of lst2:
1 3 5 7 9
lst2 is now empty
Contents of lst1 after merge:
0 1 2 3 4 5 6 7 8 9
```

Notice the use of `empty()` here. It returns a boolean value; `true` when the invoking list is empty, else false. The `merge()` function empties the second list (i.e, the list being merged) which is confirmed by the program output.

---

**Merging one list with other:**

 similar to that in vectors

---

## Map

The map class supports an ***associative container*** in which unique keys are mapped with values. In essence, a key is simply a name that we give to a value. Once a value has been stored, we can retrieve it by using its key. In short, a map is a list of key-value pairs.

> A map can hold only **unique** keys.

The `map` and the `multimap` are both containers that manage key/value pairs as single components. The essential difference between the two is that in a `map` the keys must be unique, while a `multimap` permits duplicate keys.

**Syntax:**

```cpp
map<class key, class value> map_object;
```

> The following comparison operators are defined for map.
==, <, <=, !=, >, ≥

A map has the following constructors:

```cpp
map<int, int> m;                                    // empty map
map<int, int> m2(m.find(*key1 *), m.find(*key2 *)); // Copying from a range
map<int, int> m3(m2);                               // copy constructor
map<int, int> m4{{'a', 1}, {'b', 2}};               // list of pairs

m.insert(pair<char, int>('A', 65));
m.insert(make_pair((char)'A', 65));
```

The 4th type of initialisation is supported by Clang 3.6.2 initialiser-list syntax.  

use `g++ -std=c++11 <filename>`  while compiling to make it work

> Key/value pairs are stored in a map as objects of type **pair**, which has this template specification.

```cpp
template <class Ktype, class Vtype>
struct pair
{
    typedef Ktype first_type;  // type of key
    typedef Vtype second_type; // type of value
    Ktype first;               // contains the key
    Vtype second;              // contains the value

    // constructors
    pair();
    pair(const Ktype &k, const Vtype &v);
    template <class A, class B>
    pair(const<A, B> &ob);
}
```

**Some commonly used member functions of maps:**

- `size()` Returns the number of elements currently in the list.
- `begin()` Returns an iterator to the first element in the map.
- `end()` Returns an iterator to the end of the list.
- `count(k)` Returns the number of times k occurs in the map (1 or zero). Used to check presence of a key in a map.
- `find(k)` Returns an iterator to the specified key. If the key is not found, then an iterator to the end of the map is returned.
- `insert(i, val)` Inserts *val* at or after the element specified by i.
- `insert(pair<key_type, val_type>(K, V))` Inserts key/val into the invoking map.
- `empty()`
- `erase()`
- `clear()`

**Accessing Key-Value Pairs in a Map:**

```cpp
map<char, int> m;
map<char, int>::iterator p;
p->first     // gives the key of the elements
p->second    // gives the value of the elements
// OR
(*p).first
(*p).second
```

The following program illustrates the basics of using a map. It stores key/value pairs that show the mapping between the uppercase letters and their ASCII character codes. Thus, the key is a character and the value is an integer.

```cpp
#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<char, int> m;
    int i;

    // put pairs into map
    for (i = 0; i < 26; i++)
    {
        m.insert(pair<char, int>('A' + i, 65 + i));
    }
    char ch;
    cout << "Enter key: ";
    cin >> ch;
    map<char, int>::iterator p;

    // find value given key
    p = m.find(ch);
    if (p != m.end())
        cout << "Its ASCII value is " << p->second;
    else
        cout << "Key not in map.\n";
     ̰ return 0;
}
```

Another interesting thing about maps is that we can use subscripting with map variables to access a value. The content inside [ ] is the key. If `m` is a map variable, `m[*key*]` will return the value for *key .*  If no such key exists in the map, a default value (i.e. 0) is added for the key passed in the map. So, one should be careful. 

```cpp
#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, int> m1;

    m1.insert(pair<int, int>(1, 10)); //input of insert function is object of pair
    m1.insert(pair<int, int>(4, 10));
    m1.insert(pair<int, int>(2, 70));
    m1.insert(pair<int, int>(3, 30));
    m1.insert(pair<int, int>(4, 11)); //no duplicates allowed....ignores this entry
    m1.insert(pair<int, int>(2, 19));
    //ordered entries are created...ascending

    map<int, int>::iterator p = m1.begin();
    cout << "Map 1:\n";
    while (p != m1.end())
    {
        cout << "{ " << p->first << " --> " << p->second << " }" << endl;
        p++;
    }
    cout << endl
         << endl;

    //for descending ->
    map<int, int, greater<int> > m2(m1.begin(), m1.end()); // greater<int> is a comparator function
                                                           // which defualts to less<key_type>
    p = m2.begin();
    cout << "Map 2:\n";
    while (p != m2.end())
    {
        cout << "{ " << p->first << " --> " << p->second << " }" << endl;
        p++;
    }

    cout << "\n\nUsing subscripting [ ] to access map values:\n";
    cout << "m1[1] = " << m1[1] << endl;
    ;
    cout << "m2[3] = " << m2[3] << endl;
    return 0;
}
```

**Output:**

```cpp
Map 1:
{ 1 --> 10 }
{ 2 --> 70 }
{ 3 --> 30 }
{ 4 --> 10 }

Map 2:
{ 4 --> 10 }
{ 3 --> 30 }
{ 2 --> 70 }
{ 1 --> 10 }

Using subscripting [ ] to access map values:
m1[1] = 10
m2[3] = 30
```

---

**Adding class objects to map:**

It is similar to that in vectors and lists. Following is a code example: 

```cpp
#include <iostream>
#include <map>
#include <cstring>
using namespace std;

class name
{
    char str[40]; // string type can be used instead
public:
    name() { strcpy(str, ""); }
    name(char *s) { strcpy(str, s); }
    char *get() { return str; }
};

// Must define less than relative to name objects.
bool operator<(name a, name b)
{
    return strcmp(a.get(), b.get()) < 0;
}

class phoneNum
{
    char str[80]; // string type can be used instead
public:
    phoneNum() { strcmp(str, ""); }
    phoneNum(char *s) { strcpy(str, s); }
    char *get() { return str; }
};

int main()
{
    map<name, phoneNum> directory;
    // put names and numbers into map
    directory.insert(pair<name, phoneNum>(name("Tom"),
                                          phoneNum("555-4533")));

    directory.insert(pair<name, phoneNum>(name("Chris"),
                                          phoneNum("555-9678")));

    directory.insert(pair<name, phoneNum>(name("John"),
                                          phoneNum("555-8195")));

    directory.insert(pair<name, phoneNum>(name("Rachel"),
                                          phoneNum("555-0809")));

    // given a name, find number
    char str[80];
    cout << "Enter name: ";
    cin >> str;
    map<name, phoneNum>::iterator p;
    p = directory.find(name(str));

    if (p != directory.end())
        cout << "Phone number: " << p->second.get();
    else
        cout << "Name not in directory.\n";
    return 0;
}
```

**Output:**

```cpp
Enter name: Rachel
Phone number: 555-0809
```

## Algorithms

Algorithms act on containers. Although each container provides support for its own basic operations, the standard algorithms provide more extended or complex actions. They also allow us to work with two different types of containers at the same time. To have access to the STL algorithms, we must include `<algorithm>` in your program.

- `count(container.begin(), conatiner.end(), val)`  returns the number of times ***val*** appears in the given range.
- `count_if(container.begin(), conatiner.end(), pfn)` returns the number of elements in the sequence beginning at start and ending at end for which the unary predicate function ***pfn*** returns true.
- `sort (values.begin(), values.end());` sorts elements in ascending order in the range.
- `reverse (values.begin(), values.end());` reverses a sequence.
- `random_shuffle (values.begin(), values.end());` shuffles the elements randomly.
- `remove_copy(c1.begin(), c1.end(), c2.begin(), val)` copies all the elements from c1 container into c2 container whose beginning is given by an iterator, except the elements which are equal to ***val***.
- `transform(vals.begin(), vals.end(), vals.begin(), func_name)` transforms each element in the range according to the function ***func_name*** which must accept an argument of element's type and return the same type.

---

## String class

> Include `<string>` to use string class.

The string class has many advantages over the typical char array. It makes our work easier by providing us with operator functions to be used with objects of string type, just the way they are used with other primitive datatypes. For eg, equating 2 strings as `str1=str2` , concatination of two strings with a + sign, `str3=str1 + str2` and many such things, which otherwise require a bunch of code when using null terminated strings.

**Initialising String class objects using constructors:** 

```cpp
#include <string>

string s1;           // empty string object
string s2("hello!"); // converts a null terminated string into string object
string s3(s2);       // copy constructor
```

The need of `strcmp()`, `strcpy()`, `strcat()` is replaced by the regular operators in c++, like ==, < = , > = , <, >, ! =, +, =, [ ], to list a few.

 

The + operator can be used to concatenate a string object with another string object or a string object with a C-style string. That is, the following variations are supported:

- string + string
- string + C-string
- C-string + string

**Some string member functions:**

Thanks to @Rupanshi Jain for the code examples!

- `assign()`  useful when assigning a partial string, else `=` can be used

    ```cpp
    str1 = "Hello";
    str2 = "Programmers";
    str1.assign(str2);         // assign str2 to invoking object i.e. str1 = "Programmers"
    str1.assign(str2, 4, 3);   // assign 3 characters from 4th index of str2 to str1 i.e. str1 = "ram"
    ```

- `append()` good when appending a partial string

    ```cpp
    str1 = "Hello World! ";
    str2 = "Error found ";

    str1.append(str2);      // Hello World! Error found

    str1.append(str2, 5);   // Appends 5 characeters from str2 to str1
                            // i.e. str1 = "Hello World! Error"

    str2.append(str1, 0, 5); // Appends 5 characters from 0th index of str1 to str2
                             // i.e. str2 = "Error found Hello"

    str2.append(5, '!');    // Appends 5 occurences of '!' to str2
                            // i.e. str2 = "Error found !!!!!"
    ```

- `insert()` helps in inserting one string into other at any specified index

    ```cpp
    str1 = "Hello !";
    str2 = "I am Groot";

    str1.insert(6, str2);       // Insert str2 in str1 starting from index 6 of str1
    				 			// i.e. str1 = "Hello I am Groot!"

    str1.insert(6, str2, 5, 4); // Insert 4 characters from index 5 of str2 at index 6 of str1
    				 			// i.e. str1 = "Hello Groo!"
    ```

- `replace()` replaces content of invoking string with string passed in argument, as per the number of characters told to be replaced.

    ```cpp
    str1 = "Jack and Jill";
    str2 = "Bill";

    str1.replace(0, 4, str2);         	// Replace 4 characters from 0th index of str1 with str2
    									// i.e. str1 = "Bill and Jill"

    str1.replace(5, 3, str2, 1, 3);   	// Replace 3 characters from 5th index of str1 with
    									// 3 characters from 1st index of str2
    									// i.e. str1 = "Jack ill Jill"
    ```

- `erase()` removes characters from the string

    ```cpp
    str1 = "Windows or Linux";
    str1.erase(0, 11); 	// Erase 11 characters starting from index 0
    			      	// i.e. str1 = "Linux"
    ```

- `find()`, `rfind()` returns the index at which the match occurs within the invoking string. If no match is found, npos is returned.

    ```cpp
    str1 = "Hello World Hello";
    str1.find("Hello");         // 0
    str1.find("Hello", 7);      // 12
    str1.find("World", 7);      // string::npos
    str1.rfind("Hello");        // 12 (reverse find)
    ```

- `str1.compare(str2)`

    if str1 < str2 returns less than zero

    if str1 > str2 returns greater than zero

    if str1 = str2 returns zero

- `begin()`
- `end()`
- `size()`

## Hashing

Hashing is a process which takes place internally while the key-value pairs are being binded. 

But we can explicitly generate the hash keys for any type of value passed. This is done by creating an object of class `hash` . For this, you need `#include<bits/stdc++>` .

The hash class has only one member function, which is `operator ()` . We pass a value of any type as argument, and we get a hash key for the same. The interesting part is, for the same value, we always get the same key during one execution of the program.

Hashing maps a given value to a particular key. This helps in faster access. 

> Hashing is a one way encryption which means you cannot go from key to value.

**Syntax:**

```cpp
hash<class type> *hash_obj*;   	// The class type has to be the one which we will 
								// pass in the operator function
```

Let's look at some hash keys produced by passing different kinds of data:

```cpp
#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s("Hello");

    hash<int> intHash;
    hash<float> floatHash;
    hash<string> stringHash;
    hash<char> charHash;
    hash<bool> boolHash;

    cout<<"Hash key for 5 is : "<<intHash(5)<<endl;
    cout<<"Hash key for -5 is : "<<intHash(-5)<<endl;
    cout<<"Hash key for 3.54 is : "<<floatHash(3.54)<<endl;
    cout<<"Hash key for 'Hello' is : "<<stringHash(s)<<endl;
    cout<<"Hash key for 'a' is : "<<charHash('a')<<endl;
    cout<<"Hash key for boolean true is : "<<boolHash(true)<<endl;
    cout<<"Hash key for boolean false is : "<<boolHash(false)<<endl;

    return 0;

}
```

**Output:**

```cpp
Hash key for 5 is : 5
Hash key for -5 is : 18446744073709551611
Hash key for 3.54 is : 1080201052
Hash key for 'Hello' is : 6469172175062732785
Hash key for 'a' is : 97
Hash key for boolean true is : 1
Hash key for boolean false is : 0
```

> Some important takeaways:

- Hash key for positive integer is same as its value and for negative it is a complicated code.
- Hash key is getting calculated same as ASCII value of the character (for char case)
- Hash key for boolean true is 1, while for boolean false is 0.
- For other data types, a complicated hash key is being calculated by a complex process.

So, hash can be seen more like an operation, rather than a container. It is used in encryption, generally in the field of internet security. 

---

                                                                         Fin ✌️

---
