#include<iostream>
using namespace std;

int main (){
    int a ;
    int  *p = &a ;

    cout<<"enetr the number you want"<<endl;
    cin>>a;

    cout<<"the value "<<*p<<endl;
    cout<<"the value "<<a<<endl;
    cout<<"the value "<<p<<endl;


    return 0;
    
}