//http://www.cnblogs.com/likebeta/archive/2012/07/24/2607397.html
#include <iostream>
#include <sstream>
#include <fstream>
#include <iterator>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
	ifstream cin("uaa.txt");
	for (string s; getline(cin, s); ) {
		cout << "perry" << s << "\n";
		vector<int> v;
		int a;
		for (istringstream sin(s); sin >> a; v.push_back(a));
		sort(v.begin(), v.end());
		unique_copy(v.begin(), v.end(), ostream_iterator<int,char>(cout, " "));
		cout << endl;
	}

}
