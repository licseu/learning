#include <iostream>
using namespace std;
class Base{
	int a;
	void f() {cout <<a;}
public:
	int b;
	void g() {cout <<a;}
protected:
	int c;
	void k() {cout <<a;}
};
class Derived: public Base {
public:
	void i() {
		cout << a;
		cout << b;
		cout << c;
		f();
		g();
		k();
	}
};

int main()
{
	Base b;
	cout << b.a;
	cout << b.b;
	cout << b.c;
	b.f();
	b.g();
	b.k();
}
