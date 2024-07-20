//    A
//   ABA
//  ABCBA
// ABCDCBA
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        for (int j = n-i-1; j > 0; j--)
        {
            cout<<" ";
        }
        for (int j = 0; j <= i; j++)
        {
            char ch='A'+j;   
            cout<<ch;
        }
        for (int j = i; j >0; j--)
        {
            char ch='A'+j-1;
            cout<<ch;
        }
        
        
        cout<<endl;
    }
    
}
// 000 1    1
// 111 3   123
// 222 5  12345
// 333 7 1234567