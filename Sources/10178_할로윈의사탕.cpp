#include <iostream>
using namespace std;

int main()
{
	int n;

	cin>>n;

	while(n--)
	{
		int a, b;
		cin>>a>>b;

		cout<<"You get "<<a/b<<" piece(s) and your dad gets "<<a%b<<" piece(s).\n";
	}	

	return 0;
}
