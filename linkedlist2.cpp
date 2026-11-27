#include<iostream>
using namespace std;
struct Node {
    int data;
    Node* next;
};
int main() {
    Node *head = NULL, *newNode, *temp;
    int n, value, pos;
    cout <<"Enter number of nodes: ";
    cin>>n;
    for(int i=0; i<n; i++) {
        newNode = new Node;
        cout<<"Enter data: ";
        cin>>value;
        newNode->data = value;
        newNode->next = NULL;
        if(head == NULL) {
            head = newNode;
        }
        else {
            temp = head;
            while(temp->next != NULL){
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }
    cout << "Enter position after which to insert: ";
    cin>>pos;
    temp = head;
    for(int i =1; i<pos && temp != NULL; i++){
        temp = temp->next;
    }
    if(temp == NULL){
        cout<<"Invalid position";
    }
    else{
        newNode = new Node;
        cout<<"Enter data to insert: ";
        cin>>value;
        newNode->data = value;
        newNode->next = temp->next;
        temp->next = newNode;

    }
    cout<<"\nUpdated Linked List: ";
    temp = head;
    while(temp != NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL";
    return 0;
}