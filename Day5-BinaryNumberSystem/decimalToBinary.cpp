#include<iostream>
using namespace std;


int decimalToBinaryConversion(int num){
    int ans=0,power=1;

    while(num>0){
        int rem=num%2;
        cout<<rem<<"rem \n";
        num/=2;
        ans+=(rem*power);
        power*=10;

    }
    return ans;
   
}
int main(){
    int num=42;
    cout<<decimalToBinaryConversion( num);
    return 0;
}