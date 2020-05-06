#include <iostream>
using namespace std;

int main() {
	int a,b,w=0;
	cin>>a;
	cin>>b;
	for(int i=a;i<=b;i++){
		w-=i;
	}
	cout<<w;
	return 0;
}