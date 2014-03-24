

// strings and if's
#include <iostream>
#include <string>

using namespace std;

int main ()
{
  float price;
  float quantity;
  float totalprice;
  string yourName;

  cout << "Please enter your name:\n";
  cin >> yourName;

  cout << "Hello " << yourName << "!\n\n";
  cout << "Enter price: ";
  cin >> price; cout << endl;

  cout << "Enter quantity: ";
  cin >> quantity; cout << endl;

  totalprice=(quantity*price);

  if (totalprice>=100)
  {
    cout << "That's too much " << yourName << "!\n";
  }
  else
  cout << "Hi " << yourName << ", the total price is " << totalprice << endl;
  
  return 0;
}
