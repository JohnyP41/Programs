#include <iostream>
using namespace std;

int main()
{
    int x;
    while(true){
        cin>>x;
        if(x==0){ 
            break;
        }
        else{
            cout<<x*x<<endl;
        }
    }
    return 0;
}
