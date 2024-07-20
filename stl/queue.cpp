#include<iostream>
#include<queue>
using namespace std;
int main(){
    queue<string> q;
    q.push("love");
    q.push("babbar");
    q.push("kumar");

    cout<<"size initially"<<q.size()<<endl;
    cout<<"First Element"<<q.front()<<endl;
    //popping the first element from the front of the queue using pop function and printing it out
    q.pop();
    cout<<"After Poping First Element "<<q.front()<<endl;
    cout<<"size after poping"<<q.size()<<endl;
}