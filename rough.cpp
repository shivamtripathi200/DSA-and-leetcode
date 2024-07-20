#include<bits/stdc++.h>
using namespace std;
void reverse(string &s,int a,int b){
    while(a<b){
        swap(s[a++],s[b--]);
    }
}
int main(){
    int n = 5;
    int x = 5;
    int ans = 1;
    while (n != 0)
    {
        if( n & 1){
            ans = ans * x;
        }
        ans = ans*x;
        n = n/2;
    }
    cout<<ans<<endl;
}