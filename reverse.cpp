#include <iostream>
using namespace std;

void reverse(int T[],int n){
	for(int i=0;i<n/2;i++){
		int t=T[i];
		T[i]=T[n-i-1];
		T[n-i-1]=t;
	}
}

int main() {
	int n;
	cin>>n;
	int T[n];
	for(int i=0;i<n;i++)
	{
		cin>>T[i];
	}
	reverse(T,n);
	for(int i=0;i<n;i++){
		if(i==n-1) {
			cout<<T[i]<<" ";
		}
		else{
			cout<<T[i]<<",";
		}
	}
	return 0;
}
