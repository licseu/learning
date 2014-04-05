

// strings and if's
#include <iostream>
#include <string>

using namespace std;

int main ()
{
  float numOne;
  float numTwo;
  float numTotal;
  string method;

  cout << "Hello worldddddddddd!\n";
  cout << "First number: "; cin >> numOne;
  cout << "\n+ - / * ?"; 
  cin >> method;
  cout << "\nLast number: "; cin >> numTwo;
  if (method=="+")
  {
    numTotal=numOne+numTwo;
    cout << numOne << " + " << numTwo << " = " << numTotal;
    cout << endl;
  }
  else if (method=="-")
  {
    numTotal=numOne-numTwo;
    cout << numOne << " - " << numTwo << " = " << numTotal;
    cout << endl;
  }
  else if (method=="/")
  {
    numTotal=numOne/numTwo;
    cout << numOne << " / " << numTwo << " = " << numTotal;
    cout << endl;
  }
  else if (method=="*")
  {
    numTotal=numOne*numTwo;
    cout << numOne << " * " << numTwo << " = " << numTotal;
    cout << endl;
  }
  else
  {
    cout << "ERROR\n";
  }
  return 0;
}




