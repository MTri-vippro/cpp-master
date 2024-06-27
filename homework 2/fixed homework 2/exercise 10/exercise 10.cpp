#include<iostream>
using namespace std;
int main(){
    int number {100};
    cout<<"Prime number between 1-100 is: "<<endl;
    for(int i{2};i<=number;++i){
        bool prime=true;
        for(int j{2};j<i;++j){
            if(i%j==0){
                prime=false;
                break;}
        }   
        
            if(prime){
                cout<<i<<" ";
            }
            
            

}
return 0;
}