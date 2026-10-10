#include<iostream>
using namespace std;
struct arr
{
    int arr[5];
    
};

int main(){
    arr n;
    int sum = 0;
    cout<<"enter the elements"<<endl;
    for(int i =0 ; i<5 ; i++){
        cin >> n.arr[i];
        sum += n.arr[i];
    }

    int avg = sum / 5;
    cout<<"the sum of the number is "<<sum<<endl;
    cout<<"the avg of the number is "<<avg<<endl;

    return 0;

    

}