#include<iostream>
using namespace std;

int main (){
    int largest  = 0, n , i ;
    cout<<"enter the number of elements"<<endl;
    cin>>n;

    int arr[n];
    cout<<"enter the elements"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];

    }

    for(i=0;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }

    cout<<"the largest number is "<< largest << endl;

    return 0;
}

/*pranav@Pranavs-MacBook-Air array % ./largest
enter the number of elements
4
enter the elements
1 5 23 5 
the largest number is 23
pranav@Pranavs-MacBook-Air a*/