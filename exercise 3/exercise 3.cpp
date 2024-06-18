

#include<iostream>
using namespace std;
int main(){
    int num{};
    cout<<"Enter a num betwene(1-7), iam gonna show you what num will be in days of week: "<<endl;
    cin>>num;
    switch(num){
        case 1:
        cout<<"Monday"<<endl; break;
        case 2:
        cout<<"Tuesday"<<endl; break;
        case 3:
        cout<<"Wednesday"<<endl; break;
        case 4:
        cout<<"Thursday"<<endl; break;
        case 5:
        cout<<"Friday"<<endl; break;
        case 6:
        cout<<"Satur9day"<<endl; break;
        case 7:
        cout<<"Sunday"<< endl; break;
        default: 
        cout<<"choose num between (1-7) again"<<endl;
    }
    return 0;

}
    