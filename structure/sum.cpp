#include<iostream>
using namespace std;

struct sum{
    int a ;
    int b ;

};

int main(){
    sum S;
    cout<<"enetr the two numbers"<<endl;
    cin>>S.a>>S.b;

    cout<<"the sum of two number is "<<S.a + S.b<<endl;
    return 0;
}