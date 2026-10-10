#include<iostream>
using namespace std;
int main(){
    int n , i, sum = 0, avg;
    cout<<"enter the number of elements"<<endl;
    cin>>n;
    int arr[n];
    cout<<"the array elements"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }

    for(i=0;i<n;i++){
        sum += arr[i];
    }

    avg = sum / n;

    cout<<"the sum of the numbers is : "<<sum<<endl;
    cout<<"the avg of the numbers is : "<< avg<<endl;

    return 0;
}

/*
    *pranav@Pranavs-MacBook-Air array % ./sum
    *enter the number of elements
    *3
    *the array elements
    *1 2 3
    *the sum of the numbers is : 6
    *the avg of the numbers is : 2
    */
