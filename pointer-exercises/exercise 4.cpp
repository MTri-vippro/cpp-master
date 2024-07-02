#include<iostream>
using namespace std;
int main(){
    int array[5]{19,2,25,6,4};
    int *pointer;
    for(pointer = array; pointer < array + 5; ++pointer){
        cout<< &pointer << " ";
    }

    return 0;
}