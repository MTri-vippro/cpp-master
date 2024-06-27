#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number and i will show your number 1 to 10 in the table: "<<endl;
    cin>>num;
    for(int i{0}; i<=num; ++i){
        cout<<i<< " ";
        if(i%10==0)
            cout<<"\n";
    }
    return 0;
}