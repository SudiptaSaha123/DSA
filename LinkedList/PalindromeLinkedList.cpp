// 234. Palindrome Linked List

// Problem Link : https://leetcode.com/problems/palindrome-linked-list/

class Solution {
public:
    ListNode* getMid(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head -> next;


        while(fast != NULL && fast -> next != NULL ){
            fast = fast -> next -> next;
            slow = slow -> next;
        }

        return slow;
    }

    ListNode* reverseList(ListNode* head){
        ListNode* prev = NULL;
        ListNode* curr = head;
        ListNode* next = NULL;

        while(curr != NULL){
            next = curr -> next;
            curr -> next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    bool isPalindrome(ListNode* head) {
        if(head -> next == NULL){
            return true;
        }

        ListNode* mid = getMid(head);
        ListNode* temp = mid -> next;

        mid -> next = reverseList(temp);

        ListNode* head1 = head;
        ListNode* head2 = mid -> next;

        while(head2 != NULL){
            if(head1 -> val != head2 -> val){
                return 0;
            }

            head1 = head1 -> next;
            head2 = head2 -> next;
        }
        temp = mid -> next;
        mid -> next = reverseList(temp);

        return 1;
    }
};