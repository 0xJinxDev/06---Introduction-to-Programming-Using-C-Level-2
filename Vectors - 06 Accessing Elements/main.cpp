#include <iostream>
#include <vector>


using namespace std;

int main() {

	vector <int> vNumbers = { 1,2,3,4 };

	cout << "Accessing elements using .at(i):\n";
	cout << "Element at index 0: " << vNumbers.at(0) << endl;
	cout << "Element at index 3: " << vNumbers.at(3) << endl;

	cout << "Accessing elements using [i]:\n";
	cout << "Element at index 0: " << vNumbers[0] << endl;
	cout << "Element at index 3: " << vNumbers[3] << endl;


	return 0;
}