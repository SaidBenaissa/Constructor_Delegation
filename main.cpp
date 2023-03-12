#include <iostream>
#include <string>

using namespace std;

class Rectangle {
private:
    int length;
    int breadth;
    string color;

public:
    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    Rectangle(int l, int b, string c): length(l), breadth(b) {
        color = c;
    }
    int area() {
        return length * breadth;
    }
    int perimeter() {
        return 2 * (length + breadth);
    }
    void print() {
        cout << "Length: " << length << endl;
        cout << "Breadth: " << breadth << endl;
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
