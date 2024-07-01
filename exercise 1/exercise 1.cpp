// code thwr hello world bes
#include<iostream>
using namespace std;int add_number(int a, int b);
int main(){
    int number;
    cout<<"Enter 2 intergers sparated by space: "<<endl;
    cin>> number;
    cout<<add_number(number,number)<<endl;
    return 0;

}
int add_nunmber(int a,int b){
    return a+b;
}