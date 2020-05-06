#include <iostream>
using namespace std;

int main() {
	int x=1,y=2,z=3;
	int *a=&x,*b=&y,*c=&z;
	cout<<*a+*b+*c<<endl;
	cout<<*a**b**c<<endl;
	cout<<*a-*b-*c<<endl;
	return 0;
}