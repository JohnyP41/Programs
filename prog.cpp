#include <iostream>
using namespace std;

int main() 
{
	int a;
	string x;
	while(true)
	{
		cout<<"Podaj has³o"<<endl;
		cin>>x;
		if(x=="informatyka")
		{
			break;
		}
		else
		{
			cout<<"Dostêp zabroniony"<<endl;
		}
	}
	cout<<"Witaj w programie"<<endl;
	cin>>a;
	cout<<"Pole kwadratu: "<<a*a<<endl;
	return 0;
}