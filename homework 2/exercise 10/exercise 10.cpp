#include<iostream>
using namespace std;
int main(){
    int number{100};
    cout<<"the prime number between 1-100 is: 2 3 5 ";
    for(int i{5};i<=100;++i){
        if(i%2==0||i%3==0||i%5==0)
        cout<<"";
        else
        cout<<i<<" ";
    }
return 0;
}