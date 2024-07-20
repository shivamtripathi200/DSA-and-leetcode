#include<iostream>
#include<list>
using namespace std;
int main() {
    list<int> l;

    list<int> n(l);//coping a list l int n

    list<int> n1(5,100);
    cout<<"printing n1 "<<endl;
    for(int i:n1){
    cout<<i<<" ";
    }

    l.push_back(1);
    l.push_front(2);

    for(int i : l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    cout<<"after erase"<<endl;
    for(int i:l) {
        cout << i << " ";
    }
    cout<<"size of list"<<l.size()<<endl;
}
