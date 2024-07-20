#include<bits/stdc++.h>
using namespace std;

// linked list
class node{
    public:
    int data;
    node* next;  //link to the next node in the list
    node(int d){
        this ->data = d;
        next=NULL;
    }
};

// push front
void insertfront(node* &head,int d){
    node* temp = new node(d);
    temp->next = head;
    head = temp;
}
// insertion
void push(node* &tail,int d){
    node* temp = new node(d);
    tail->next = temp;
    tail = temp;
}
//insertion in given position
void position_push(node* &head,node* &tail,int pos,int d){
    if( pos == 1){
        node* newnode = new node(d);
        newnode ->next = head;
        head = newnode;
        return;
    }
    node* temp = head;
    for (int i = 1; i < pos-1; i++)
    {
        temp = temp->next;
    }
    if(temp -> next == NULL){
        push(tail,d);
        return;
    }
    node* newnode = new node(d);
    newnode -> next = temp-> next;
    temp -> next = newnode;
    
}
//Deletion
void deletion(node* &head,node* &tail,int pos){
    node* temp = head;
    if(pos == 1){
        temp = head->next;
        head = temp;
        
        return;
    }
    for (int i = 1; i < pos-1; i++)
    {
        temp = temp->next;
    }
    temp->next = temp->next->next;
    
    if (temp->next == NULL){
        tail = temp;
    }
}

// Display
void print(node* head){
    node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<< " ";
        temp = temp->next;
    }cout<<endl;
    
}

int main(){
    node* head = new node(5);
    node* tail = head;
    push(tail,10);
    push(tail,12);
    push(tail,15);
    push(tail,16);
    push(tail,19);
    print(head);
    insertfront(head,2);
    print(head);

    position_push(head,tail,6,13);
    print(head);
    position_push(head,tail,1,1);
    print(head);

    position_push(head,tail,10,99);
    print(head);

    deletion(head,tail,1);
    print(head);

    deletion(head,tail,9);
    print(head);

    // to check 
    cout<<"head"<<head->data<<endl;
    cout<<"tail"<<tail->data<<endl;


}