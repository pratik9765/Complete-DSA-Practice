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
        this->next=NULL;
    }

    ~Node(){
        cout<<"Node with value "<<this->data<<" deleted successfully."<<endl;
    }

};


void print(Node* head){
    Node* temp = head;
    while (temp!= NULL) {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
}

int findLength(Node* &head){
    int len = 0;
    Node* temp = head;
    while(temp!=NULL){
        temp = temp->next; 
        len++;
    }

    return len;
}

void insertAtHead(Node* &head,Node* &tail,int data){
    // check if LL is empty
    if(head==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    // step 1: create a new node
    Node* newNode = new Node(data);

    // step 2: connect new node with head
    newNode->next = head;

    // step 3: update head
    head = newNode;
}

void insertAtTail(Node* &head,Node* &tail,int data){
    // check if LL is empty
    if(head==NULL){
        Node* newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }

    // step 1: create a node
    Node* newNode = new Node(data);

    // step 2: connect with tail node
    tail->next = newNode;

    // step 3: update tail
    tail = newNode;
}

void insertAtPosition(int data, int position, Node* &head, Node* &tail){
    if(head == NULL){
        Node* newNode = new Node(data);
        head = newNode; 
        tail = newNode;
        return;
    }

    // if position is 0
    if(position==0){
        insertAtHead(head,tail,data);
        return;
    }

    // if position is last
    int len = findLength(head);
    if(position >= len){
        insertAtTail(head,tail,data);
        return;
    }

    // step 1: find position i.e prev & curr
    int i=1;
    Node* prev = head;
    while(i<position){
        prev = prev->next;
        i++;
    }
    Node* curr = prev->next;

    // step 2: create new node
    Node* newNode = new Node(data);

    // step 3: connect newNoe with curr
    newNode->next = curr;

    // step 4: connect prev with newNode
    prev->next = newNode;
}

void deleteNode(int position, Node* &head, Node* &tail){
    int len = findLength(head);
    if(head == NULL){
        cout<<"Cannot delete, LL is empty! "<<endl;
        return;
    }

    if(position ==0 || position >len){
        cout<<"Not possible deletion of node at position :"<<position<<endl;
        return;
    }

    // deleting first node
    if(position ==1){
        Node* temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    

     // deleting last node
    if(position == len){
        // find prev
        int i=1;
        Node* prev = head;
        while(i<position-1){
            prev = prev->next;
            i++;
        }
        // step 2:
        prev->next = NULL;

        // step 3:
        Node* temp = tail;

        // step 4:
        tail = prev;

        // step 5:
        delete temp; 

        return;
    }

    // deleting middle node
    // step 1: find prev,curr
    int i=1;
    Node* prev = head;
    while(i<position-1){
        prev= prev->next;
        i++;
    }
    Node * curr = prev->next;

    // step 2: 
    prev->next = curr->next;

    // step 3:
    curr->next = NULL;

    // step 4:
    delete curr;

}


Node* reverse(Node* &prev, Node* &curr){
    // base case
    if(curr == NULL){
        // LL get reversed
        return prev;
    }

    // 1 case solve then recursive call
    Node* forward = curr->next;
    curr->next = prev;

    // recursive call
    reverse(curr, forward);

}


int main(){

    Node* head = NULL;
    Node* tail = NULL;
    insertAtHead(head,tail,20);
    insertAtHead(head,tail,50);
    insertAtHead(head,tail,60);
    insertAtHead(head,tail,90);
    insertAtTail(head,tail,77);
    print(head);

    cout<<endl;

    Node* prev = NULL;
    Node* curr = head;
    head = reverse(prev,curr);
    print(head);

    return 0;
}