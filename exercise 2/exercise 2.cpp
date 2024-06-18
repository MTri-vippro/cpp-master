
#include<iostream>
using namespace std;
int main(){
    int scores;
    cout<<"Enter your scores iam gonna changed to a letter: "<<endl;
    cin>>scores;
    if(scores>=90&&scores<=100){
        cout<<"A"<<endl;
        else if(scores>=80&&scores<=89)
                cout<<"B"<<endl;
                else if(scores>=70&&scores<=79)
                    cout<<"C"<<endl;
                    else if(scores>=60&&scores<=69)
                        cout<<"D"<<endl;
                        else 
                        cout<<"F"<<endl;

    }





    return 0;
}