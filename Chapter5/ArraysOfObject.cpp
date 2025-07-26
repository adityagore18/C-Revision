#include<iostream>
using namespace std;

class Student{
    int id;
    string name;
    public:
    void setData(int i,string n){
        id=i;
        name=n;
    }
    void getData(){
        cout<<"id : "<<id<<", name : "<<name<<endl;
    }

};

int main(){

    Student students[3];

    for(int i=0;i<3;i++){
        int id;
        string name;
        cout<<"Enter Id :";
        cin>>id;
        cout<<"Enter Name :";
        cin>>name;
        students[i].setData(id,name);
    }
    for(int i=0;i<3;i++) students[i].getData();
    return 0;
}