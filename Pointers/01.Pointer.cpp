#include<iostream>

using namespace std;

int main() {
//Pointer is basicallly a variable to store the address of another variable.
	int x = 10;

	int* xptr; // pointer declaration
	xptr = &x; // pointer assignment

	cout << "x = " << x << endl;
	cout << "sizeof(x) = " << sizeof(x) << endl;
	cout << "&x = " << &x << endl;
	cout << "xptr = " << xptr << endl;
    cout << "*ptr = " << * xptr << endl ; 
	cout << "sizeof(xptr) = " << sizeof(xptr) << "B" << endl;

	cout << endl;

	double y = 3.14;

	double* yptr = &y; // pointer intialisation

	cout << "y = " << y << endl;
	cout << "sizeof(y) = " << sizeof(y) << endl;
	cout << "&y = " << &y << endl;
	cout << "yptr = " << yptr << endl;
	cout << "sizeof(yptr) = " << sizeof(yptr) << "B" << endl;

	cout << endl;

	char ch = 'C';

	char* chptr = &ch; // pointer intialisation

	cout << "ch = " << ch << endl;
	cout << "sizeof(ch) = " << sizeof(ch) << endl;
	cout << "&ch = " << &ch << endl;
	cout << "chptr = " << chptr << endl;
	cout << "sizeof(chptr) = " << sizeof(chptr) << "B" << endl;

	cout << endl;

	return 0;
}