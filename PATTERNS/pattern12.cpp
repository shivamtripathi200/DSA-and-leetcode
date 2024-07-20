// 1234
//  234
//   34
//    4
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=1;
        while (j<i)
        {
            cout<<" ";
            j++;
        }
        int t=i;
        while (t<=n)
        {
            cout<<t;
            t++;
        }
        
        cout<<endl;
        i++;
    }
}