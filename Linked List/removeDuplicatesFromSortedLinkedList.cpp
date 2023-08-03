#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    

    Node(int data){
        this->data = data;
        this->next= NULL;
    }

//     ~Node(){
//         cout<<"Node deleted"<<endl;
//     }
};


void print(Node* &head){
    Node* temp = head;
    while (temp!= NULL) {
        cout <<temp -> data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


void removeDuplicates(Node* &head){
    if(head == NULL){
        cout<<"LL is empty."<<endl;
        return;
    }

    if(head->next == NULL){
        return;
    }

    // Nodes in LL is greater than one
    Node* curr = head;
    while(curr != NULL){
        if((curr->next != NULL) && (curr->data == curr->next->data)){
            // equal
            curr->next = curr->next->next;

            // delete node
            Node* temp = curr->next;
            temp->next = NULL;
            // delete temp;
        }
        else{
            // not equal
            curr = curr->next;
        }
    }
}


int main(){

    Node* head = new Node(1);
    Node* second = new Node(2);
    Node* third = new Node(2);
    Node* forth = new Node(3);
    Node* fifth = new Node(4);
    Node* sixth = new Node(4);

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    fifth->next = sixth;

    print(head);

    removeDuplicates(head);
    print(head);


    return 0;
}