// A B C 
// D E F
// G H I
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
    char c;
    
    for(int i=0;i<n;i++){
        for(int j=i+1;j<i+4;j++){
            char c=2*i+j+'A'-1;
            cout<<c;
        }
        cout<<endl;

    }
}

// 123 
// 456
// 789


// 123 000 000 123
// 234 222 111 123
// 345 444 222 123



