#include<iostream>
#include <string>
using namespace std;


bool palindrome(int x){
    
     string str=to_string(x);
     int i=0,j=str.size()-1;
     cout<<str[i]<<str[j]<<" ";


        bool isPalindrome=true;
        if(j==0){
            return palindrome;
        }
        while(i<j){
            cout<<str[i]<<" "<<str[j]<<endl;
            if(str[i]==str[j]){
                isPalindrome=true;
            }else{
                return false;
            }
            i++;
            j--;
        }
        if(isPalindrome){
            return true;
        }else{
            return false;
        }
}

int main(){
    int num=1000021;
    cout<<palindrome(num);
    return 0;
}