#include <iostream>
#include <fstream>

using namespace std;


int main() {

	fstream MyFile;

	MyFile.open("Hamza.txt", ios::out);

	if (MyFile.is_open()) {
		MyFile << "Hi, this is the first line\n";
		MyFile << "Hi, this is the second line\n";
		MyFile << "Hi, this is the third line\n";

		MyFile.close();


	}

	return 0;
}