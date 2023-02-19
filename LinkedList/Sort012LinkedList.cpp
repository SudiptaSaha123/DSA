// Problem Link : https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1

class Solution
{
    public:
    //Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        Node* temp = head;
        
        int zeroCount = 0;
        int oneCount = 0;
        int twoCount = 0;
        while(temp != NULL){
           if(temp -> data == 0){
               zeroCount++;
           }
           else if(temp -> data == 1){
               oneCount++;
           }
           else if(temp -> data == 2){
               twoCount++;
           }
           temp = temp -> next;
        }
        
        temp = head;
        
        while(temp != NULL){
            if(zeroCount != 0){
                temp -> data = 0;
                zeroCount--;
            }
            
            else if(oneCount != 0){
                temp -> data = 1;
                oneCount--;
            }
            
            else if(twoCount != 0){
                temp -> data = 2;
                twoCount--;
            }
            
            temp = temp -> next;
        }
        
        return head;
    }
};