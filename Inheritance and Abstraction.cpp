#include <iostream>
using namespace std;

class Product
{
private:
    int ID;
    string name;
    int quantity;

public:
    Product(int ID = 0, string name = " ", int quantity = 0)
    {
        this->ID = ID;
        this->name = name;
        this->quantity = quantity;
    }

    void set_Data(int ID, string name, int quantity)
    {
        this->ID = ID;
        this->name = name;
        this->quantity = quantity;
    }

    virtual void display()
    {
        cout << "Product ID: " << ID << endl;
        cout << "Product Name: " << name << endl;
        cout << "Product Quantity: " << quantity << endl;
    }

    int get_ID()
    {
        return ID;
    }

    string get_name()
    {
        return name;
    }

    int get_quantity()
    {
        return quantity;
    }
};

class Electronic : public Product
{
private:
    int model_number;

public:
    Electronic(int ID = 0, string name = " ", int quantity = 0, int model_number = 0)
        : Product(ID, name, quantity)
    {
        this->model_number = model_number;
    }

    void set_model(int model_number)
    {
        this->model_number = model_number;
    }

    void display() override
    {
        cout << "Electronic ID: " << get_ID() << endl;
        cout << "Electronic Name: " << get_name() << endl;
        cout << "Electronic Quantity: " << get_quantity() << endl;
        cout << "Electronic Model Number: " << model_number << endl;
    }
};

int main()
{
     int ID;
    string Name;
    int Quantity;
    int Model_Number;

    const int numProducts = 3;
   
    Product *P[numProducts];
    Electronic E[numProducts];
    
    for (int i = 0; i < numProducts; i++)
{
   
    cout << "Enter Model ID " << i + 1 << ": ";
    cin >> ID;
    cout << "Enter Model Name " << i + 1 << ": ";
    cin >> Name;
    cout << "Enter Model Quantity " << i + 1 << ": ";
    cin >> Quantity;
    cout << "Enter Product Model Number " << i + 1 << ": ";
    cin >> Model_Number;

    E[i].set_Data(ID, Name, Quantity);
    E[i].set_model(Model_Number);
    P[i] = &E[i];
}


    for (int i = 0; i < numProducts; i++)
    {
        cout << "Product " << i + 1 << " Information:" << endl;
        P[i]->display();
        E[i].display();
        cout << endl;
    }

    return 0;
}
