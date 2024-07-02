#include<iostream>
#include<string>
using namespace std;
int main(){
    const int number = 10;
    const int *pointer = &number;
    cout<<*pointer << endl;
    *pointer = 2000;
    cout<< *pointer << endl; 
    

    return 0;
}