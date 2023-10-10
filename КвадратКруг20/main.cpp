#include <iostream>
using namespace std;

class Circle {
    double diametr;
public:
    Circle() = default;
    Circle(double D) : diametr(D) {}

    void Input() {
        cout << "Enter circle D: ";
        cin >> diametr;
    }
    void Print() const {
        cout << "Circle D: " << diametr << endl;
    }
    int getD() const {
        return diametr;
    }
    void setD(double D) {
        if (D > 0.0) {
            diametr = D;
        }
    }
};

class Square {
    double side;
public:
    Square() = default;
    Square(double s) : side(s) {}

    void Input() {
        cout << "Enter square side: ";
        cin >> side;
    }

    void Print() const {
        cout << "Square: " << side << endl;
    }

    int getSide() const {
        return side;
    }

    void setSide(double si)
    {
        if (si > 0.0) {
            side = si;
        }
    }
};

class CircleInSquare : public Square, public Circle {
public:
    CircleInSquare() = default;
    CircleInSquare(double d, double s) : Circle(d), Square(s) {}

    void fitSquare() {
        if (getD() <= getSide()) {
            cout << "Circle fits into a square!" << endl;
        }
        else {
            cout << "The circle doesn`t fit in the square!" << endl;
        }
    }
    void Input() {
        Circle::Input();
        Square::Input();
    }
    void Print() const {
        Circle::Print();
        Square::Print();
    }
};

int main() {
    CircleInSquare ex1;
    ex1.Input();
    ex1.Print();
    cout << endl;
    ex1.fitSquare();
}