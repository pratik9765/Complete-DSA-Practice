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


Node* reverse(Node * &head){
    Node* prev = NULL;
    Node* curr = head;
    Node* forward = curr->next;

    while(curr != NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}


Node* solve(Node* &head1, Node* &head2){
    // step 1: reverse both LL
    head1 = reverse(head1);
    head2 = reverse(head2);

    // step 2: add both LL
    Node* ansHead = NULL;
    Node* ansTail = NULL;
    int carry = 0;

    while(head1 != NULL && head2 != NULL){
        // calculate sum
        int sum = carry + head1->data + head2->data;
        int digit = sum % 10;
        carry = sum /10;

        // create new node for digit
        Node* newNode = new Node(digit);

        // attach node to ans
        if(ansHead == NULL){
            // first node insert
            ansHead = newNode;
            ansTail = newNode;
        }
        else{
            ansTail->next = newNode;
            ansTail = newNode;
        }

        head1 = head1->next;
        head2 = head2->next;
    }

    // when head1 LL is big in length
    while(head1 != NULL){
        int sum = carry + head1->data;
        int digit = sum % 10;
        carry = sum / 10;

        Node* newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
        head1 = head1->next;
    }

    // when head2 LL is big in length
    while(head2 != NULL){
        int sum = carry + head2->data;
        int digit = sum % 10;
        carry = sum / 10;

        Node* newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
        head2 = head2->next;
    }

    // handel carry alag se
    while(carry != 0){
        int sum = carry;
        int digit = sum % 10;
        carry = sum / 10;

        Node* newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
    }


    // step 3: reverse the ans LL
    ansHead = reverse(ansHead);
    return ansHead;
}


int main(){

    Node* head1 = new Node(9);
    Node* second1 = new Node(9);
    head1->next = second1;


    Node* head2 = new Node(9);
    Node* second2 = new Node(9);
    // Node* third2 = new Node(4);
    head2->next = second2;
    // second2->next = third2;
    
    print(head1);
    print(head2);
    
    Node* ans = solve(head1,head2);

    print(ans);

    return 0;
}