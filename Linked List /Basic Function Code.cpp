#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = NULL;
    }
};

void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

// Delete function
void deleteNode(Node* &head, int value) {
    if (head != NULL && head->data == value) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }

    Node* temp = head;

    while (temp->next != NULL && temp->next->data != value) {
        temp = temp->next;
    }

    if (temp->next != NULL) {
        Node* delNode = temp->next;
        temp->next = temp->next->next;
        delete delNode;
    }
}

// Insert middle
void insertAtPosition(Node* &head, int value, int pos) {
    Node* newNode = new Node(value);

    Node* temp = head;

    for (int i = 1; i < pos; i++) {
        temp = temp->next;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

int main() {
    Node* head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(30);

    printList(head);

    insertAtPosition(head, 25, 2);
    printList(head);

    deleteNode(head, 20);
    printList(head);

    return 0;
}
