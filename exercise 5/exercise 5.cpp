#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int temperatures;
    int Celsius_to_Fahrenheit;
    int Fhrenheit_to_Celsius;
    char changed;
    cout<<"Enter temperatures you want to change to C or F: "<<endl;
    cin>>temperatures;
    cout<<"You wanna change c to f or f to c, enter C/F: "<<endl;
    cin>> changed;
    Celsius_to_Fahrenheit= (temperatures*1.8) + 32;
    Fhrenheit_to_Celsius= ((temperatures-32)/1.8);
    
    switch (changed)
    {
        case 'C':
        case 'c':
        cout<< Celsius_to_Fahrenheit<< " F" <<endl; break;
        case 'F':
        case 'f':
        cout<< Fhrenheit_to_Celsius<< " C" <<endl; break;
        default:
        cout<<"Error"<<endl;
    }



    

    return 0;
}