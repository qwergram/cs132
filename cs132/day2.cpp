#include <iostream> // C++ cin/cout
#include <iomanip>  // <io_manip>ulation
#include <cstdlib>  // includes "stdlib.h"

using namespace std;

// if you write more "main" functions, it will become mangled
// remember when you tried to extend python w/ c++? yeah we ran into that
// problem.
int globalIntenger = 10;
int main() {
	int age = 19;
	// return type is an "ostream"
	// cout is an ostream, and "<<" is throwing things in regardless of type
	cout << "hello, world" << '!' << " I am " << age << " years old!" << endl;
	// This is a cast, but don't do that in C++
	cout << (int)"Norton" << endl;
	// Do this instead, for more error handling related reasons
	cout << static_cast<int>('N') << endl;
	cin >> globalIntenger;
	// to protect the cin.get()
	cin.ignore(FILENAME_MAX, '\n'); // skips past the number of characters or until carriage return
	// ::globalInteger is to access the global scope of this program
	cout << ::globalIntenger << endl;
	cin.get();
	return EXIT_SUCCESS;
}