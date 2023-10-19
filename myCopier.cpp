#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<string.h>
using namespace std;

//Write c++ application that copies the contents of one file to another
//Application should open a text file for reading and another one for writing
//It will read the contents line by line while writing them to the other file
//Both file names will be provided as command-line arguments
//When there are no more lines to read, the application will close files and exit
//
//The 1st command-line argument is the file to read
//The 2nd ocmmand-line argument is the file to write

string line;
int main(){
char line[100];
char file1[100];
char file2[100];

std::cout <<  "Program started ...";
        cout << "filename1 is: "; //ask for the file name for file1
	cin >> file1; //user inputs the filename

std::cout  << "File 1 Stored. ";
	cout << "filename2 is: "; //ask for the file name for file2
        cin >> file2; //user inputs the filename
std::cout << "File 2 Stroed. ";	
	ifstream f1;
	ofstream f2;
	f1.open(file1, ios::in);
	f2.open(file2, ios::out);
std::cout << "Copying File ...";

	while(f1.getline(line, sizeof(line))){
		f2 << line;
	}

std::cout << "Copying Complete, Closing Files ...";
        f1.close();
	f2.close();
	return 0;
}
