#include<iostream>
using namespace std;
int Pointer_Parameter(int number){
    int *pointer{&number};
    return *pointer;
}
int main(){
    cout<<Pointer_Parameter(10)<<endl;
    cout<<Pointer_Parameter(15)<<endl;
    return 0;
}