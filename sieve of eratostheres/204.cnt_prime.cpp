#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=9;
    int cnt = 0;
    // cout<<"Enter the  number:"<<endl;
    // cin>>n;
    vector<bool>prime(n+1,true);
    prime[0] = prime[1] = false;
    for (int i = 2; i < n; i++)
    {
        if(prime[i]){
            cnt++;
            cout<<i<<endl;
            for(int j = 2*i;j<n;j=j+i){
                prime[j] = 0;
            }
        }
    }
    cout<<"count of prime number:"<<cnt<<endl;
    
}