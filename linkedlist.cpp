#include<iostream>
using namespace std;
class Node{// it is a one node of linklist and the data are the public nature in the node there are one is a data and other is a address of the next node
    public :
    int data;// data in the node
    Node* next;// address of the next node
    Node(int val){
        data = val;// it is a constructor and also say a last node of linked list
        next = NULL;
    };
};
class list {
    Node* head ;
    Node* tail;

    public:
    list(){
        head = tail = NULL;//non parameterized constructor

    }
    // function to create a new node and insert at a begning
    void Push_front(int val){
        Node* newNode =  new Node(val);
        if(head==NULL){
            head = tail = newNode;
            return;
        }
        else {
            newNode->next = head;
            head = newNode;
        }
    };
    // insert a node at end
    void push_back(int val){
      Node* newNode = new Node(val); // in this "new" keyword is use to allocate a dynamically memory 
      if(head==NULL){
      head = tail = newNode;
      }
      else{
        tail -> next = newNode;
        tail = newNode;

      }

    }
    // delete at a front
    void pop_front(){
      if (head == NULL){
        cout<<"list is a empty"<<endl;
        return;
      }
      else{

        Node * temp = head;// creation of temp and equate to a head
        head= head->next;
        temp ->next = NULL;
        delete temp; // delete is a  predefined function to delete a node
      }
    }
    
// delete at back
void pop_back(){
  if( head == NULL){
    cout<<"list is empty"<<endl;
    return ;
  }
  else{
    Node * temp = head;
    while(temp->next!=tail){
      temp=temp->next;
      
    }
    temp ->next=NULL;
    delete tail;
    tail = temp;
  }
}
 // insert at a middle 
  void insertatmid(int val,int pos){
    if(pos<0){
      return ;
    }
    if(pos==0){
      Push_front(val);
    }
    else{
      Node * newNode = new Node(val);
      Node * temp = head;
      for(int i = 0 ; i<pos-1;i++){
        temp=temp->next;
      }
      newNode->next = temp->next;
      temp->next = newNode;

    }
    
  }
  //search in a linked list
  int searchlinklist(int search) {
    Node* temp = head;
    int index = 0;

    while (temp != NULL) {
        if (temp->data == search) {
            return index;  // Element found
        }
        temp = temp->next;
        index++;
    }

    return -1; // Element not found
}

    void Printll(){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp= temp->next;//update a next pointer 
        }
        cout<<"NULL"<<endl;
    } 
};
int main(){
    list ll;
    ll.Push_front(1);
    ll.Push_front(2);
    ll.Push_front(3);
    ll.push_back(4);
    ll.pop_front();
    ll.pop_back();
    ll.insertatmid(5,0);
    ll.searchlinklist(5);
    ll.Printll();
    return 0;
}
// push back in ll 
// if the list is already available in it you have a add a new node or data on a existing list
// there are 2 case 
// case 1 head = null 
//  same as a inser code
// case 2 head != null
// 1 create node
// 2 tail -> next = newNode
// 3 tail = new  node
//pop front and pop back 

// delete a  linked list problem no 237 
// in this code there are not to delete a  node permantly
// delete node a logically only
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 class Solution {
  public:
      void deleteNode(ListNode* node) {
         node-> val = node->next->val;
         ListNode* temp = node;
          node->next= node->next->next;
  
    
      }
  };
  | Line | What it does                                                       |
| ---- | ------------------------------------------------------------------ |
| 1    | Copies the value from the **next node** into the **current node**. |
| 2    | Saves a pointer to the **next node** (so we can delete it later).  |
| 3    | Changes `node->next` to point to the node **after** the next one.  |
| 4    | Frees the memory of the old next node (now redundant).             |

// #include<iostream>
// using namespace std;
// class Node{
//  public:
//  int data;
//  Node* next;
//  // constructor
//  Node (int data){
//     this->data = data;
//     this->next = NULL;
//   };
// };
// void insertathead(Node* &head,int d){// & head becoz to not to create a duplicate copy the data are actual insert in  a linked list
//   Node * temp = new Node(d);
//   temp -> next = head;
//   head = temp;

// }
// // how to traverse a linked list 
// void print(Node* &head){
//     Node * temp=head;
    
//     while(temp!=NULL){
//         cout<<temp->data<<"-> ";
//         temp =temp->next;
        
//     }
//     cout<<endl;
// }
// int main() {
//  Node*node = new Node(10);// heap memory and create a new node
// //  cout<< node-> data<< endl;
// //  cout<< node-> next<<endl;
//  Node* head = node ;
//  print(head); 
//  insertathead(head,12);
//   print(head); 

//  return 0;
// }


