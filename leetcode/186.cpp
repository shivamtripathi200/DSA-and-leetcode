// i/p-> My name is shivam
// o/p-> ym eman si mavihs
#include<bits/stdc++.h>
using namespace std;
void reverse(string &s,int a,int b){
    while (a<b)
    {
        swap(s[a++],s[b--]);
    }
    
}
int main() {
    string s;
    getline(cin,s);
    int j = 0 ;
    int i=0;
    for(;s[i]!='\0';i++){
        if(s[i]==' '){
            reverse(s,j,i-1);
            j=i+1;
        }
        
    }
    if(s[i]=='\0'){
              reverse(s,j,i-1);
            j=i+1;
    }
    cout<<s<<endl;
}
