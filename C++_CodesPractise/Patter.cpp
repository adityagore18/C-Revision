// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int main() {
    // int m=7;
    // int n=7;
    // for(int i=1;i<=m;i++){
    //     int t=1;
    //     n=n-1;
    //     int ws=n*2;
    //     while(t<=i){
    //         cout<<"* ";
    //         t++;
    //     }
    //     for(int i=1;i<=ws;i++) cout<<"  ";
    //     while(t>1){
    //         cout<<" *";
    //         t--;
    //     }
    //     cout<<"\n";
    // } 
    
    
    //triangle pattern
    int d=5;
    int m=1;
    for(int i=1;i<=5;i++){
        for(int j=5;j>i;j--) cout<<" ";
        for(int k=1;k<=i;k++) cout<<"*";
        if(i>1){
            for(int n=1;n<=m;n++) cout<<"*";
            m++;
        }
        cout<<"\n";
    }

    return 0;
}