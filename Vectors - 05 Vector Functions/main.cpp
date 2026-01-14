#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector <int> vNumbers;

	vNumbers.push_back(10);
	vNumbers.push_back(20);
	vNumbers.push_back(30);
	vNumbers.push_back(30);
	vNumbers.push_back(30);

	cout << "First elemenet: " << vNumbers.front()<<endl;
	cout << "Last element: " << vNumbers.back() << endl;
	cout << "Size: " << vNumbers.size() << endl;
	cout << "Capacity: " << vNumbers.capacity() << endl;
	cout << "Is Empty: " << vNumbers.empty() << endl;
	vNumbers.clear();
	cout << "Is Empty after clearing the vector: " << vNumbers.empty() << endl;


	return 0;
}