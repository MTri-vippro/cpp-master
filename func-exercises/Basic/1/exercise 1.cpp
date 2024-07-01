#include<iostream>
#include<string>
using namespace std;
int add(int num1, int num2);
int main(){
    add(3,5);
    add(-3,-5);
    add(0,0);

    return 0;
}
int add(int num1, int num2){
  cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
    return 0;
}