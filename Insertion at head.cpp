// Aakash Choudhari
// 24070123031
// E&TC-A2


#include <iostream>

using namespace std;

// Node class for a singly linked list
class Node {
public:
    int data;
    Node* next;

    // Constructor to initialize a node with data
    Node(int num) {
        data = num;
        next = nullptr;
    }
};

// Function to insert a new node at the head of the list
void insertAtHead(Node*& head, int data) {
    Node* newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

// Function to display the linked list
void displayList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "nullptr" << endl;
}

// Function to free all memory allocated for the list
void deleteList(Node*& head) {
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
    head = nullptr;
}

int main() {
    Node* head = nullptr;

    insertAtHead(head, 30);
    displayList(head);

    insertAtHead(head, 32);
    displayList(head);

    insertAtHead(head, 35);
    displayList(head);

    // Clean up memory to prevent leaks
    deleteList(head);

    return 0;
}
