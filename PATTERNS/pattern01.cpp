#include<iostream>
using namespace std;
int main(){
    int n;
    int k=0;
    cin>>n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i+1; j++)
        {
            cout<<j;
        }
        for (int j = k; j < n+2; j++)
        {
            cout<<" ";
        }
        
        for (int j = i; j > 0; j--)
        {
            cout<<j;
        }
        k=k+2;

        cout<<endl;
        
    }
    
}