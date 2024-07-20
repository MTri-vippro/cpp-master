#include <iostream>
#include <string>
using namespace std;


class Book{
private:
    int isbn;
    string tittle;
    string author;
    double price;
public:
    void inf4(){
        cout << "Enter the Author: " << endl;
        getline(cin,author);
        cout << "Enter tittle of book: " << endl;
        getline(cin,tittle);
        cout << "Enter ISBN of book: " << endl;
        cin >> isbn;
        cout << "Enter the Price: "<< endl;
        cin >> price;
    }
    void display(){
        cout << "ISBN of book is: " << isbn << endl;
        cout << "The Tittle of book is " << tittle << endl;
        cout << "The Author of book is " << author << endl;
        cout << " the price of book is " << price << endl;
    }
    void discount(double discount){
        if(discount >= 0 && discount <= 100){
            double percent_discount = price * discount / 100;
            price -= percent_discount;
            cout << "Your discount is about " << discount << "%" << endl;
            cout << "Then new price is " << price << endl;
        }else 
            cout <<"Please enter your discount again, discount is between 0-100: " << endl;

    }
};



int main(){
    double discount;
    Book cach_lam_giau;

    cout <<"Please enter your book's information: " << endl;
    cach_lam_giau.inf4();
    cout <<"\n Here your information which you just enterd: " << endl;
    cach_lam_giau.display();
    cout <<"Please enter your percent to discount: " << endl;
    cin >> discount;
    cach_lam_giau.discount(discount);

    return 0;
}