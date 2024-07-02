#include<iostream>
using namespace std;
int main(){
    int number{10};
    const int *const pointer = &number;
    *pointer = 25;
    cout << *pointer << endl;
    number = 100000;
    cout<< *pointer << endl;
    return 0;
}