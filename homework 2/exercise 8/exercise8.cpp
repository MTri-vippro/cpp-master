#include<iostream>
using namespace std;
int main(){
    int number{};
    int initial{1000};
    int deposit_money;
    int withdraw_money;

    cout<<"1. Check balance"<<endl;
    cout<<"2. Deposit money"<<endl;
    cout<<"3. Withdraw money"<<endl;
    cout<<"4. Exit"<<endl;
    cout<<"Enter the number you wanna do:"<<endl;
    cin>>number;
    switch (number){
    case 1:
        cout<<"Your balance is "<< initial <<endl; break;
    case 2:
        cout<<"Enter money you want to deposit: "<<endl;
        cin>>deposit_money;
        cout<<"Deposit succesful. Your balance is: "<<initial+deposit_money<<endl;
        break;
    case 3:
        cout<<"Enter money you want to withdraw: "<<endl;
        cin>>withdraw_money;
        if(withdraw_money<=initial){
            cout<<"withdraw succesful. Your balance is "<<initial-withdraw_money<<endl;
        }else
            cout<<"Your balance is not enough for withdrawing";
        break;
    case 4:
        cout<<"Thank you, hope to see you again in our Bank"<<endl;
        break;
    default: cout<<"Enter the number between 1-4 again"<<endl;
    }
    






    return 0;
}