#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Sinhvien{
private:
    int id;
    string name;
    int age;
    char grade;
public:
    void information(){
        cout << "Enter your name: " << endl;
        getline(cin, name);
        cout << "Enter your ID: " << endl;
        cin >> id;
        cout << "Enter your age: " << endl;
        cin >> age;
        cout << "Enter your grade in the Alphabet: " << endl;
        cin >> grade;
    }
    void display(){
        cout << "Your name is " << name << endl;
        cout << "Hi "<< name << ", your ID is " << id <<endl;
        cout << "Hi " << name << ", your age is " << age << endl;
        cout << "Hi " << name << ", your grade is " << grade << endl;
    }

};

int main(){
    Sinhvien tri;
    tri.information();
    cout << "You just enterd your information is: \nH" << endl;
    tri.display();

    return 0;
}
