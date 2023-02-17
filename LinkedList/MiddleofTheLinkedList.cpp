// 876. Middle of the Linked List

// Problem Link : https://leetcode.com/problems/middle-of-the-linked-list/description/

class Solution {
public:
int getLen(ListNode* &head){
    ListNode* curr = head;
    int len = 0;
    while(curr != NULL){
        len++;
        curr = curr -> next;
    }
    return len;
}
    ListNode* middleNode(ListNode* head) {
       int len = getLen(head);
       int index = len/2;

       int count = 0;
       ListNode* temp = head;
       while(count < index){
           temp = temp -> next;
           count++;
       }
       return temp;
    }
};