#include<iostream>
using namespace std;
int sum(int *p ,int *q);
int main(){
    int a , b;
    cout<<"enter the number"<<endl;
    cin>>a>>b;
    cout<<"the sum is "<<sum(&a,&b)<<endl;
    return 0;
}

int sum(int *p , int *q){
    return *p + *q;
}