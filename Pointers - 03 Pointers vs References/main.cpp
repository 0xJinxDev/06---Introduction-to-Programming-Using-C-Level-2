#include <iostream>
using namespace std;


int main()
{
	int a = 10;
	int& x = a;
	cout << &a << endl;
	cout << &x << endl;
	cout << a << endl;
	cout << x << endl;
	int* p = &a;
	cout << p << endl;
	cout << *p << endl;
	int b = 20;
	//We can change the pointer to point at another variable, but we can't do the same with references
	p = &b;
	cout << p << endl;
	cout << *p << endl;
	return 0;
}