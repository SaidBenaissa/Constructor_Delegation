#include <iostream>
#include <string>

using namespace std;

class Rectangle {
private:
    int length;
    int width;
    string color;

public:
    Rectangle(int l, int b) {
        cout << "Constructor 1 with 2 parameters called" << endl;
        length = l;
        width = b;
    }

    Rectangle(int l, int b, string c) : length(l), width(b) {
        cout << "Constructor 2  with 3 parameters called" << endl;
        color = c;
    }
    int area() {
        return length * width;
    }
    int perimeter() {
        return 2 * (length + width);
    }
    void print() {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << width
             << endl;
        cout << "Color: " << color << endl;
        cout << "Area: " << area() << endl;
        cout << "Perimeter: " << perimeter() << endl;
    }
};

int main() {
    Rectangle *rectangle = new Rectangle(10, 5, "Red");
    rectangle->print();

    return 0;
}
