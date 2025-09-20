#include<iostream>
using namespace std;

int main(){
    int age= 14;//4 bytes
    char name= 'p';//1 byte  //use '' instead of "" //If you want a string of text (like a name):#include <string> string name = "p";
    float PI=3.14f;//4 byte // 3.14f → the 'f' tells compiler that this is a float literal (not double)
    bool isSafe=true; //1 byte // true=1 and false=0
    double price=100.99;//8 byte
    cout<<age;
    return 0;
}