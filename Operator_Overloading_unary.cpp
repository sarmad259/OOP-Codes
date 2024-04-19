#include<iostream>
using namespace std;
class postfix
{
    private:
    int a;
    public:
    void get_data(int a)
    {
        this->a=a;
    }
    int get_value()
    {
        return a;
    }
    friend postfix operator++(postfix & z,int);
};
postfix operator++(postfix & z,int )
{
    for(int i=0;i<3;i++)
    {
    postfix temp=z;
    z.a++;
    return z;
    }
    
}
int main()
{
    postfix z;
    int a;
    cout<<"Enter the Value "<<endl;
    cin>>a;
    cout<<"\n";
    z.get_data(a);
  
    
    for(int i=0;i<3;i++ )
    {
        z++;
        cout<<"Value afetr Increment operator" <<z.get_value()<<endl;
    }
    return 0;

}