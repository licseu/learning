#include <iostream>
#include <string>
#include <fstream>

using namespace std; 

int main ()
{
	string x;
	ofstream thing;
	cout << "Type a note to save in the text file:\n";
	getline (cin, x);
	thing.open ("stuff.txt", ios::app);
	thing << x << "\n\n";
	thing.close(); 
	cout << "See stuff.txt to view your note!\n";
	return 0;
}


