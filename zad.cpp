#include <iostream>
using namespace std;

int main()
{
    string x,h="okon";
    for(int i=1;i<=5;i++){
        cout<<"Próba nr: "<<i<<endl;
        cin>>x;
        if(x=="okon"){
           cout<<"Gratulacje zgad³eœ!"<<endl;
           break;
        }
        
        if(x.length()>h.length()){
            cout<<"Haslo za d³ugie"<<endl;
        }
        else if(x.length()<h.length()){
            cout<<"Haslo za krótkie"<<endl;
        }
        else{
            cout<<"Has³o jest równe"<<endl;
        }
        
        if(i==4){
            cout<<"Masz ostatni¹ próbê!"<<endl;
            cout<<"D³ugoœæ has³a to: "<<h.length()<<endl;
        }
    }
    return 0;
}