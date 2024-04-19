#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
class Animal
{
    private:
    int eyes;
    int legs;
    public:
    Animal(int legs=0,int eyes=0)
    {
        this->legs=legs;
        this->eyes=eyes;
    }
    void set_data(int legs,int eyes)
    {
        this->legs=legs;
        this->eyes=eyes;
    }
    void display()
    {
        cout<<"Legs Friend Function:"<<legs<<endl;
        cout<<"Eyes Friend Function:"<<eyes<<endl;
    }
    friend void display2(Animal A);//Friend Function
    friend class Dog;//Friend Class
};       
void display2(Animal A)//Friend Function
{
    cout<<A.eyes<<endl;
    cout<<A.legs<<endl;
}
class Dog//Friend Class
{
    public:
    Animal *A;
  

    void display3()
    {
    cout<<A->eyes<<endl;
    cout<<A->legs<<endl;
    }
};
int main()
{
    int Eyes,Legs;
    cout<<"Enter Animal Eyes "<<endl;
    cin>>Eyes;
    cout<<"Enter Animal Legs "<<endl;
    cin>>Legs;
 Animal A;
 A.set_data(Legs,Eyes);
 A.display();
 display2(A);//In Friend Function we snd object so it just can access all the private members in class
 Dog D;
   D.A = &A;//Dog class accessing Animal class and with that it's storing Animal address
 D.display3();
}