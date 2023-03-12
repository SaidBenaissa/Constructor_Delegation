#include <iostream>
#include <string>

using namespace std;

class Rectangle {
private:
    int length;
    int width;
    string color;

public:
    Rectangle(int l, int b) { // Constructor 1
        cout << "Constructor 1 " << endl;
        length = l;
        width = b;
    }

    Rectangle(int l, int b, string c) : Rectangle(l, b){ // Constructor 2 (using Constructor 1 called first and then Constructor 2)
        cout << "Constructor 2 " << endl;
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
