#include<iostream>
#include<string>
using namespace std;
void greet(const string& name="Guest");

int main(){
    greet("Brian");
    greet("Alice");
    greet("Hieu");
    greet();
    




    return 0;
}
void greet(const string& name="Guest"){
    cout<<"Hello, "<<name<<" !"<<endl;
}