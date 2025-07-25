//Token ,Expression ad Control Structure

#include<iostream>

using namespace std;

struct Student{
    int id;
    char name[5];
    float cgp;
};

union Employee{
    int id;
    char name[5];
    float cgp;
};


int add_call_by_value(int a,int b)//parameter passing by call by value
{ 
    a++;
    b++;
    return a+b;
}

int add_call_by_reference(int &a , int &b){
    a++;
    b++;
    return a+b;
}





int main(){
    // int a=10;
    // cout<<a<<sizeof(a);

    // Employee e1;
    // Student s1;
    // cout<<"Size of EMployee Union :"<<sizeof(e1)<<endl;
    // cout<<"Size of  Student Structure :"<<sizeof(s1)<<endl;
    // char name[5];
    // int id;
    // float cgp;
    // cout<<sizeof(name)<<sizeof(id)<<sizeof(cgp);

    // enum shape{circle=45,triangle,square};
    // shape c=circle;
    // cout<<c;
     
    // char str[7]="Aditya";
    // cout<<str<<endl;
    // if(str[6]=='\0') cout<<"true"<<endl;
    // else cout<<"false"<<endl;
    // for(char c:str){
    //     cout<<(int)c<<endl;
    // }

    // int x=24;
    // int *p;
    // p=&x;
    // cout<<"Address of x we stored in pointer p which is " <<p<<" and value stored on that address is "<<*p;

    //reference variable
    // float pi=3.14;
    // float &ref_pi =pi;
    // cout<<pi<<"\t"<<ref_pi<<"\t";
    // ref_pi=3.142;
    // cout<<pi<<"\t"<<ref_pi<<"\t";


    // int a=10;
    // int b=10;

    // cout<<" Value of a and b before call by value add function :- "<<a<<"\t"<<b<<endl;
    // cout<<" Value of a and b after  call by value add function :- "<<a<<"\t"<<b<<" and thier addittio is"<<add_call_by_value(a,b)<<endl;
    
    // a=10;
    // b=10;
    // cout<<" Value of a and b before call by reference add function :- "<<a<<"\t"<<b<<endl;
    // cout<<" Value of a and b after  call by reference add function :- "<<a<<"\t"<<b<<" and thier addittio is"<<add_call_by_reference(a,b)<<endl;


    int m=311;
    {
        int m=310;
        {
            int m=309;
            int k=m;
            cout<<"value of k "<<k<<endl;
            cout<<"value of m of inner inner block "<<m<<endl;
            cout<<"value of m of inner block"<< ::m <<endl;

        }
        cout<<"value of m of inner block"<<m<<endl;
        cout<<"value of m of main block"<< ::m <<endl;
    }
    cout<<"You are in main block";


    return 0;
    
}