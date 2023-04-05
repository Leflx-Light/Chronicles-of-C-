#include<bits/stdc++.h>
using namespace std;


class Node{
    public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        next = NULL;
    }
};


void print(Node *head){
    Node *temp = head;

    while(temp != NULL){
        cout << temp->data << " ";
        temp = temp->next;
    }
}


int main()
{
    //dynamically allocation
    Node *n1 = new Node(10);
    Node *head = n1;
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    n1->next = n2;
    n2->next = n3;
    //printing LinkedList:
    print(head);
    return 0;
}