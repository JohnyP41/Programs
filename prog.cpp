#include <iostream>
using namespace std;

int main() 
{
	int a;
	string x;
	while(true)
	{
		cout<<"Podaj has�o"<<endl;
		cin>>x;
		if(x=="informatyka")
		{
			break;
		}
		else
		{
			cout<<"Dost�p zabroniony"<<endl;
		}
	}
	cout<<"Witaj w programie"<<endl;
	cin>>a;
	cout<<"Pole kwadratu: "<<a*a<<endl;
	return 0;
}