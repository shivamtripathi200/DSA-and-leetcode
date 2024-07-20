#include<iostream>
#include<math.h>
using namespace std;
class BN_DN{
    public:
    BN_DN();
    BN_DN(int n){
        int digit,i=0,ans=0;
        while(n){
            digit=n%10;
            if(digit==1)
            ans=ans+pow(2,i);
            n=n/10;
            i++;
        }
        cout<<ans;
    }
};
int main(){
    int a;
    cin>>a;
    BN_DN t1(a);
}