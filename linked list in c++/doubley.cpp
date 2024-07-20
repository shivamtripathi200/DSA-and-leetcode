#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int d){
        this-> data = d;
        next = NULL;
        prev = NULL;
    }
};
void pushAtHead(node* &head,int d){
    node* temp = new node(d);
    temp->next = head;
    head->prev = temp;
    head = temp;
}

//position insert
void posinsert(node* & head,node* & tail,int d,int p){
    node* temp = new node(d);
    node* trav = head;
    if(p == 1){
        pushAtHead(head,d);
        return;
    }else if (tail->next == NULL){
        push(tail,d);
    }
    for(int i = 1;i < p-1;i++){
        trav = trav->next;
    }
    temp->prev = trav;
    temp->next = trav->next;
    trav->next->prev = temp;
    trav->next = temp;
}


//insert
void push( node* &tail,int d){
    node* temp = new node(d);
    temp->prev = tail;
    tail->next = temp;
    tail = temp;
}

//display
void print(node* head){
    node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<endl;
        temp= temp->next;
    }
}
int main(){
    node* head = new node(5);
    node* tail = head;
    push(tail,12);
    push(tail,15);
    push(tail,16);
    pushAtHead(head,1);
    posinsert(head,tail,13,6);
    print(head);


}