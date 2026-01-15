#include <iostream>
#include <fstream>
using namespace std;
int main() {

	fstream MyFile;
	// if the file does not exist create it with ios::out
	// if the file exists append to it with ios::app with append priority
	MyFile.open("Hamza.txt", ios::out | ios::app); 

	if (MyFile.is_open()) {

		MyFile << "Hi, this is a line append to the file\n";

		MyFile.close();
	}


	return 0;
}