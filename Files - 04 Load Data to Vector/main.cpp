#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

void LoadDataFromFileToVector(const string& FileName, vector <string>& vFileContent) {

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

void CreateFile(const string& FileName, const string& Line) {

	fstream MyFile;
	MyFile.open(FileName, ios::out | ios::app);
	
	if (MyFile.is_open())
	{

		MyFile << Line << endl;

		MyFile.close();
	}

}

int main() {

	vector <string> vFileContent;
	char Flag = 'y';
	string Line;
	while (Flag == 'y' || Flag == 'Y') {

		cout << "Please enter the line you want to add to the file:\n";
		getline(cin, Line);
		CreateFile("Hamza.txt", Line);
		cout << "Do you want to add another line?(Y/N)\n";
		cin >> Flag;
		cin.ignore();

	}
	LoadDataFromFileToVector("Hamza.txt",vFileContent);

	for (const string& Line : vFileContent) {

		cout << Line <<endl;
	}


	return 0;
}