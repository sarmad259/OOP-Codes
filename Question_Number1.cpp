#include<iostream>
using namespace std;
class Shape
{
public:
    virtual void calcArea() = 0;
    virtual void display() = 0;
    virtual ~Shape() {
        cout<<"Object of Shape Has been destroyed"<<endl;
    }
};

class Circle:public Shape{
    private: 
    float radius;
    public:
    float area;
    Circle(float radius=0):Shape()
    {
        this->radius=radius;
    }
    void setRadius(float radius)
{
    this->radius = radius;
}

    void calcArea()
    {
         area=3.14*radius*radius;
        
    }
    void display()
    {
        cout<<"Radius of Circle is "<<area<<endl;    
    }
    
        ~Circle()
        {
            cout<<"Object of Circle has been destroyed"<<endl;
        }

};
class Triangle:public Shape
{
    private: 
    float Base,Height;
    public:
    float area;
    Triangle(float Base=0,float Height=0)
    {
        this->Base=Base;
        this->Height=Height;
    }
    void set_Base(float Base)
    {
        this->Base=Base;
    }
    void set_Height(float Height)
    {
        this->Height=Height;
    }
    void calcArea()
{
    area = (Base * Height) / 2;
}

    void display()
    {
        cout<<"Area of Triangle is "<<area<<endl;
    }
     friend bool operator>(const Triangle& m1, const Triangle& l1);
     ~Triangle()
     {
        cout<<"Area of Triangle has been destroed"<<endl;
     }
};
class Rectangle:public Shape
{
    private:
    float length,width;
    public:
    float area;
    Rectangle(float length=0,float width=0):Shape()
    {
        this->length=length;
        this->width=width; 
    }
    void setLength(float length)
    {
        this->length=length;
    }
    void setWidth(float width)
    {
        this->width=width;
    }
    void calcArea()
    {
    area=length*width;
    }
    void display()
    {
        cout<<"Area of Rectangle is "<<area<<endl;
    }
    friend bool operator>(const Rectangle& r1, const Triangle & t1);
     ~Rectangle()
     {
        cout<<"Area of Rectangle has been destroed"<<endl;
     }   
};

 bool operator >(const Circle& x1, const Triangle& y1 ) {
    return x1.area > y1.area;
}

bool operator >(const Rectangle& r1, const Triangle& t1) {
    return r1.area > t1.area;
}

bool operator >(const Triangle& m1, const Triangle& l1) {
    return m1.area > l1.area;
}  
int main()
{
    float Radius,Length,Width,Base,Height;
    cout<<"Enter Radius of Circle "<<endl;
    cin>>Radius;
    cout<<"Enter Length of Rectangle"<<endl;
    cin>>Length;
    cout<<"Enter Width of Rectangle"<<endl;
    cin>>Width;
    cout<<"Enter Base of Triangle"<<endl;
    cin>>Base;
    cout<<"Enter Height of Triangle "<<endl;
    cin>>Height;
    Shape *S;
     
    Circle C;
    S=&C;
    C.setRadius(Radius);
    S->calcArea();
    S->display();
    Rectangle R;
    S=&R;
    R.setLength(Length);
    R.setWidth(Width);
    S->calcArea();
    S->display();
    Triangle T;
    S=&T;
    T.set_Base(Base);
    T.set_Height(Height);
    S->calcArea();
    
    S->display();
    
    if (C > T) {
        cout << "Area of Circle is greater than area of Triangle" << endl;
    } else {
        cout << "Area of Trianlge is greater than area of Circle" << endl;
    }

    if (R > T) {
        cout << "Area of Rectangle is greater than area of Triangle" << endl;
    } else {
        cout << "Area of Rectangle is not greater than area of Triangle" << endl;
    }
    return 0;
    

}
    
    

   
    
    
   
