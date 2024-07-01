#include<iostream>
#include<iomanip>
using namespace std;
double multiply(double a, double b);
int main(){
    multiply(3,4);
    multiply(2.5,3.2);
    multiply(-2,-3);



    return 0;
}
double multiply(double a, double b){
    cout<<fixed<<setprecision(1);
    cout<<a<<" * "<<b<<" == "<<a*b<<endl;
    return 0;
}