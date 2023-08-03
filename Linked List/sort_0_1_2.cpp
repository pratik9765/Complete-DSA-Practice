#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data = data;
        this->next=NULL;
    }
};


void print(Node* &head){
    Node* temp = head;
    while (temp!= NULL) {
        cout <<temp -> data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


void sortZeroOneTwoMethod1(Node* &head){
    // step 1: find count of 1,2,0
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;

    Node* temp = head;

    while(temp != NULL){
        if(temp->data == 0){
            ++zeroCount ;
        }
        else if(temp->data == 1){
            ++oneCount;
        }
        else{
            ++twoCount;
        }

        temp = temp->next;
    }

    // step 2: fill 0,1,2
    temp = head;
    while(temp != NULL){
        // fill zeros
        while(zeroCount--){
            temp->data = 0;
            temp= temp -> next;
        }
        while(oneCount--){
            temp->data = 1;
            temp= temp -> next;
        }
        while(twoCount--){
            temp->data = 2;
            temp= temp -> next;
        }
    }
}







int main(){

    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(2);
    Node* forth = new Node(0);
    Node* fifth = new Node(0);
    Node* sixth = new Node(0);

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    fifth->next = sixth;

    print(head);
    
    sortZeroOneTwoMethod1(head);
    print(head);
    return 0;
}