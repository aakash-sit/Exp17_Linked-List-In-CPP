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
        next = nullptr; // Use nullptr for modern C++
    }
};

int main() {
    // Create a new Node object on the heap.
    Node* n = new Node(20);

    // Print the value of the node and the address it points to.
    cout << "Node value: " << n->val << endl;
    cout << "Next pointer: " << n->next << endl;

    // It's good practice to free dynamically allocated memory.
    delete n; 
    n = nullptr;

    return 0;
}
