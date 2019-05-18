#include <iostream>
using namespace std;

void ustal(int ph){
	if(ph>7)
	{
		cout<<"Odczyn zasadowy"<<endl;
	}
	
	if(ph<7)
	{
		cout<<"Odczyn kwaœny"<<endl;
	}
	
	if(ph==7)
	{
		cout<<"Odczyn neutralny"<<endl;
	}
}

int main() {
	int ph;
	for(int i=0;i<5;i++)
	{
		cin>>ph;
		ustal(ph);
	}
	return 0;
}