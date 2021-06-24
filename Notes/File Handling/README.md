# File Handling

## Formatting I/O

```cpp
//Formatting example

#include<iostream>
using namespace std;

int main(){

	cout<<showpos<<10.1234<<endl; //show +/- sign

	cout.precision(4); //total display digits

	cout<<-12.34567<<endl;

	cout.width(5); // Right justify with 5 char

	cout << 'c' <<endl;

}
```

```cpp
OUTPUT
+10.1234
-12.35
    c
```

## Modes :

`ios::app`  causes all output to that file to be appended to the end.

`ios::ate` causes a seek to the end of the file to occur when the file is opened.

`ios::binary` causes a file to be opened in binary mode

`ios::in` specifies that the file is capable of input

`ios::out` specifies that the file is capable of output

`ios::trunc` causes the contents of a preexisting file by the same name to be destroyed, and the file is truncated to zero length.

## Syntax:

```cpp
// Load this header to access I/O classes and functions
#include <fstream>

					/* FILE OUTPUT */

// Opening a file
ofstream out("myfile.txt");

// Check if file has successfully been opened
if (!out.is_open()){
	cout << "Cannot open the file \n";
	return 1;
}

// Writing to a file
out << "Radios " << 39.95 << endl;
out << "Toasters " << 19.95 << endl;
out << "Mixers " << 24.80 << endl;

					/* FILE INPUT */
// Opening a file
ifstream in("myfile.txt");

// Check if file has successfully been opened
if (!in){
	cout << "Cannot open the file \n";
	return 1;
}

// Reading from a file
char item[20];
float cost;
in >> item >>  cost;
cout << item << " " << cost << "\n";
in >> item >> cost;
cout << item << " " << cost << "\n";
in >> item >> cost;
cout << item << " " << cost << "\n"

OR

while(in) or while(!in.eof()){
	in.get(ch);
	cout << ch;
}

// Closing a file
in.close();
out.close();
```

## put() and get()

unformatted data functions

```cpp
ifstream in ("File1.txt");
ofstream out("File2.txt");

while(in.get(ch)){
	out.put(ch);
}
```

*cin.get() includes white space characters. Generally, cin with an extraction operator (>>) terminates when whitespace is found. However, cin.get() reads a string with the whitespace.*

## read() and write()

read and write blocks of binary data

The read( ) function reads num characters from the invoking stream and puts them in the buffer pointed to by buf. The write( ) function writes num characters to the invoking stream from the buffer pointed to by buf.

i.e. only a single call to read or write is needed they don't read and write character-by-character or line-by-line instead they just deal with blocks of code.

## .gcount()

**gcount( )** is used to determine how many bytes were just read.

## .getline()

this function reads character by character unless a newline character (if delimiter is not mentioned) is found or EOF is encountered.

```cpp
char str[255];
ifstream in("file.txt")
while(in){
	in.getline(str, 255);
}
```

The difference b/w getline() and get() is that **getline( )** reads and removes the delimiter from the input stream; **get( )** does not.

## .eof()

It returns true when the end of the file has been reached; otherwise it returns false.

## .ignore()

read and discard characters from the input stream.

`in.ignore(10, ' ')` ignores characters until 10 characters have been read or a space has been encountered.

## .peek() and .putback()

peek() returns next character in the stream or eof

putback() returns the last character read from a stream

## .flush()

force the information to be physically written to disk before the buffer is full

## File Pointers

The C++ I/O system manages two pointers associated with a file. One is the *get* pointer, which specifies where in the file the next input operation will occur. The other is the *put* pointer, which specifies where in the file the next output operation will occur.

Using the *seekg( )* and *seekp( )* functions allows you to access the file in a non-sequential fashion.

ios::beg Beginning-of-file
ios::cur Current location
ios::end End-of-file

```cpp
/* This code swaps characters at pos1 and pos2 */

fstream inout("myfile", ios::in | ios::out | ios::binary);

// takes reader pointer to pos from beginning 
// seekg used for read operation
inout.seekg(pos1, ios::beg);
inout.get(c1);

inout.seekg(pos2, ios::beg);
inout.get(c2);

// takes writer pointer to pos1 from beginning
// seekp used for write operation
inout.seekp(pos1, ios::beg);
inout.put(c2);

inout.seekp(pos2, ios::beg);
inout.put(c1);
```

*tellg() and tellp() tell the current position of each file pointer*

## Text vs Binary Files

- In text files various character translations are performed such as “\r+\f” is converted into “\n”, whereas in binary files no such translations are performed.
- Text files are less memory efficient than binary files.
- Access is slower using sequential search in text files. Each binary file maintains a header of content index for faster search as compared to text files. More info is required but access is faster.
- By default, C++ opens the files in text mode.

## Useful codes for file programs

```cpp
// how to count characters in a file

int count = 0; 
char ch; 
while(!fin.eof()) 
{ 
	fin.get(ch); 
	count++; 
}

// how to count words in a file

int count = 0; 
char word[30]; 
while(!fin.eof()) 
{ 
	fin >> word; 
	count++; 
}

// how to count lines in a file

int count = 0; 
char str[80];

while(!fin.eof()) 
{ 
	fin.getline(str,80); 
	count++; 
}
```

```cpp
// Copy contents of one file into another

#include<iostream>
#include<fstream>

using namespace std;

int main() {
	char ch;
	ifstream fin("MySecrets.txt");
	ofstream fout("CopyMySecrets.txt");

	while(!fin.eof()) 
	{
		fin.get(ch);
		fout << ch;
	}

	fin.close(); 
	fout.close();

}
```
