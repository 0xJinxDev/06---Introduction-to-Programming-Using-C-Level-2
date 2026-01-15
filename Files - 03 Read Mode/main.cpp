#include <iostream>
#include <string>
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

	MyFile.open(FileName, ios::in);
	string Line;
	if (MyFile.is_open()) {
		cout << "The file " << FileName << " contains below lines:\n";

		while (getline(MyFile, Line)) {

			cout << Line << endl;
		}

		MyFile.close();
	}

}

int main() {

	char Flag = 'y';
	string Line;
	while (Flag == 'y' || Flag == 'Y') {

		cout << "Please enter the line you want to add:\n";
		getline(cin, Line);
		CreateFile("Hamza.txt", Line);
		cout << "Do you want to add another line ?\n";
		cin >> Flag;
		cin.ignore();
	}

	PrintFile("Hamza.txt");
	return 0;
}