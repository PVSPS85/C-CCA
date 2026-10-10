#include<iostream>
using namespace std;

union num{
    float a;
    float b;
    float c;
};

int main(){
    num m;
    
    cout<<"enetr the numbers you want "<<endl;
    cin>>m.a>>m.b>>m.c;

    cout<<"the sum is "<<m.a+m.b+m.c<<endl;
    return 0;
}