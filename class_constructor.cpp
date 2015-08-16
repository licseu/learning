#include <iostream>
using namespace std;
class advisor{
	int noOfMeeting;
public:
	advisor() { cout << "\nadvisor";}
	advisor(const advisor& adv) { cout << "\ncopy advisor";}
	~advisor() { cout << "~ advisor";}
};
class student {
	string name;
	int semesterHours;
	double average;
public:
	student(string pNmae="noName"):name(pNmae),average(0),semesterHours(0){}
	void display() {
		cout << "\nDisplay by student";
	}

	~student(){cout << "\n~student";}
};
class GS: public student {
	advisor adsr;
	
public:
	GS(const string& pN, advisor& adv) :student(pN),adsr(adv){}

	void display(){
		student::display();
		cout << "\nDisplay by GS";
	}
};
void fn(advisor& adv) 
{
	GS gs("\nHello Perry", adv);
	gs.display();
}

int main()
{
	advisor adv;
	GS gs("\nHello Perry", adv);
	gs.display();
	cout << "Done";
	//fn(adv);
}
