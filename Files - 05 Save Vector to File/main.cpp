#include <iostream>
#include <fstream>
#include <string>
#include <vector>


using namespace std;

void VectorToFile(const string& FileName, const vector <string> &vFileContent) {

	fstream MyFile;

	MyFile.open(FileName, ios::out);

	if (MyFile.is_open()) {

		for (const string& Line : vFileContent) {

			if (Line != "") {
				MyFile << Line << endl;
			}
		}
		

	}

}

int main() {

	vector <string> vFileContent{ "A","B","C","D" };

	VectorToFile("Hamza.txt", vFileContent);

	return 0;
}