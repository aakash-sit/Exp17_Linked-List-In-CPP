// Aakash Choudhari
// 24070123031
// E&TC-A2


#include <iostream>

using namespace std;

// Define a class for a Node in a linked list.
class Node {
public:
    int val;
    Node* next;

    // Constructor to initialize a new node with data.
    Node(int data) {
        val = data;
        next = nullptr;
    }
};

// Function to print the linked list
void printLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Function to free dynamically allocated memory
void deleteLinkedList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        Node* nextNode = temp->next;
        delete temp;
        temp = nextNode;
    }
}

int main() {
    // Create 3 nodes
    Node* n1 = new Node(11);
    Node* n2 = new Node(4);
    Node* n3 = new Node(6);

    // Link the nodes together
    n1->next = n2; 
    n2->next = n3; 

    // Print the linked list
    cout << "Linked list: ";
    printLinkedList(n1);

    // Free the dynamically allocated memory
    deleteLinkedList(n1);

    return 0;
}
