// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0;
    while (i<n)
    {
        int j=1;
        while (j<=n-i)
        {
            cout<<j;
            j++;
        }
        int k=0;
        while (k<2*i)
        {
            cout<<"*";
            k++;
        }
        int l=n-i;
        while (l)
        {
            cout<<l;
            l--;
        }
        
        
        
        cout<<endl;
        i++;
    }
}