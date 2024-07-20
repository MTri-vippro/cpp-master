#include <iostream>
#include <string>
using namespace std;

class Employee{
private:
    int id;
    string name;
    string position;
    double salary;
public:
    void inf4(){
        cout << "Enter name of the employee: " << endl;
        getline(cin,name);
        cout << "Enter the position of the employee: " << endl;
        getline(cin,position);
        cout << "Enter the ID of the employee: " << endl;
        cin >> id;
        cout << "Enter the salary of the employee: " << endl;
        cin >> salary;
    }
    void display(){
        cout << "Name of employee is: " << name << endl;
        cout << "Positione of employee is: " << position << endl;
        cout << "ID of employee is: " << id << endl;
        cout << "Salary of employee is: " << salary << endl;
    }
    double bonus_salary(double bonus ){
        return salary += salary * bonus / 100;
        
    }

};


int main(){ 
    Employee tri;
    cout << "Please enter your information: " << endl;

    tri.inf4();

    cout << "\n Here the information you just entered: " << endl;

    tri.display();

    cout << "You're the best employee of the month, you will get 30% bonus on your salary: " << tri.bonus_salary(30) << endl;




    return 0;
}