// input= 412
// output = four one two
#include<bits/stdc++.h>
using namespace std;
 void saydigit(int n,string arr[]){
    if (n==0) return ;

    int digit = n%10;
    n=n/10;
    saydigit(n,arr);
    cout<<arr[digit]<<" ";
 }
int main(){
    int n;
    cin>> n;
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    cout<<endl;
    saydigit(n,arr);
    cout<<endl;
}