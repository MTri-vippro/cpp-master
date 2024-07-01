#include<iostream>
using namespace std;
int main(){
    int number{};
    int initial{1000};
    int deposit_money{};
    int withdraw_money;
    do {
        cout<<"1. Check balance"<<endl;
        cout<<"2. Deposit money"<<endl;
        cout<<"3. Withdraw money"<<endl;
        cout<<"4. Exit"<<endl;
        cout<<"Enter the number you wanna do:"<<endl;
        cin>>number;
    
        if(number==1){
            cout<<"Your balance is "<< initial <<endl;
            cout<<"---------------------------"<<endl;
        }else if(number==2){
            cout<<"Enter money you want to deposit: "<<endl;
            cin>>deposit_money;
            cout<<"Deposit succesful. Your balance is: "<<initial+deposit_money<<endl;
            cout<<"---------------------------"<<endl;
        }else if(number==3){
        cout<<"Enter money you want to withdraw: "<<endl;
        cin>>withdraw_money;
        if(initial+deposit_money>withdraw_money||withdraw_money<initial){
            cout<<"withdraw succesful. Your balance is "<<initial+deposit_money-withdraw_money<<endl;
            cout<<"---------------------------"<<endl;
        }else
            cout<<"Your balance is not enough for withdrawing";
            cout<<"---------------------------"<<endl;
        }else if(number==4){
        cout<<"Thank you, hope to see you again in our Bank"<<endl;
        }else 
            cout<<"Unknow option--- try again"<<endl;
    
    }while(number!=4);
    




    return 0;
}