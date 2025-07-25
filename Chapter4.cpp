//Function in c++

#include<iostream>

using namespace std;

//function declaration
int add(int a,int b); 
int sub(int ,int);
void swap(int &,int &);
int & max(int & ,int &); 
//inline function 
inline double volume(double,double,double);
//defult argument
double interest(int,int,double rate=7.5 );

int main(){
    int x=5;
    int y=4;

    //function calling
    cout<<"sum : "<<add(x,y)<<endl;
    cout<<"sub :"<<sub(x,y)<<endl;

    cout<<"Before Swapping the value of x and y "<<x<<" "<<y<<endl;
    swap(x,y);
    cout<<"Before Swapping the value of x and y "<<x<<" "<<y<<endl;


    max(x,y)= -1;
    cout<<"y is larger "<<y<<endl;
 
    //inline function called;
    cout<<"volume of cuboid is "<<volume(1.5,1.2,1.3)<<endl;

    cout<<"Interest : "<<interest(10000,5)<<endl;
    cout<<"Interest : "<<interest(10000,5,10)<<endl;

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

//return by reference
int & max(int &a,int &b){
    if(a>=b) return a;
    else return b;
}

//inline function body;
inline double volume(double l,double b,double h){
    return l*b*h;
}

//defult argument
double interest(int principal,int time,double rate ){
     return (principal*time*rate)/100;

}


