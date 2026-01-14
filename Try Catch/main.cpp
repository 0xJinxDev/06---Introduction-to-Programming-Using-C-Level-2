#include <iostream>
#include <vector>

using namespace std;

int main() {

	vector <int> vNumbers = { 1,2,3,4,5 };

	try {
		cout << vNumbers.at(10);
	}
	catch (...) {

		cout << "Out of bound" << endl;

	}
	return 0;
}