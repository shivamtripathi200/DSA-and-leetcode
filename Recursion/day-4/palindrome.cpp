#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s,int a,int l){
    if(a>l)
        return true;
    if(s[a++]!=s[l--]){
        return false;
    }
    palindrome(s,a,l);
}

int main(){
    string s="abba";
    if(palindrome(s,0,s.length()-1))
        cout<<"The string is palindrome"<<endl;
    else
        cout<<"Not palindrome"<<endl;
}