#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this -> data = data;
        this -> next = NULL;
    }
    //Destructor
    ~Node() {
        int value = this -> data;
        //memory free
        if(this->next != NULL) {
            delete next;
            this->next = NULL;
        }
    }
};

void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);

    temp -> next = head;

    head = temp;
}

void insertAtTail(Node* &tail, int d){
    Node* temp = new Node(d);

    tail -> next = temp;

    tail = temp;
}

void insertAtPosition(Node* &head, Node* &tail, int position, int data){
    if(position == 1){
        insertAtHead(head, data);
        return;
    }

    Node* temp = head;
    int count = 1;

    while(count<position-1){
        temp = temp -> next;
        count++;
    }

    if(temp -> next == NULL){
        insertAtTail(tail, data);
        return;
    }

    Node* nodeToInsert = new Node(data); 

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;
}

void deleteNode(int position, Node*& head){
    if(position == 1){
        Node* temp = head;
        head = head -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        Node* prev = NULL;
        Node* curr = head;
        int count = 1;
        while(count < position){
            prev = curr;
            curr = curr ->next;
            count++;
        }

        prev -> next = curr ->next;
        curr -> next = NULL;
        delete curr;
    }
}
void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp -> data<< " ";
        temp = temp -> next;
    }
    cout<<endl;
}
int main(){

    Node* node1 = new Node(20);
    // cout<<node1 -> data<<endl;
    // cout<<node1 -> next<<endl;

    Node* head = node1;
    Node* tail = node1;

    // print(head);

    // insertAtHead(head, 14);

    // print(head);

    // insertAtHead(head, 30);

    // print(head);

    insertAtTail(tail,30);
    insertAtTail(tail,40);
    insertAtTail(tail,50);

    print(head);

    insertAtPosition(head, tail, 3, 15);  
    print(head);

    insertAtPosition(head, tail, 6, 95);  
    print(head);

    insertAtPosition(head, tail, 1, 95);  
    print(head);

    deleteNode(4,head);
    print(head);
    return 0;
}