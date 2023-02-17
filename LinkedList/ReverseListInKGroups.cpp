// Reverse List In K Groups

// Problem Link : https://www.codingninjas.com/codestudio/problems/reverse-list-in-k-groups_983644

Node* kReverse(Node* head, int k) {
    if(head == NULL){
        return NULL;
    }

    Node* prev = NULL;
    Node* curr = head;
    Node* forward = NULL;

    int count = 0;

    while(curr != NULL && count<k){
        forward = curr -> next;
        curr -> next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    if(forward != NULL){
        head -> next = kReverse(forward, k);
    }

    return prev;
}