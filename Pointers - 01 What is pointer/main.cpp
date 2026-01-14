#include <iostream>

using namespace std;


int main() {

	int a = 10;

	cout << "a value                 :" << a << endl;
	cout << "a address in memory     :" << &a << endl;

	int* ptr;
	ptr = &a;
	//pointer value will be the same as the address of a
	cout << "ptr value               :" << ptr << endl;


}