
#include <iostream>
using namespace std;

class Node
{

public:
    int data;
    Node *next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
    }
};

class LinkedList
{

public:
    int count;
    Node *head;

    LinkedList()
    {
        this->head = nullptr;
        count = 0;
    }

    void createLinkedList(){
        int data;
        for (int i = 0; i < 5; i++){
            cout << "Enter node value : ";
            cin >> data;
            addAtEnding(data);
        }
    }

    void displayAllElements(){
        cout << endl << "Linked List : "; 
        Node *ptr = this->head;
        
        while(ptr != nullptr){
            cout << ptr->data << " ";
            ptr = ptr->next;
        }

        cout << endl;
    }

    void removeValue(int value){

        if(this->head == nullptr || this->count == 0){
            cout << endl << "List is already emty!";
            return;
        }

        bool isFound = false;
        Node *currentPtr = this->head;
        Node *previousPtr = this->head;
        int fountAt;

        for(int i = 0; i <= this->count; i++){
            if(currentPtr->data == value){
                isFound = true;
                fountAt = i;
                break;
            }
            currentPtr = currentPtr->next;
        }

        if(isFound){
            for(int i = 0; i < fountAt - 1; i++){
                previousPtr = previousPtr->next; 
            }
            previousPtr->next = currentPtr->next;
            delete currentPtr;
            currentPtr = nullptr; 
            cout << endl << value << "Removed from Linked list...";
        } else {
            cout << "Node with value 33 not found!";
        }
            displayAllElements();

    }

    void addAtEnding(int value){

        if(this->head == nullptr || this->count == 0){
            Node *ptr = new Node(value);
            this->count++;
            this->head = ptr;
            return;
        }

        Node *endPointer = this->head;

        while(endPointer->next != nullptr){
            endPointer = endPointer->next;
        }

        Node *ptr = new Node(value);
        this->count++;
        endPointer->next = ptr;

    }

    void addAtBeginning(int value){
        Node *newNode = new Node(value);
        newNode->next = this->head;
        this->head = newNode;
        this->count++;
    }
};

int main()
{

    LinkedList list;
    int choice;
    int value;
    do
    {

        cout << endl
             << "Enter 1. for Add 5 nodes to the linked list with integer values such as 11, 22, 33, 44, and 55.";
        cout << endl
             << "Enter 2. for Display the linked list elements.";
        cout << endl
             << "Enter 3. for Remove the node with value 33.";
        cout << endl
             << "Enter 4. for Add a new node with value 6 at the beginning of the linked list.";
        cout << endl
             << "Enter 5. for exit";
        cout << endl << "Enter choice : ";
        cin >> choice;

        cout << endl;
 
        switch (choice)
        {
        case 1:
            list.createLinkedList();
            cout << endl << "Linked List created..." << endl;
            list.displayAllElements();
            break;
        case 2:
            list.displayAllElements();
            break;
        case 3:
            cout << endl << "Enter value to remove : ";
            cin >> value;
            list.removeValue(value);
            break;
        case 4:
            cout << endl << "Enter value to add : ";
            cin >> value;
            list.addAtBeginning(value);
            cout << endl << value << "Added at beginning of Linked list..." << endl;
            list.displayAllElements();
            break;
        case 5:
            cout << endl << "Exited!" << endl;
            break;

        default:
            cout << endl
                 << "Invalid option!" << endl;
            break;
        }

    } while (choice != 5);
}

