#include<iostream>
using namespace std;

// Bitwise operators work bit by bit on the binary form of numbers.
// Rule: 1 & 1 = 1, otherwise 0

int main(){
    int a=4, b=8;
    cout<<(a&b); //output 0
    return 0;
}

//   6 = 110
//   3 = 011
// -------------
// 6 & 3 = 010  (which is 2 in decimal)