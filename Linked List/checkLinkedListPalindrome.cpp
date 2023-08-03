#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(){
        this->data = NULL;
        this->next = NULL;
    }

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};


Node* reverse(Node* head){
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

bool checkPalindrome(Node* &head){
    if(head == NULL){
        cout<<"LL is empty."<<endl;
        return true;
    }

    if(head->next == NULL){
        return true;
    }

    // size of LL is greater than 1
    // step 1: find the middle node
    Node* slow = head;
    Node* fast = head->next;

    while(fast != NULL){
        fast = fast->next;
        if(fast != NULL){
            fast = fast->next;
            slow = slow->next; 
        }
    }
    // now slow is pointing to middle

    // step 2: reverse LL after middle node
    Node* reverseLLHead = reverse(slow->next);
    // join the reverse LL in the left part
    slow->next = reverseLLHead;

    // step 3: compare
    Node* temp1 = head;
    Node* temp2 = reverseLLHead;

    while(temp2 != NULL){
        if(temp1->data != temp2->data){
            // not a palindrome
            return false;
        }
        else{
            temp1= temp1 -> next ;
            temp2 = temp2 -> next ;
        }
    }
    return true;


}

int main(){
    Node* head = new Node(10);
    Node* second = new Node(20);
    Node* third = new Node(30);
    Node* forth = new Node(30);
    Node* fifth = new Node(20);
    Node* sixth = new Node(10);

    head->next = second;
    second->next = third;
    third->next = forth;
    forth->next = fifth;
    fifth->next = sixth;

    bool isPalindrome = checkPalindrome(head);

    if(isPalindrome){
        cout<<"LL is palindrome. "<<endl;
    }
    else{
        cout<< "LL not a Palindrome"<< endl;
    }


    return 0;
}