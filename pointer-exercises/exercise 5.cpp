#include<iostream>
using namespace std;
int main (){
    int *pointer = new int;
    *pointer = 42;  
    cout<<"Value of dynamically allocated integer: "<< *pointer <<endl;
    delete pointer;


    return 0;
}