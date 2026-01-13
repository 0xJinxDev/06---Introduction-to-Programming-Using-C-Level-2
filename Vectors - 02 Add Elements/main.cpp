// Write a program to ask the user to add as many numbers as he wants
// Each time a number is entered it will be added to the vector

#include <iostream>
#include <vector>
#include <string>

using namespace std;


int ReadNumber(string Message) {

	int number = 0;
	cout << Message << endl;
	cin >> number;

	return number;
}

void ReadNumbers(vector <int>& numbers) {

	char flag = 'y';

	while (flag == 'y' || flag == 'Y') {

		numbers.push_back(ReadNumber("Please enter the number you want to add:"));
		cout << "Do you want to add another number ? (y/n)\n";
		cin >> flag;

	}
}

void PrintNumbers(const vector <int>& numbers) {

	for (const int& number : numbers) {

		cout << number << endl;
	}
}

int main() {

	vector <int> numbers;
	ReadNumbers(numbers);
	PrintNumbers(numbers);

	return 0;
}