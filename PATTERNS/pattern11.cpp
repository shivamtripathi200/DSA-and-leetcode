//    1
//   121
//  12321
// 1234321  
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<=n-i)
        {
            cout<<" ";
            j++;
        }
        int k=1;
        while (k<=i)
        {
            cout<<k;
            k++;
        }
        int r=1;
        while (r<i)
        {
            cout<<i-r;
            r++;
        }
        // 2nd method for the 'r' part
        // int r=i-1;
        // while (r)
        // {
        //     cout<<r;
        //     r--;
        // }
        
        
        
        cout<<endl;
        i++;
    }
}