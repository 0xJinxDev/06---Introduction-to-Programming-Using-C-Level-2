#include <iostream>

using namespace std;

void SwapByReference(int& num1, int& num2) {

	int temp; 
	temp = num1;
	num1 = num2;
	num2 = temp;
}

void SwapByPointers(int* num1, int* num2) {
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;

}

int main() {

	int a = 10, b = 20;

	cout << "a before swapping: " << a << endl;
	cout << "b before swapping: " << b << endl;
	SwapByReference(a, b);
	cout << "a after swapping: " << a << endl;
	cout << "b after swapping: " << b << endl;

	SwapByPointers(&a, &b);
	cout << "a after swapping: " << a << endl;
	cout << "b after swapping: " << b << endl;
	return 0;
}