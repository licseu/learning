#include <iostream>
#include <fstream>
#include <random>

using namespace std; 

int main ()
{
	char word;










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

//just committing this so we can get started. 
//part I am working on will be in main for now as it will be the first thing needed.
//feel free to add to this & add includes you need.