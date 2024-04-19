#include<iostream>
using namespace std;
class Product
{
   public:
    int ID;
    string name;
    int quantity;
    
    Product(int ID=0,string name=" ",int quantity=0)
    {
        this->ID=ID;
        this->name=name;
        this->quantity=quantity;
    }
    
    string get_name()
    {
        return name;
    }
    int get_ID()
     {
        return ID;
     }
    int get_quantity()
     {
        return quantity;
     }

};
class Inventory{
public:
Product P[10];
Inventory(string name=" ",int quantity=0,int ID=0){
for (int i = 0; i < 10; i++)
        {
            P[i] = Product(ID, name, quantity);
        }
}
void addproduct()
{
    for(int i=0;i<3;i++)
    {
        cout<<"Add Product Name    "<<endl; 
        cin.ignore();
        getline(cin, P[i].name);
        cout<<"Enter Product ID    "<<endl;
        cin >> P[i].ID;
        cout<<"Enter Product Quantity   "<<endl;
       cin >> P[i].quantity;
    }

}
void display()
{
    for(int i=0;i<3;i++)
    {
        cout<<"Product Name   "<<P[i].get_name()<<endl;
        cout<<"Product ID     "<<P[i].get_ID()<<endl;
        cout<<"Product Quantity    "<<P[i].get_quantity()<<endl;    
    }
}
};
int main()
{
    Inventory I;
    I.addproduct();
    I.display();
    return 0;
}