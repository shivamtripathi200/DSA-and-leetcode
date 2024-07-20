#include<bits/stdc++.h>
using namespace std;

void reverse(string &s,int a,int l){
    if(a>l)
        return ;
    swap(s[a++],s[l--]);
    reverse(s,a,l);
}

int main(){
    string s="hello";
    reverse(s,0,s.length()-1);
    cout<<s<<" ";
    cout<<endl;
}