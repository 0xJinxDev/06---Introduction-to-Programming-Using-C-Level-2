#include <iostream>

using namespace std;


int main() {

	int a = 10;

	cout << "a value                 :" << a << endl;
	cout << "a address in memory     :" << &a << endl;

	int* ptr;
	ptr = &a;
	
	cout << "ptr value               :" << ptr << endl;
	cout << "the value of the address that ptr is pointing to is " << *ptr << endl;

	*ptr = 20;
	cout << *ptr << endl;
	cout << a << endl;

	a = 30;
	cout << *ptr << endl;
	cout << a << endl;




}