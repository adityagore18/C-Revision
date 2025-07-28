// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

int fact(int num){
    int f=1;
    for(int i=1;i<=num;i++){
        f*=i;
    }
    return f;
}

bool isprime(int num){
     for(int i=2;i*i<=num;i++){
         if(num%i==0) return false;
     }
     return true;
}

//O(n/2)
bool ispalindrome(string num){
   
     
    int len = num.length();
    int s=0,e=len-1;
    while(s<e){
        if(num[s]!=num[e]) return false;
        s++;
        e--;
    }
    return true;
}

//o(n)
bool ispalindrome(int num){
    int temp=num;
    int revnum=0;
    while(temp>0){
        int rem = temp%10;
        revnum=revnum*10+rem;
        temp/=10;
    }
    
    if(num==revnum){
        return true;
    }else{
        return false;
    }
}

int main() {
    //Write a Program to Find the Sum of the First N Natural Numbers
    int n;
    cin>>n;
    // cout<<"sum of first "<<n <<" natural number is : "<<(n*(n+1))/2;
    // cout<<"Factorial of "<<n<<" is : "<<fact(n);
    // cout<<n<<" number is prime : "<<isprime(n);
    cout<<n<<" number is palindrome using O(n/2) : "<<ispalindrome(to_string(n))<<endl;
    cout<<n<<" number is palindrome using O(n) : "<<ispalindrome(n)<<endl;
    
    return 0;
}