// code thwr hello world bes
#include<iostream>
using namespace std;
int main(){
    int integer_1{0},integer_2{0};
    char operations;
    cout<<"Enter your interger sparated by space: "<<endl;
    cin>>integer_1>>integer_2;
    cout<<"choose the operations you want to do with 2 integers: "<<endl;
    cin>>operations;
    switch(operations){
        case '+':
        cout<<integer_1+integer_2<<endl; break;
        case '-':
        cout<<integer_1-integer_2<<endl; break;
        case '*':
        cout<<integer_1*integer_2<<endl; break;
        case '/':           
        {
            
            if(integer_2==0)



            
                cout<<"Error: Dvison by zero"<<endl;
            else




            cout<<integer_1/integer_2<< endl;
            break;




            
        }
        default:
        cout<<"choose the operations again"<< endl;
    }
    





    return 0;
}