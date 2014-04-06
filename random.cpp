
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

int main ()
{
	string words[10] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten"};

	//array test
	int x = 0;
    while (x<10)
    {cout << words[x] << "\n"; x++;}


	//returning random element from array
	srand (time(NULL));
	int anumber = rand() % 10 + 1;
	string word = words[anumber];
	cout << "\nA random word from the above is " << word << ".";
	getchar();
	return 0;
}
