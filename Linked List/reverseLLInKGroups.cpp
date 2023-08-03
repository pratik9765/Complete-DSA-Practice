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

int getLength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp!=NULL){
        temp = temp->next; 
        len++;
    }

    return len;
}

Node* reverseKNodes(Node* &head,int k){
    if(head == NULL){
        cout<<"LL is empty"<<endl;
        return NULL;
    }

    int len = getLength(head);
    if(k > len ){
        // cout << "Invalid K value" << endl;
        return head;         
    }


    // for no of Nodes in LL is greater than k
    // step 1: rverse k nodes
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = head->next;

    int count = 0;
    while (count < k) {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }

    // step 2:
    if(forward != NULL){
        // we have some node for reverse
        head->next = reverseKNodes(forward,k);
    }

    // step 3:
    // return head of the modified LL
    return prev;


}

int main(){

    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* forth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth; 
    fifth->next = sixth;

    print(head);
    cout<<endl;
    cout << "Reverse K nodes" << endl ;
    head = reverseKNodes(head,5);
    print(head);

   

    return 0;
}