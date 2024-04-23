#include<iostream>
using namespace std;

class Node{
    public:
        int data;
        Node* next;
};

int main(){

    Node* HEAD = new Node();  //new pointer of node

    HEAD->data = 5;
    HEAD->next = NULL;

    Node* n2 = new Node();  //new pointer of node 2

    n2->data = 25;
    n2->next = NULL;
    HEAD->next = n2;  //linking the node one(head pointer) and node 2


    Node* n3 = new Node();  //new pointer of node 3

    n3->data = 70;
    n3->next = NULL;
    n2->next = n3;  //linking the node two and node 3

}