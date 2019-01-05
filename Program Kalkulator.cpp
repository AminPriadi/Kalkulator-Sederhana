#include<iostream>
using namespace std;

int main()
{
    int a, b, code;
    cout<<"===PILIHAN MENU==="<<endl<<endl;
    cout<<"1.PENJUMLAHAN [+]\n";
    cout<<"2.PENGURANGAN [-]\n";
    cout<<"3.PEMBAGIAN   [/]\n";
    cout<<"4.PERKALIAN   [*]\n\n";
    cout<<"Masukan code menu : ";
    cin>>code;

    if(code <4 || code >1)
        cout<<"masukan bilangan pertama : ";
    cin>>a;
        cout<<"masukan bilangan kedua   : ";
    cin>>b;
    {
        if(code ==1)
            cout<<"hasil dari penjumlahan "<<a<<"+"<<b<<" adalah "<<a+b<<endl;
        if(code ==2)
            cout<<"hasil dari pengurangan "<<a<<"-"<<b<<" adalah "<<a-b<<endl;
        if(code ==3)
            cout<<"hasil dari pembagian "<<a<<"/"<<b<<" adalah "<<a/b<<endl;
        if(code ==4)
            cout<<"hasil dari perkalian "<<a<<"*"<<b<<" adalah "<<a*b<<endl;
        if(code >4)
            cout<<"code menu yang anda masukan salah "<<endl;
    }
    return 0;


}
