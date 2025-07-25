//Function in c++

#include<iostream>

using namespace std;

//function declaration
int add(int a,int b); 
int sub(int ,int);
void swap(int &,int &);

int main(){
    int x=5;
    int y=4;

    //function calling
    cout<<"sum : "<<add(x,y)<<endl;
    cout<<"sub :"<<sub(x,y)<<endl;

    cout<<"Before Swapping the value of x and y "<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<"Before Swapping the value of x and y "<<x<<" "<<y<<endl;

    return 0;
}

//function defination
//call by value;
int add(int a,int b){
    return a+b;
}

int sub(int a,int b){
    return a-b;
}

//call by reference ;
void swap(int &a ,int &b){
    int temp=a;
    a=b;
    b=temp;
}

