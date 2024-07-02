#include<iostream>
using namespace std;
int main(){
    int num{10};
    int *pointer = &num;
    cout<< *pointer<<endl;
    num =100;
    cout<<*pointer<<endl;
    num= 100000;
    cout<<"value of num is "<<*pointer<<endl;



    return 0;
}