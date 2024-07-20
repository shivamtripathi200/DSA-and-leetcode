#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    int i=0;
    int ans=0;
    int digit;
    cout<<"Enter the number to  be converted to binary";
    cin>>n;
    while (n)
    {
        digit=n%2;
        ans=(pow(10,i)*digit)+ans;
        n=n>>1;
        i++;
    }
    cout<<ans<<endl;;
}