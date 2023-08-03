#include <iostream>
using namespace std; 

class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data = 0;
        this->next=NULL;
    }

    Node(int data){
        this->data = data;
        this->next= NULL;
    }
};


void print(Node* &head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp -> next ;
    }
}

Node* getMiddleNode(Node* &head){
    if(head == NULL){
        cout<<"LL is empty"<<endl;
        return head;
    }
    if(head->next == NULL){
        // "Only one node in LL
        return head;
    }

    // LL is having node more than 1
    Node* slow = head;
    Node* fast = head->next;
    while(slow != NULL && fast != NULL){
        fast = fast->next;
        if (fast!=NULL){
            fast = fast->next;
            slow = slow->next;
        }
    }

    return slow;
}

int main(){

    // Node* head = new Node(10);
    // Node* second = new Node(20);
    // Node* third = new Node(30);
    // Node* forth = new Node(40);
    // Node* fifth = new Node(50);
    // Node* sixth = new Node(60);

    // head->next = second;
    // second->next = third;
    // third->next = forth;
    // forth->next = fifth; 
    // fifth->next = sixth;

    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* forth = new Node(40);
    Node* fifth = new Node(50);

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth; 

    print(head);
    cout<<endl;

    cout<<"Middle node is : "<<getMiddleNode(head)->data<<endl;


    return 0;
}