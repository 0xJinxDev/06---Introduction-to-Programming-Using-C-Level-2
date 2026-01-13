#include <iostream>
#include <string>
#include <vector>

using namespace std;


struct stEmployee {

	string FirstName;
	string LastName;
	float Salary;
};

void ReadEmployees(vector <stEmployee>& vEmployees) {

	char flag = 'y';
	stEmployee TempEmployee;
	while (flag == 'y' || flag == 'Y') {
		cout << "Please enter the first name:\n";
		cin >> TempEmployee.FirstName;
		cout << "Please enter the last name:\n";
		cin >> TempEmployee.LastName;
		cout << "Please enter the salary:\n";
		cin >> TempEmployee.Salary;

		vEmployees.push_back(TempEmployee);
		cout << "Do you want to add another employee?(Y/N)\n";
		cin >> flag;
	}
}

void PrintEmployees(const vector <stEmployee>& vEmployees) {

	for (const stEmployee& Employee : vEmployees) {

		cout << "First name: " << Employee.FirstName << endl;
		cout << "Last name: " << Employee.LastName << endl;
		cout << "Salary: " << Employee.Salary << endl;
		cout << "______________" << endl;
	}
}
int main() {

	vector <stEmployee> vEmployees;
	ReadEmployees(vEmployees);
	PrintEmployees(vEmployees);

	return 0;
}