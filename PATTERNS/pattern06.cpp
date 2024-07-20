// 1
// 21
// 321
// 4321
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    while (i<=n)
    {
        int j=0;
        while (j<i)
        {
            cout<<i-j;   
            j++;
        }
        i++;
        cout<<endl;
    }
}