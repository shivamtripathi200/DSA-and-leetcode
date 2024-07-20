// 1
// 23
// 456
// 78910
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    int c=1;
    while (i<=n)
    {
        int j=1;
        while (j<=i)
        {
            cout<<c;
            c++;
            j++;
        }
        cout<<endl;
        i++;
        
    }
    
}