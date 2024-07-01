#include<iostream>
using namespace std;
#include<time.h>
int main(){
    srand(time(0));
    int random_number{rand()%101};
    int number;
    do{
        cout<<"Enter number you're gonna guess: "<<endl;
        cin>>number;
        if(number>random_number){
            cout<<"Too high"<<endl;
        }else if(number<random_number)
            cout<<"Too low"<<endl;
                else
                    cout<<"Correct!"<<endl;





    }while(number!=random_number);




    return 0;
}