#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* newNode(int data) {
    Node* newNode = new Node();
    if (!newNode) {
        cout << "Heap Overflow";
        exit(0);
    }
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

Node* addTwoLists(Node* first, Node* second) {
    Node* res = NULL;
    Node *temp, *prev = NULL;
    int carry = 0, sum;

    while (first != NULL || second != NULL) {
        sum = carry + (first? first->data: 0) + (second? second->data: 0);
        carry = (sum >= 10)? 1 : 0;
        sum = sum % 10;
        temp = newNode(sum);
        if (res == NULL) {
            res = temp;
        } else {
            prev->next = temp;
        }
        prev = temp;
        if (first) first = first->next;
        if (second) second = second->next;
    }
    if (carry > 0) temp->next = newNode(carry);
    return res;
}

void printList(Node* node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

int main() {
    Node* first = NULL;
    Node* second = NULL;
    Node* res = NULL;

    // Tạo danh sách liên kết đầu tiên
    first = newNode(7);
    first->next = newNode(5);
    first->next->next = newNode(9);
    first->next->next->next = newNode(4);
    first->next->next->next->next = newNode(6);
    cout << "Số đầu tiên là ";
    printList(first);

    // Tạo danh sách liên kết thứ hai
    second = newNode(8);
    second->next = newNode(4);
    cout << "Số thứ hai là ";
    printList(second);

    // Tính tổng hai số và in ra
    res = addTwoLists(first, second);
    cout << "Tổng là ";
    printList(res);

    return 0;
}



