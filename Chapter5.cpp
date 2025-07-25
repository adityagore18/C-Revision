//Classes and Object

#include<iostream>

using namespace std;

class Student{
    int studId;
    string name;
    int age;
    public:
    void getData(int,string ,int);
    void display();
};

void Student::getData(int a, string b,int c){
    studId=a;
    name=b;
    age=c;

}

void Student::display(){
    cout<<"studId : "<<studId<<", name : "<<name<<", age : "<<age<<endl;
}

class Complex{
    float real;
    float img;
    public:
    void setData(float x,float y){
        real=x;
        img=y;
    }

    void display(){
        cout<<real<<"+"<<img<<"i"<<endl;
    }

};


class BinaryNumber{
    private:
    string binStr;
    public:
    void set(string x){
        binStr = x;
    }
    void display(){
        cout<<"Binary Number  :"<<binStr<<endl;
    }
    bool isBinStr();
    string take_1s_complement();
};

bool BinaryNumber:: isBinStr(){
    for(int i=0;i<binStr.length();i++){
        if(binStr[i]!='0' && binStr[i]!='1') return false;
    }
    return true;
}

//nested member function
string BinaryNumber::take_1s_complement(){
    if(isBinStr()){
        string s="";
        for(int i=0;i<binStr.length();i++){
            if(binStr[i]=='0')  s+="1";
            else s+='0';
        }
        return "1 s complement of "+binStr+" is "+s+"\n";
    }else{
        return "Enter string is not binary string \n";
    }
}

class StaticKey{
    static int count;//static varable
    public:
    

    static void display(){
         
    }

};

int main(){
    Student s;
    s.getData(1,"Aditya",22);
    s.display();
    Complex c1,c2;
    c1.setData(5,4);
    c2.setData(3,2);

    c1.display();
    c2.display();

    BinaryNumber b1;
    b1.set("1010001");
    cout<<b1.take_1s_complement()<<endl;


    //Remainig static variable,static memeber function ,object pass an argument ,Array of object ,friend function,returing object
 

    return 0;
}