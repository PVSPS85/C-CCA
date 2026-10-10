#include<iostream>
using namespace std;

int main(){
    int a , b;
    int *p =&a , *q = &b;
    int temp;

    a = 10;
    b = 20 ;

    temp = *p;
    *p = *q;
    *q = temp;

    cout<<"after the swap is "<<a<<" "<< b <<endl;

    return 0;
}