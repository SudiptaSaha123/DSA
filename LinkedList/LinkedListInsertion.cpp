// Linked List Insertion

// Problem Link : https://practice.geeksforgeeks.org/problems/linked-list-insertion-1587115620/0

class Solution{
  public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
        Node* curr = new Node(x);
        curr -> next = head;
        head = curr;
        return head;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
        if(head == NULL){
            Node* curr = new Node(x);
            head = curr;
            return head;
        }
        
        Node* curr = head;
        while(curr -> next != NULL){
            curr = curr -> next;
        }
        
        curr -> next = new Node(x);
        return head;
    }
};