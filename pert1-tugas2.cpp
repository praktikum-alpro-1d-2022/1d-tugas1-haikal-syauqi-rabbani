#include <iostream>
using namespace std;

int main () {
    int a;
    int b;
    int c;
    //input value yang akan ditukar
    cout<< "Silahkan masukkan nilai a: ";
    cin>> a;
    cout<< "Silahkan masukan nilai b: ";
    cin>> b;

    cout<<"\n";
    //value tiap variable ditukar
    c=a;
    a=b;
    b=c;
    
    //setelah ditukar
    cout<<"Nilai setelah di tukar adalah: \n";
    cout<<"\n";
    cout<< "Nilai a: "<<a<<endl;
    cout<< "Nilai b: "<<b<<endl;

return 0;
}