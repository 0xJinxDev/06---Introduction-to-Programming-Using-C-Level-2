#include <iostream>
#include <string>
#include <vector>
#include <fstream>

using namespace std;


void CreateFile(const string& FileName, const string& Line) {

	fstream MyFile;
	MyFile.open(FileName, ios::out | ios::app);

	if (MyFile.is_open()) {

		MyFile << Line << endl;

		MyFile.close();
	}

}

void PrintFile(const string& FileName) {

	fstream MyFile;
	string Line;
	MyFile.open(FileName, ios::in);

	if (MyFile.is_open()) {

		while (getline(MyFile, Line)) {

			cout << Line << endl;
		}
		MyFile.close();
	}

}
void LoadFileToVector(const string& FileName, vector <string>& vFileContent) {

	fstream MyFile;
	string Line;
	MyFile.open(FileName, ios::in);

	if (MyFile.is_open()) {

		while (getline(MyFile, Line)) {

			vFileContent.push_back(Line);
		}
		MyFile.close();
	}

}
void LoadVectorToFile(const string& FileName, const vector<string>& vFileContent) {
	fstream MyFile;

	MyFile.open(FileName, ios::out);

	if (MyFile.is_open()) {
	
		for (const string& line : vFileContent) {

			if (line != "") {

				MyFile << line << endl;
			}
		}
		MyFile.close();
	}
}
void RemoveLine(const string& FileName, const string& Line) {
	vector <string> vFileContent;
	LoadFileToVector(FileName, vFileContent);

	for (string& line : vFileContent) {

		if (line == Line) {

			line = "";
		}

	}
	LoadVectorToFile(FileName, vFileContent);

}
int main() {

	char Flag = 'y';
	string Line;

	while (Flag == 'Y' || Flag == 'y') {

		cout << "Please enter the employee's name:\n";
		getline(cin, Line);
		CreateFile("Hamza.txt", Line);
		cout << "Do you want to add another employee ? (Y/N)\n";
		cin >> Flag;
		cin.ignore();

	}

	cout << "Employees are:\n";
	PrintFile("Hamza.txt");

	cout << "Please enter the name of the employee that you want to remove ?";
	getline(cin, Line);
	RemoveLine("Hamza.txt", Line);

	cout << "Employees after removing are:\n";
	PrintFile("Hamza.txt");

	return 0;
}