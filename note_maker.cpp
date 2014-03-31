#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

using namespace std; 

int main ()
{
    	//input part
	string x;
	ofstream thing;
	cout << "Type a note to save in the text file:\n";
	getline (cin, x);
	
	//time part
	time_t now = time(0);
	tm *ltm = localtime(&now);

	//write to file part
	thing.open ("stuff.txt", ios::app);
	thing << ltm->tm_mday << "/" << 1 + ltm->tm_mon << "/" << 1900 + ltm->tm_year << " - ";
	thing << 1 + ltm->tm_hour << ":" << 1 + ltm->tm_min << ":" << 1 + ltm->tm_sec << "\n";
	thing << "--------------------\n";
	thing << x << "\n\n\n";
	thing.close(); 
	
	cout << "See stuff.txt to view your note!\n" << endl;
	getchar();
	return 0;
}


