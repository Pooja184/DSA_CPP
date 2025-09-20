#include<iostream>
using namespace std;

// Type Conversion means converting one data type into another
// conversion-implicit 
// casting- explicit
int main(){
    // implicit
    int price=18;
    double newPrice=price;
    cout<<newPrice<<"\n";

    // explicit
    double productPrice=140.99;
    int newProductPrice= static_cast<int>(productPrice);
    cout<<newProductPrice;

    // input
    float num;
    cin>>num;
    cout<<num+2;
    return 0;
}