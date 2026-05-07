#include <iostream>
using namespace std;


class Shape {
public:
    virtual void area() = 0;   
    virtual void draw() = 0;  
};


class Circle : public Shape {
    float r;

public:
    Circle(float radius) {
        r = radius;
    }

    void area() {
        cout << "Area of Circle = " << 3.14 * r * r << endl;
    }

    void draw() {
        cout << "Circle" << endl;
    }
};


class Rectangle : public Shape {
    
    float length, width;

public:
    Rectangle(float l, float w) {
        length = l;
        width = w;
    }

    void area() {
        cout << "Area of Rectangle = " << length * width << endl;
    }

    void draw() {
        cout << "Rectangle" << endl;
    }
};

int main() {

 
    Shape* s[2];

   
    s[0] = new Circle(3);
    s[1] = new Rectangle(2, 4);

    
    for (int i = 0; i < 2; i++) {
        s[i]->draw();
        s[i]->area();
        cout << endl;
    }

    return 0;
}