#include <iostream>

using namespace std;

int main()
{
	int x;

	cout << "I don't believe in Hello World. So I won't hello it. Sorry.\n";
	cout << "So, how about we try something else instead?\n"; 
	cout << "Type 1 if you agree or 2 if you'd rather run away.\n";
	cin >> x;

	if (x==1)
	{
		cout << "Well I wasn't really expecting that.\n";
		cout << "So you probably shouldn't expect me to do anything interesting.\n";
		cout << "After all, I'm not even capable of delivering a decent 'hello world'.\n";
	}	
	if (x==2)
	{
		cout << "Oh cowardly creature! Be gone then!\n";
	}
	else
	{
		cout << "Go away thing who fails to follow basic instructions!\n"
	}
	return 0;
}

