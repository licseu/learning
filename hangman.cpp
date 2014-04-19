#include <iostream>
#include <cstdlib>
#include <string>

using namespace std; 

int main ()
{
    int choice, x;
    cout << "HANGMAN!\n Choose your difficulty level!\n\n";
    cout << "Easy [1], Medium [2], Hard [3]\n\n";
    cin >> choice;

    x = choice-1;

    string words [3] [3] =
        {
            "easyone", "easytwo", "easythree",
            "medone", "medtwo", "medthree",
            "hardone", "hardtwo", "hardthree"
        };

    //test, will delete when I finish
    cout << words [x] [0];


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

