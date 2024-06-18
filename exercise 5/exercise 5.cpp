#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter how many stars you want to print: "<< endl;
    cin>> num;
    for(int i{0},j{1};i<=num;++i){
        cout<<"*";
    }

    return 0;
}