#include <iostream>


using namespace std;

struct stEmployee {

	string Name;
	float Salary;
};

int main() {

	stEmployee Employee;

	stEmployee* ptr = &Employee;
	//setting name and salary using the pointer
	ptr->Name = "Hamza";
	ptr->Salary = 1000;
	//printing name and salary using the pointer
	cout << "Name: " << ptr->Name << endl;
	cout << "Salary: " << ptr->Salary << endl;

}