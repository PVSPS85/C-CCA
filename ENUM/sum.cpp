#include<iostream>
using namespace std;

enum sum { add = 1 , sub , multiply };
int main(){
    sum s = add ;
    int a = 10 , b= 20;

    if(s == add){
        cout<<"sun is "<<a+b<<endl;

    }

    return 0;
    

}