#include <iostream>
#include <cstdlib>
#include <string>

using namespace std; 

int main ()
{
    int x;
    cout << "HANGMAN!\nChoose your difficulty level!\n\n";
    cout << "Easy [1], Medium [2], Hard [3]\n\n";
    cin >> x;

    x = x-1;

    //wordlist
    string words [3] [3] =
        {
            "easyone", "easytwo", "easythree",
            "medone", "medtwo", "medthree",
            "hardone", "hardtwo", "hardthree"
        };

    //random selection from chosen difficulty
    srand (time(NULL));
    int y = rand() % 3; //note: value here must change each time wordlist expands

    //chosen word
    string word = words [x] [y];

	return 0;
}


// function for hangman art
void HangMan(int variable) 
{ 
    switch(variable) 
    { 
         
        case 1 : 
    cout << "________" << endl; 
    cout << "|      | " << endl;      
    cout << "0      | " << endl; 
    cout << "       | " << endl; 
    cout << "       | " << endl; 
    cout <<"___________" << endl;break; 

        case 2 : 
     
    cout << "________" << endl; 
    cout << "|      | " << endl;      
    cout << "0      | " << endl; 
    cout << "o      | " << endl; 
    cout << "       | " << endl; 
    cout <<"___________" << endl; break; 

        case 3 : 

    cout << " ________" << endl; 
    cout << " |     | " << endl;      
    cout << " 0     | " << endl; 
    cout << "-o     | " << endl; 
    cout << "       | " << endl; 
    cout <<"___________" << endl;break; 

        case 4 : 
     
    cout << " ________" << endl; 
    cout << " |     | " << endl;      
    cout << " 0     | " << endl; 
    cout << "-o-    | " << endl; 
    cout << "       | " << endl; 
    cout <<"___________" << endl;break; 

       case 5 : 
    cout << " ________" << endl; 
    cout << " |     | " << endl;      
    cout << " 0     | " << endl; 
    cout << "-o-    | " << endl; 
    cout << "/      | " << endl; 
    cout <<"___________" << endl;break; 
        case 6 : 
    cout << " ________" << endl; 
    cout << " |     | " << endl;      
    cout << " 0     | " << endl; 
    cout << "-o-    | " << endl; 
    cout << "/ \    | " << endl; 
    cout <<"___________" << endl;break; 
    } 

           
}  

