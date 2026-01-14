#include <iostream>
#include <vector>


using namespace std;

void PrintNumbers(const vector <int>& numbers) {

	for (const int & number : numbers) {

		cout << number << endl;
	}
	cout << endl;
}
int main() {


	vector <int> vNumbers;

	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);

	cout << "Vector before removing element:\n";

	PrintNumbers(vNumbers);

	vNumbers.pop_back();
	cout << "Vector after removing element:\n";

	PrintNumbers(vNumbers);

	return 0;
}