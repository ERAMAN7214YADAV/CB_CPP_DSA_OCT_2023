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
  ListNode* getNode(ListNode* head , int j){
    int k = 0;
    while(head != NULL and k<j){
        head = head->next;
        k++;
    }
    return head;
    }
  
    void insertAtIndex(ListNode*& head , int i , int val){
        if(i == 0){
            insertAtHead(head , val);
            return;
        }
        ListNode* n = new ListNode(val);
        ListNode* prev = getNode(head , i-1);
        if(prev == NULL){
        return;
        }
        n->next = prev->next;
        prev->next = n;
    }
   void printLinkedlist(ListNode* head){
    while(head != NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
    cout<<endl;
   }
    int main () {
        ListNode* head= NULL;
        insertAtHead(head , 50);
        insertAtHead(head , 40);
        insertAtHead(head , 30);
        insertAtHead(head , 20);
        insertAtHead(head , 10);
        printLinkedlist(head);
        insertAtIndex(head , 0 ,25);
        printLinkedlist(head);

        return 0;
    }
