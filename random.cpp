#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std; 

int main ()
{
	srand (time(NULL));
	int anumber = rand() % 10 + 1;

	string words[10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};

	string word = words[anumber];

	cout << "The word is " << word;
	getchar();
	return 0;
}
