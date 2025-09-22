#include<iostream>
using namespace std;

// 0,1,1,2,3,5,8,13
int fibonacci(int range){
    int first=0;int second=1;
    for(int i=1;i<=range;i++){
        cout<<first<<"\n";
        int next=first+second;
         first=second;
         second=next;
     
    }
}
int main(){
    fibonacci(10);
    return 0;
}
// result = 0 1 1 2
//     next=1
// i=1  first=1
//     second=1

//     next=2
// i=1  first=1
//     second=2

//     next=3
// i=1  first=2
//     second=3

//     next=5
// i=1  first=3
//     second=5

//     next=8
// i=1  first=5
//     second=8
