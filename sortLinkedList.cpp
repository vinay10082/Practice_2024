// Following is the class structure of the Node class:
#include <iostream>
using namespace std;

class ListNode
{
public:
    int data;
    ListNode *next;
    ListNode()
    {
        this->data = 0;
        next = NULL;
    }
    ListNode(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    ListNode(int data, ListNode* next)
    {
        this->data = data;
        this->next = next;
    }
};

    // ListNode* midList(ListNode* head){
    //     ListNode* slow = head;
    //     ListNode* fast = head->next;

    //     while(fast && fast->next){
    //         slow = slow->next;
    //         fast = fast->next->next;
    //     }
    //     return slow;
    // }

    // ListNode* mergeSort(ListNode* first, ListNode*second){
    //     if(!first) return second;
    //     if(!second) return first;

    //     ListNode* temp;

    //     if(first->data <= second->data){
    //         temp = first;
    //         temp->next = mergeSort(first->next, second);
    //     }
    //     else{
    //         temp = second;
    //         temp->next = mergeSort(first, second->next);
    //     }
    //     return temp;
    // }

    // ListNode* sortList(ListNode* head) {
    //     if(!head || !head->next) return head;
    //     ListNode* mid = midList(head);
    //     ListNode* a = head;
    //     ListNode* b = mid->next;
    //     mid->next = nullptr;

    //     a=sortList(a);
    //     b=sortList(b);

    //     return mergeSort(a, b);
    // }

ListNode *sortList(ListNode *head) {
    
  // Write your code here.
  if (!head && !head->next) return head;

  ListNode* zeroList = new ListNode(-1);
  ListNode* zeroMover = zeroList;
  ListNode* oneList = new ListNode(-1);
  ListNode* oneMover = oneList;
  ListNode* twoList = new ListNode(-1);
  ListNode* twoMover = twoList;

  ListNode* mover = head;

  while(mover){
      if(mover->data == 0){
          zeroMover->next = mover;
          zeroMover = zeroMover->next;
          zeroMover->next = nullptr;
      }
      else if(mover->data == 1){
          oneMover->next = mover;
          oneMover = oneMover->next;
          oneMover->next = nullptr;
      }
      else{
          twoMover->next = mover;
          twoMover = twoMover->next;
          twoMover->next = nullptr;
      }

      mover = mover->next;
  }

  return zeroList;
}

int main(){
    ListNode* head = new ListNode(1);
    ListNode* temp = head;
    temp->next = new ListNode(0);
    temp = temp->next;
    temp->next = new ListNode(2);
    temp = temp->next;
    temp->next = new ListNode(1);
    temp = temp->next;
    temp->next = new ListNode(0);
    temp = temp->next;
    temp->next = new ListNode(2);
    temp = temp->next;
    temp->next = new ListNode(1);
    temp = temp->next;

    head = sortList(head);

    while(head){
        cout<<head->data<<" ";
        head = head->next;
    }
    return 0;
}