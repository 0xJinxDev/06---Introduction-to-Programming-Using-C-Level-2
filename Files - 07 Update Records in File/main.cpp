#include <iostream>
#include <fstream>
#include <vector>
#include <string>

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
	MyFile.open(FileName, ios::in);

	string Line;
	
	if (MyFile.is_open()) {

		while (getline(MyFile, Line)) {
			
			cout << Line << endl;

		}
		MyFile.close();
	}


}

void LoadFileToVector(const string& FileName, vector <string>& vFileContent) {

	fstream MyFile;
	MyFile.open(FileName, ios::in);
	string Line;
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

			MyFile << line << endl;
		}

	}
}

void UpdateFile(const string& FileName, const string& Employee1,const string &Employee2) {
	vector<string> vFileContent;
	LoadFileToVector(FileName, vFileContent);

	for (string& line : vFileContent) {

		if (line == Employee1) {

			line = Employee2;
		}
	}

	LoadVectorToFile(FileName, vFileContent);
}
int main() {

	char Flag = 'Y';
	string Line;
	string Employee2;
	while (Flag == 'Y' || Flag == 'y') {

		cout << "Please enter employee's name:\n";
		getline(cin, Line);
		CreateFile("Hamza.txt", Line);
		cout << "Do you want to add another employee? (Y/N)";
		cin >> Flag;
		cin.ignore();

	}
	
	cout << "The employees before replacing are:\n";
	PrintFile("Hamza.txt");

	cout << "Please enter the employee you want to replace:\n";
	getline(cin, Line);
	cout << "Please enter the new employee:\n";
	getline(cin, Employee2);
	UpdateFile("Hamza.txt", Line,Employee2);

	cout << "The employees after replacing are:\n";
	PrintFile("Hamza.txt");
	return 0;
}