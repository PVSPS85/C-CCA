#include<iostream>
using namespace std;

struct student {
    char name;
    int rollno;
};

int main(){
    student S ,S1;
    cout<<"enter the name of the student "<<endl;
    cin>>S.name;

    cout<<"enter the roll nuber os the student"<<endl;
    cin>>S.rollno;

    cout<<"enter the secound student name"<<endl;
    cin>>S1.name;

    cout<<"enetr the roll number of the student"<<endl;
    cin>>S1.rollno;

    cout<<"student list"<<endl;
    cout<<"the first student name is :"<<S.name<<endl;
    cout<<"the roll of the student is :"<<S.rollno<<endl;
    cout<<"the 2nd nae of the student is : "<<S1.name<<endl;
    cout<<"the 2nd roll number os the student is :"<<S1.rollno<<endl;

    return 0;
}