#include <iostream>

const char* const& max (const char* const& a, const char* const& b)
{
	std::cout << "in strcmp\n";
	return std::strcmp(a,b) < 0? b : a;
}
template<typename T>
T const& max (T const& a, T const& b)
{
	std::cout << "in template T const&\n";
	return a < b ? b : a;
}

template<typename T>
T * const& max (T* const& a, T* const& b)
{
	std::cout << "in template T* const& T*\n";
	return *a < *b ? b : a;
}


int main()
{
	int a = 3;
	int b = 5;
	char* cha = "letmein\n";
	char* chb = "whoareyou\n";
	std::cout<<*max(&a, &b);
	std::cout<<max(cha, chb);
	std::cout<<max(a, b);
	std::cout<<max(&a, &b);
}
