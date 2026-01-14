#include <iostream>
#include <vector>

using namespace std;


void PrintNumbers(const vector <int>& numbers) {

	for (const int & number : numbers) {

		cout << number << " ";
	}
	cout << endl;
}

int main() {
	vector <int> vNumbers = { 1,2,3,4,5 };

	cout << "Vector before changing:\n";

	PrintNumbers(vNumbers);

	for (int& i : vNumbers) {

		i = 20;
	}
	cout << "Vector after changing all to 20 : \n";
	PrintNumbers(vNumbers);

	cout << endl;

	vNumbers.at(0) = 1;
	vNumbers[1] = 2;
	cout << "Vector after changing elements at 0 and 1 :\n";
	PrintNumbers(vNumbers);

	return 0;
}