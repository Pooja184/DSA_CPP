#include<iostream>
using namespace std;


// outer loop- how much columns are print
// inner loop- what should be written in each row.
int main(){
    int range=4;
    // 1 2 3 4 
    // 1 2 3 4
    // 1 2 3 4
    // 1 2 3 4
    for(int i=1;i<=range;i++){
        for(int j=1;j<=range;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }

    // A B C D
    // A B C D
    // A B C D
    // A B C D
    cout<<"\n";
    for(int i=1;i<=range;i++){
        char ch='A';
        for(int j=1;j<=range;j++){
            cout<<ch<<" ";
            ch++;
        }
        cout<<"\n";
    }
    return 0;
}