//Reverese linked list
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
 class Solution {
  public:
      ListNode* reverseList(ListNode* head) {
          ListNode* prev = NULL;
          ListNode* curr = head;
          ListNode* next = NULL;
          while(curr!=NULL){
              next=curr ->next;
              curr->next=prev;
              prev=curr;
              curr=next;
          }
          return prev;
      }
  };
  // find a midddle of list 
  /** use a slow and fast pointer approach
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
  public:
      ListNode* middleNode(ListNode* head) {
          ListNode* slow = head;
          ListNode* fast = head;
          while(fast!=NULL&&fast->next!=NULL){
              slow= slow->next;
              fast=fast->next->next;
          }
      
            return slow;
      }
  };

//detect a loop or cycle in a linked list 
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
 class Solution {
  public:
      bool hasCycle(ListNode *head) {
          ListNode*slow = head;
          ListNode*fast = head;
          while(fast!=NULL && fast->next!=NULL){
              slow=slow->next;
              fast=fast->next->next;
              if(slow==fast){
                  return true;
              }
          }
              return false;
          
      }
  };

  detect a loop in a cycle and find a node also 
  /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
  public:
      ListNode *detectCycle(ListNode *head) {
          ListNode * slow = head;
          ListNode * fast = head;
          bool iscycle=false;// this fuction is use to check a loop is exist or not
          while(fast!=NULL && fast->next !=NULL){
              slow= slow->next;
              fast = fast->next->next;
              if(slow==fast){
                iscycle = true;
                break;
               }
              
          }
          if(!iscycle){
              return NULL;// cycle is nor found return a NULL 
          }
          slow = head;// restart a process if it detect a cycle a so slow point to head slow=head
          // this is use to a return a node which made a cycle
          while(slow!=fast){
              slow= slow ->next;
              fast=fast->next;
              
          }
                  return slow;
      
          
      }
  };

  // detect a cycle and node and remove it
  /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
  public:
      ListNode *detectCycle(ListNode *head) {
          ListNode * slow = head;
          ListNode * fast = head;
          bool iscycle=false;
          while(fast!=NULL && fast->next !=NULL){
              slow= slow->next;
              fast = fast->next->next;
              if(slow==fast){
                iscycle = true;
                break;
                            }
              
          }
          if(!iscycle){
              return NULL;
          }
          slow = head;
          ListNode * prev= NULL; // create a pointer which a point a null value
          // to find a node which create a cycle
          while(slow!=fast){
              slow= slow ->next;
              prev=fast; // if cycle is form then a point a fast into a prev;
              fast=fast->next;
  
              
          } prev ->next = NULL; // and point a prev ka next into a null value so with the help of this we break the cycle
                  return slow;
      
          
      }
  };
// check if a linked list is a palindrome or not
  /**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
  public:
      // Function to reverse a linked list
      ListNode* reverseListNode(ListNode* head) {
          ListNode* prev = nullptr;
          ListNode* curr = head;
          while (curr != nullptr) {
              ListNode* nextTemp = curr->next;
              curr->next = prev;
              prev = curr;
              curr = nextTemp;
          }
          return prev;
      }
  
      bool isPalindrome(ListNode* head) {
          if (!head || !head->next) return true;
  
          // Find middle of the list
          ListNode* slow = head;
          ListNode* fast = head;
          while (fast->next != nullptr && fast->next->next != nullptr) {
              slow = slow->next;
              fast = fast->next->next;
          }
  
          // Reverse the second half
          ListNode* secondHalfStart = reverseListNode(slow->next);
  
          // Compare the two halves
          ListNode* first = head;
          ListNode* second = secondHalfStart;
          bool isPalin = true;
          while (second != nullptr) {
              if (first->val != second->val) {
                  isPalin = false;
                  break;
              }
              first = first->next;
              second = second->next;
          }
  
          // Restore the second half
          slow->next = reverseListNode(secondHalfStart);
  
          return isPalin;
      }
  };

  // delete a middle node in a linked list
  class Solution {
    public:
        ListNode* deleteMiddle(ListNode* head) {
            if (head == nullptr || head->next == nullptr)
                return nullptr; // If there's only one node, deleting it means list becomes empty
    
            ListNode* slow = head;
            ListNode* fast = head;
            ListNode* prev = nullptr; // To track the node before `slow`
    
            // Find middle node
            while (fast != nullptr && fast->next != nullptr) {
                fast = fast->next->next;
                prev = slow;
                slow = slow->next;
            }
    
            // Delete middle node
            prev->next = slow->next;
            delete slow;
    
            return head;
        }
    };
    
    /** reverse a linked list in a k nodes
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        int count=0;
        ListNode * temp= head;
        while(count < k){
          if(temp == NULL){
            return head;
          }
          temp=temp->next;
          count++;
        }
        // recursively call for rest of ll
          ListNode* prevnode=reverseKGroup(temp,  k);
         temp = head;
        count =0;
        while(count <k){
        ListNode * next = temp->next;
        temp ->next = prevnode;
        prevnode= temp;
        temp = next;
        count++;
         
        }
    return prevnode;
    } 
};