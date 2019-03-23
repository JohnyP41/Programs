#include <iostream>
using namespace std;

int main()
{
    int n,k,ile=0,T[300];
    cout<<"Podaj n"<<endl;
    cin>>n;
    cout<<"Podaj k"<<endl;
    cin>>k;
    cout<<"Wczytuje liczby!"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>T[i];
        if(T[i]==k){
            ile+=1;
        }
    }
    cout<<"Liczba "<<k<<" wystapila "<<ile<<" razy"<<endl;
    return 0;
}