

// stringstreams
#include <iostream>

using namespace std;

int main ()
{
  float price;
  float quantity;
  float totalprice;

  cout << "Hello world!!!";
  cout << "Test program!!\n";
  cout << "Enter price: ";
  cin >> price; cout << endl;

  cout << "Enter quantity: ";
  cin >> quantity; cout << endl;

  totalprice=(quantity*price);
  cout << "Total price: " << totalprice << endl;
  return 0;
}
