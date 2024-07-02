#include<iostream>
using namespace std;
int main(){
    int array[5]{1,2,3,4,5};
    int *pointer = nullptr;
    for( pointer = &array[0] ; pointer < array + 5; pointer++){
        cout<<*pointer<<" ";
    }

    return 0;
}