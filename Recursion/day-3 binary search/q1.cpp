// Print multiplication table of 7  using recursion.

#include<bits/stdc++.h>
using namespace std;

void multiple(int n){
    if(n==11){
        return;
    }
    cout<<"7 * "<<n<<" = "<<7*n<<endl;
    multiple(++n);
}
int main(){
    multiple(1);
}