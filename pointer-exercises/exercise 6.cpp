#include<iostream>
using namespace std;
int main (){
    int *pointer[5];
    for( int i = 0; i < 5; i++){
        pointer[i] = new int;
        *(pointer[i])= (i+1)*10;
        cout<<*(pointer[i])<<endl; 
    }
    for(int i = 0; i < 5; i++){
        delete pointer[i];
    }



    return 0;
}