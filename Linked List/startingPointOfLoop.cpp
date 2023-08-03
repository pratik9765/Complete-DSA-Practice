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


Node* startingPointOfLoop(Node* &head){
    if(head == NULL){
        cout<<"LL is empty"<<endl;
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next;
        }

        if( fast == slow){
            // loop present
            slow = head;
            break;
        }
    }
    
    while(slow != fast){
        slow = slow->next;
        fast = fast->next; 
    }

    return slow;

}



int main(){

    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* forth = new Node(40);
    Node* fifth = new Node(50);
    Node* sixth = new Node(60);
    Node* seventh = new Node(70);
    Node* eighth = new Node(80);
    Node* ninth = new Node(90);

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth; 
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eighth;
    eighth->next = ninth;
    ninth->next = forth;
    cout<<endl;

    cout<<"Stating point of loop is : "<<startingPointOfLoop(head)->data;
    

   

    return 0;
}