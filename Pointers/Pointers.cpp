#include<iostream>

using namespace std;

int main() {

	int x = 10;
	cout << "x = " << x << endl;
	cout << "sizeof(x) = " << sizeof(x)  << "B" << endl;
	cout << "&x = " << &x << endl;
	cout << "sizeof(&x) = " << sizeof(&x) << "B" << endl;

	cout << endl;

	double y = 3.14;
	cout << "y = " << y << endl;
	cout << "sizeof(y) = " << sizeof(y)  << "B" << endl;
	cout << "&y = " << &y << endl;
	cout << "sizeof(&y) = " << sizeof(&y) << "B" << endl;

	cout << endl;

	float z = 1.414;
	cout << "z = " << z << endl;
	cout << "sizeof(z) = " << sizeof(z)  << "B" << endl;
	cout << "&z = " << &z << endl;
	cout << "sizeof(&z) = " << sizeof(&z) << "B" << endl;

	cout << endl;

	char ch = 'b';
	cout << "ch = " << ch << endl;
	cout << "sizeof(ch) = " << sizeof(ch)  << "B" << endl;
	cout << "&ch = " << &ch << endl;
	cout << "sizeof(&ch) = " << sizeof(&ch) << "B" << endl;

	cout << endl;
//Adresses are 64bits/8Bytes, No matter what.
	return 0;
}