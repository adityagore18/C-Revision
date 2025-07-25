#include<iostream>
using namespace std;
int main(){
    cout<<"Hello World"<<endl;
    
    int a;
    cout<<"Enter a Number";
    cin>>a;
    if(a>0) cout<<"positive\n";
    else cout<<"Negative\n";

    int x=3,y=56,z=5;
    if(x>y)
       if(x>z) cout<<"X is Larger\n";
       else cout<<"Z is Larger\n";
    else 
       if(y>z) cout<<"Y is Larger\n";
       else cout<<"Z is Larger\n";

    return 0;
}