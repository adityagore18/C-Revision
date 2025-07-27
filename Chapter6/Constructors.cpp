//Constructors

#include<iostream>
using namespace std;


class Item{
    int itemId;
    float price;
    public:
    Item();//defualt constructor;
    Item(int,float);
    Item(Item &);
    void showItem(){
        cout<<"Item id: "<<itemId<<" Price : "<<price<<endl;
    }

};
Item::Item(){
    cout<<"Constructor Called"<<endl;
    itemId=0;
    price=0;
}

Item::Item(int x,float y){
    itemId=x;
    price=y;
}

Item::Item(Item & i){
    
    itemId=i.itemId;
    price=i.price;
}

int main(){
    Item i1,i2(12,45.26);
    i1.showItem();
    i2.showItem();
    Item i3(i2);
    i3.showItem();


    return 0;
}

