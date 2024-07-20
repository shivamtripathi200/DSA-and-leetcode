#include<bits/stdc++.h>
using  namespace std;
bool palindrome(string name){
    int n= name.length()-1;
    int s=0;
    while (s<=n)
    {
        if(name[s++]!=name[n--]){
            return 0;
        }
    }
    return 1;
}
void lowercase(char &ch){
    if(ch>='a'&& ch<='z'){
        return;
    }else{
        ch = ch-'A'+'a';
    }
}
void removesymbols(string &name){
    string temp="";
    int i=0;
    while(i<name.length()){
        if((name[i]>='a' && name[i]<='z')|| (name[i]>='A' && name[i]<='Z')|| (name[i]>=0 && name[i]<=9)){
            temp+=name[i];
        }
        i++;
    }
   
    name=temp;
}
int main(){
    string name;
    cin>>name;
    removesymbols(name);
    cout<<name;

    // for (int  i = 0; i < name.length(); i++)
    // {
    //     lowercase(name[i]);
    // }
    // cout<<name;
    
    // cout<<"palindrome->"<<palindrome(name)<<endl;

}