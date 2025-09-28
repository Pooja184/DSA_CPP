#include<iostream>
using namespace std;


// Rule: 0 | 0 = 0, otherwise 1
int main(){
    int a=4,b=8;
    cout<<(a|b);
    return 0;
}


//   6 = 110
//   3 = 011
// -------------
// 6 | 3 = 111  (which is 7 in decimal)
