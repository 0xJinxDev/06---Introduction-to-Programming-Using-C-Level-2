#include <iostream>

using namespace std;


int main() {

	int* ptrX;
	float* ptrY;

	ptrX = new int;
	*ptrX = 10;

	ptrY = new float;
	*ptrY = 10.5;

	cout << "ptrX = " << *ptrX << endl;
	cout << "ptrY = " << *ptrY << endl;

	delete ptrX;
	delete ptrY;

	// To make them point to null pointer instead of deleted address
	ptrX = nullptr;
	ptrY = nullptr;

	return 0;
}