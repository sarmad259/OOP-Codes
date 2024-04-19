#include<iostream>
using namespace std;

class animal {
    private:
        int legs;
        string color;
    public:
        animal(int legs=0, string color="None ") {
            this->legs = legs;
            this->color = color;
        }
        void set_legs(int legs) {
            this->legs = legs;
        }
        int get_legs() {
            return legs;
        }
        void set_color(string color) {
            this->color = color;
        }
        string get_color() {
            return color;
        }
        friend class fox;
};

class fox {
    private :
        string type;
        string name;
        animal a;
    public:
        fox(string type="None ", string name="None") {
            this->type = type;
            this->name = name;
        }
        void set_data(string type, string name) {
            this->type = type;
            this->name = name;
        }
        void display() {
            cout << "Name is: " << name << endl;
            cout << "Type is: " << type << endl;
            cout << "It has: " << a.get_legs() << " legs" << endl;
            cout << "It's color is: " << a.get_color() << endl;
        }
        void set_legs(int legs) {
            a.set_legs(legs);
        }
        void set_color(string color) {
            a.set_color(color);
        }
};

int main() {
    string name;
    string color;
    int legs;
    string type;
    fox f;
    animal a;
    cout << "Enter animal name: ";
    cin >> name;
    cout << "Enter its type: ";
    cin >> type;
    cout << "How many legs does it have? ";
    cin >> legs;
    cout << "Lastly, what color is it? ";
    cin >> color;
    f.set_data(type, name);
    f.set_legs(legs);
    f.set_color(color);
    f.display();
    return 0;
}

