#include <iostream>
using namespace std;

int main() {
	int a,b,c;
	cout<<"Podaj a"<<endl;
	cin>>a;
	cout<<"Podaj b"<<endl;
	cin>>b;
	cout<<"Podaj c"<<endl;
	cin>>c;
	if((a+b)>c & (a+c)>b & (c+b)>a){
		cout<<"Da sie zbudowac trojkat"<<endl;
	}
	else{
		cout<<"Nie da sie zbudowac trojkata"<<endl;
	}
	return 0;
}