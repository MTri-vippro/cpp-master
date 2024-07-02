#include<iostream>
using namespace std;
int main(){
    int *pointer1;
    int *pointer2;
    int number{100};
    pointer1 = &number;
    pointer2 = pointer1;
    cout<<"value of num "<< number << endl;
    cout<<"value of pointer1 point to number is "<< *pointer1 << endl;
    cout<<"value of pointer2 point to pointer1 is "<< *pointer2 <<endl;
    number = 100000;
    cout<<"value of pointer1 point to number is "<< *pointer1 << endl;
    cout<<"value of pointer2 point to pointer1 is "<< *pointer2 <<endl;
    cout<<"address of pointer1 "<< &pointer1 << endl;
    cout<<"address of pointer2 "<< &pointer2 <<endl;


    return 0;
}
