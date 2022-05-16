#define _CRT_SECURE_NO_WARNINGS 1


#include <iostream>
using namespace std;

//int main()
//{
//	char c[10] = { '\0' };
//	scanf("%9[^.]", c);
//	printf("%s, and left is: %d\n", c, getchar());
//	return 0;
//}


void test()
{
	/*int n;
	while (cin >> n)
	{
		cout << n << endl;
	}*/
	istream& is=cin;
	bool b = static_cast<bool>(is);
	cout << b << endl;
	
}
class Entity
{
public:
	explicit operator bool() const
	{
		return true;
	}
};
int main()
{
	bool f = static_cast<bool>(Entity());
	return 0;
}







