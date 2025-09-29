#include<iostream>
using namespace std;

// figure out how to find if a number is power of 2 without any loop. 

int main(){
    int num=34;
    if(num && !(num & (num - 1))){
        cout<<"Power of 2"<<endl;
    }else{
        cout<<"Not a power of 2"<<endl;
    }
    return 0;

}