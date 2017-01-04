#include <iostream> // C++ cin/cout
#include <iomanip>  // <io_manip>ulation
#include <cstdlib>  // includes "stdlib.h"

using namespace std;

// if you write more "main" functions, it will become mangled
// remember when you tried to extend python w/ c++? yeah we ran into that
// problem.
int main() {
	// return type is an "ostream"
	// cout is an ostream, and "<<" is throwing things in regardless of type
	cout << "hello, world" << '!' << endl;
	cin.get();
	return EXIT_SUCCESS;
}