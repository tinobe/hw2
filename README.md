# Homework 2
### due until 11.11., 8:30

You are already familiar with the `cout` command to print
information to the console. Using a very similar command, you can
redirect output directly to a file. For this you have to include
the header file `fstream` and use an `ofstream` object,
as is demonstrated by the listing below.

```cpp
#include <iostream>
#include <fstream>

using namespace std;

int main(void)
{
 int a,b;
 ofstream out("output.dat");

 // Read input from console
 cout << "a = ";  cin >> a;      
 cout << "b = ";  cin >> b;

 cout << "a = " << a
      << "\t b = " << b << endl;   // Print to console
 out  << "a = " << a
      <<  "\t b = " << b << endl;  // Print to file

 out.close();

 return(0);
```
The formatting command ``\t`` prints
a tabulator in the respective position. After executing this program
a new file ``output.dat`` has been generated which contains all the things
you stuffed into ``out`` using the ``<<`` operator.

### Your assignment is:

Modify the program ***logmap.cxx*** (which is the solution to the problem to Lab 2) in the following way:
* Add a function which calculates the values
  *x_1*, ..., *x_n* for a given value of *r*.
  As input parameters, the function should be given
	an array into which the values are stored, the length
	of the array and the value of *r*.
* Add a function which prints the contents of an array
  it is given to a file. This function needs to be passed
  the array itself, the length of the array and the value of
  *r*. The output should have the same layout as in the
  original problem.
* Restructure your original program to use these two new
  functions.    

For the implementations of these functions, split *declaration*
from *definition*.
