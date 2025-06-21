#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node *next;
    Node *prev;
     Node(int val){
        data= val;
        next = NULL;
        prev=NULL;
     }
};
class list {
    public:
    Node* head;
    Node *tail;
    list(){
        head=NULL;
        tail = NULL;
    }

void Push_front(int val){
    Node* newNode =new Node(val);
    if(head==NULL){
     head = tail = newNode;
    } 
    else {
        newNode ->next = head;
        head ->prev = newNode;
        head = newNode;
    }
}
 void Push_back(int val ){
    Node* newNode= new Node(val) ;
    if(head == NULL){
        head = tail= newNode;
    }
    else{
        newNode->prev=tail;
        tail->next=newNode;
        tail = newNode;
    }
 }
 void pop_back(int val){
    Node*temp = tail;
    if(tail==NULL){
        cout<<"list is a empty";
    }
    else{
        tail = tail->prev;
        tail->next=NULL;
        temp->prev=NULL;
        delete temp;
    }
 }
void Printll(){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"<->";
        temp = temp->next;

    }
    cout << "NULL"<<endl;

}
};
int main(){
    list ll;
 ll.Push_back(1);
 ll.Push_back(2);
  ll.Push_back(3);
  ll.Push_back(4);
  ll.pop_back(4);
 ll.Printll();


    return 0;
}