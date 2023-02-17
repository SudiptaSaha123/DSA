// 876. Middle of the Linked List

// Problem Link : https://leetcode.com/problems/middle-of-the-linked-list/description/

    if(head == NULL || head -> next == NULL){
        return head;
    }

    ListNode* slow = head;
    ListNode * fast = head -> next;

    while(fast != NULL){
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }
        slow = slow -> next;
    }

    return slow;