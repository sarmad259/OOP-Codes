#include<iostream>
using namespace std;

class add_operator {
private:
    int value;

public:
    void get_Data(int val) {
        value = val;
    }

    friend add_operator operator+(const add_operator& a, const add_operator& b);
    int get_value()
    {
        return value;
    }
};

add_operator operator+(const add_operator& a, const add_operator& b) {
    add_operator c;
    c.value = a.value + b.value;
    return c;
}

int main() {
    add_operator obj1, obj2, result;
    int q, e;

    cout << "Enter the value of A: ";
    cin >> q;
    cout << "Enter the value of B: ";
    cin >> e;

    obj1.get_Data(q);
    obj2.get_Data(e);

    result = obj1 + obj2;

    cout << "Result: " << result.get_value() << endl;

    return 0;
}
