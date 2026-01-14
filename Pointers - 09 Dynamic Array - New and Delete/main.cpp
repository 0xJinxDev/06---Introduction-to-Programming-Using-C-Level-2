#include <iostream>

using namespace std;

void PrintArray(float arr[], int length) {

	for (int i = 0; i < length; i++) {

		cout << *(arr + i) <<" ";
	}
	cout << endl;
}

void FillArray(float arr[], int length) {

	for (int i = 0; i < length; i++) {

		cout << "Please enter the grade of student " << i + 1 << " :" << endl;
		cin >> *(arr + i);

	}

}
int main() {

	int number;
	cout << "Please enter how many students ?"<<endl;
	cin >> number;

	float* arr = new float[number];

	FillArray(arr, number);
	PrintArray(arr, number);

	delete[] arr;
	arr = nullptr;



	return 0;
}