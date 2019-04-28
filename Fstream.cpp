//============================================================================
// Name        : Fstream.cpp
// Author      : kamel
// Version     :
// Copyright   : Your copyright notice
// Description : fstream in C++, Ansi-style
//============================================================================

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
	/*
	 * ofstream = for writing.
	 * ifstream = for reading.
	 *
	 */

	string str = "hello world\n";
	str.append("I'm Kamel Ghalgaoui\n");
	str.append("An Embedded Software Engineer\n");
	str.append("Email: kamelghalgaoui7@gmail.com");

	/*
	 * Open file for writing
	 *
	*/

	ofstream ofs("file.txt");
	if( !ofs ) {
		cout << "Error opening file" << endl;
		return -1;
	}
	ofs << str << endl;

	ofs.close();

	/*
	 *  Open file for reading and other file for writing
	 */

	ifstream ifs("file.txt");
	if( ! ifs ){
		cout << "Error opening file for reading" << endl;
		return -1;
	}

	ofstream iofs("file_copy.txt");
	if( !iofs ){
		cout << "Error opening file for writing" << endl;
		return -1;
	}

	/*
	 * Copy the content of file.txt to file_copy.txt
	 */
	string line;

	while(! ifs.eof()){
		getline(ifs, line);
		iofs << line << endl;
	}

	iofs.close();
	ifs.close();
	return 0;
}
