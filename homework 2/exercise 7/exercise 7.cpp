#include<iostream>
using namespace std;
int main(){
    int year_checked;
    cout<<"Enter a year, iam gonna check for you if it is a leap year or not: "<<endl;
    cin>>year_checked;
    if( year_checked%4==0&&year_checked%100!=0||year_checked%400==0)
        cout<<year_checked<<" is a leap year"<<endl;
    else
        cout<<year_checked<<" is not a leap year"<<endl;
    return 0;

}