#include <iostream>
using namespace std;

int main()
{
    string x,h="okon";
    for(int i=1;i<=5;i++){
        cout<<"Pr�ba nr: "<<i<<endl;
        cin>>x;
        if(x=="okon"){
           cout<<"Gratulacje zgad�e�!"<<endl;
           break;
        }
        
        if(x.length()>h.length()){
            cout<<"Haslo za d�ugie"<<endl;
        }
        else if(x.length()<h.length()){
            cout<<"Haslo za kr�tkie"<<endl;
        }
        else{
            cout<<"Has�o jest r�wne"<<endl;
        }
        
        if(i==4){
            cout<<"Masz ostatni� pr�b�!"<<endl;
            cout<<"D�ugo�� has�a to: "<<h.length()<<endl;
        }
    }
    return 0;
}