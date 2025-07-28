// Online C++ compiler to run C++ program online
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool comp(int a,int b){
    return a>b;
}
int main() {
    // int size=5;
    // int arr[size];
    // for(int i=0;i<size;i++) cin>>arr[i];
    
    // int max=arr[0];
    // int min=arr[0];
    
    // for(int i=0;i<5;i++){
    //     if(arr[i] > max) max=arr[i];
    //     if(arr[i] < min) min=arr[i];
        
    // }
    // cout<<"max ele in array : "<<max<<endl;
    // cout<<"min ele in array : "<<min<<endl;
    
    //sort array
    
    int arr[5] ={4,6,2,1,3};
    cout<<"Size of Array is "<<sizeof(arr);
    cout<<"size of individual element in array "<<sizeof(arr[0]);
    
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n;
    sort(arr,arr+n);//by default iascending order sort
    cout<<"Sorted in ascending order"<<endl;
    for(int i=0;i<5;i++) cout<<arr[i]<<endl;
    sort(arr,arr+n,comp);//by default iascending order sort
    cout<<"Sorted in descending order"<<endl;
    for(int i=0;i<5;i++) cout<<arr[i]<<endl;
    
    
    

    return 0;
}