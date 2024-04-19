#include<iostream>
#include<string>
using namespace std;
class Post
{
    private:
    string Title;
    string description;
    public:
    Post(string Title = " None ",string description =" ")
    {
    this->Title=Title;
    this->description=description;
    }

    void setdata(string Title = " None ",string description =" ")
    {
        this->Title=Title;
        this->description=description;
    }
    string getTitle()
    {
        return Title;
    }
    string getdescription()
    {
        return description;
    }
};
class UserAccount
{
protected:
string username;
string password;
public:
Post P[3];
UserAccount(string username=" None ",string password = " None ",string Title= "None",string description = "None ")
{
    this->username=username;
    this->password=password;
}
void setdata()
{
   
    
    cout<<"Enter username"<<endl;
    cin >>username;
    cout<<"Enter password"<<endl;
    cin>>password;
    
}
string get_user()
{
    return username;
}
string get_pass()
{
    return password;
}
void addPost()
{
    for (int i = 0; i < 3; i++)
    {
        string title, description;
        cout << "Please Enter Relevant Title of the Post" << i + 1 << ": ";
        cin >> title;
        cout << "Add apporipirate Descripiton of the Post" << i + 1 << ": ";
        cin >> description;
        P[i].setdata(title, description);
    }
}

void veiw_post()
{
    for (int i=0;i<3;i++ )
{
cout<<"Title of the post is :"<<P[i].getTitle()<<endl;
cout<<"Description of the post is:"<<P[i].getdescription()<<endl;
}
}
void displayInfo()
{
    cout<<"Username of Person is: "<<get_user()<<endl;
    cout<<"Password of Person is: "<<get_pass()<<endl;
}
};
class PersonalAccount{
private:
string Gender;
public:
void displayInfo();
};
class BusinessAccount{
private:
float revenue;
public:
void displayInfo();
};
//Polymorphism can be done but shortage of time
int main()
{
    string Title,Desc;
    
    Post P;
    //Post *P
    //P=&U
    //P=&PA;
    //P=&BA
    //For PolyMorphism
    UserAccount U;
    PersonalAccount PA;
    BusinessAccount BA;
    U.setdata();
    U.addPost();
    U.veiw_post();
    U.displayInfo();
    U.displayInfo();
    return 0;
    
}
