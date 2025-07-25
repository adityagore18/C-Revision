#include<iostream>

using namespace std;


class Name{
     
    public:
    
    virtual  void display(){
        cout<<"Hello" <<endl;
    }

};

class FullName:public Name{
    
    public:
   
    void display(){
        cout<<"Hwllo Freinds"<<endl;
    }
}



int main(){
    Name stud1();
    stud1.display();
    FullName stud2();
    stud2.display();

}