#include<iostream>
using namespace std;
class add_complex
{
    private:
    int x,y;
    public: 
    add_complex(int a=0,int b=0)
    {
        x=a;
        y=b;
    }
  
    void display()
    {
        cout<<"Complex number is:"<<x<<"+"<<y<<"i"<<endl;
        }
       friend add_complex operator +(add_complex & c1,add_complex & c2);
};
add_complex operator +(add_complex & c1,add_complex & c2)
        {
            int real=c1.x+c2.x;
            int img=c1.y+c2.y;
            cout<<"Sum of complex numbers is:"<<real<<"+"<<img<< "i"<<endl;
            
        }
int main()
{

int r1,c1,r2,c2;
cout<<"Enter Real part Of Complex c1"<<endl;
cin>>r1;
cout<<"Enter Complex part of Complex c2"<<endl;
cin>>c1;
cout<<"Enter Real part Of Complex c2"<<endl;
cin>>r2;
cout<<"Enter Complex part of Complex c2"<<endl;
cin>>c2;
add_complex com1(r1,c1);
add_complex com2(r2,c2);

add_complex c3=com1+com2;

}
