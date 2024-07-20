#include <iostream>
#include <string>
#include <math.h>
using namespace std;
class Point3D{
private:
    double x,y,z;
public:
    void inf4(double a, double b, double c){
        x = a;
        y = b;
        z = c;
    }
    void display(){
        cout << "x " << x << endl;
        cout << "y " << y <<endl;
        cout << "z " << z << endl;
        cout << endl;
    }
   double distance(Point3D other) {
        return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2) + pow(z - other.z, 2));
    }
    
};

class Space : public Point3D {




};

int main(){
    Point3D a;
    Point3D b;
    a.inf4(1,2,3);
    b.inf4(2,4,6);
    a.display();
    b.display();
    cout << "Distance between a and b is: " << b.distance(a);


    return 0;
}