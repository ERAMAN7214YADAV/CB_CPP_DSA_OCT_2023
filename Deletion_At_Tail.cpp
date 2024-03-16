#include<iostream>
using namespace std;
class ListNode {
    public :
    int val;
    ListNode* next;
    ListNode(int val){
        this->val = val;
        this->next = NULL;
    }
};
void insertAtHead(ListNode*& head , int val){
    ListNode* n = new ListNode(val);
    n->next = head;
    head = n;
}
void printLinkedlist(ListNode* head){
    while(head != NULL){
        cout<<head->val<<" ";
        head = head->next;
    }
    cout<<endl;
}
void deleteAtHead(ListNode*& head){
    if(head == NULL)
    return;
    ListNode* temp = head;
    head = head->next;
    delete temp;
}
void deleteAtTail(ListNode*& head){
     if(head == NULL){
          return;
       }
    if(head->next = NULL){
        deleteAtHead(head);
        return;
    }
    ListNode* prev = NULL;
    ListNode* cur = head;
    while(cur->next != NULL){
        prev = cur;
        cur = cur->next;
    }
    prev->next = NULL;
    delete cur;
}
int main () {
    ListNode* head = NULL;
 //   insertAtHead(head , 50);
 //   insertAtHead(head , 40);
 //   insertAtHead(head , 30);
 //   insertAtHead(head , 20);
    insertAtHead(head , 10);
    printLinkedlist(head);
    deleteAtTail(head);
    printLinkedlist(head);
    return 0;
}