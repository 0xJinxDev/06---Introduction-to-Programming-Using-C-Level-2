#include <iostream>

using namespace std;


int main() {

	int a = 10;
	float b = 10.5;
	void * ptr;

	ptr = &a;
	
	
	cout << *(static_cast<int*>(ptr)) << endl;
	ptr = &b;

	cout << *(static_cast<float*>(ptr)) << endl;

	return 0;
}