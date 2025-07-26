#include<iostream>

using namespace std;

//Passing Object as Function argument;
class Complex{
    private:
    float i,r;
    public:
    Complex(float real,float img){
        i=img;
        r=real;
    }

    void getComplexNo(){
        cout<<r<<"+"<<i<<"i"<<endl;
    }

    float getR(){
        return r;
    }

    float getI(){
        return i;
    }

    Complex sum(Complex x){
        float xr = r + x.getR();
        float xi = i + x.getI();
        Complex c3(xr,xi);
        return c3;
    }
};

int main(){
    Complex c1(1.5,5.5) , c2(2.5,3.5);
    c1.getComplexNo();
    c2.getComplexNo();

    c1.sum(c2).getComplexNo();

}
