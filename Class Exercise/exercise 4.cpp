#include <iostream>
#include <string>
using namespace std;

class Rectangle{
private:
    double length, width;
public:
    void inf4(double l, double w){
        length = l;
        width = w;
    };
    void display(){
        cout << "Length is: " << length << endl;
        cout << "Width is: " << width << endl;       
    }
    double perimeter(){
        return (length + width) * 2;
    }
    double area(){
        return length * width;
    }

};


int main(){
    Rectangle tri;
    tri.inf4(100, 10);
    cout << "Herer the information of the Rectangle: " << endl;
    tri.display();

    cout << "The perimeter of the Rectangle: " << tri.perimeter() << endl;
    cout << "The area of the Rectangle: " << tri.area() << endl;

    return 0;
}