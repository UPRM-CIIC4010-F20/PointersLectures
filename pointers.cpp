#include <iostream>
#include <string>

using namespace std;

class Node {
    public:
    string label;
    Node* next;
    Node(string label, Node* next): label(label), next(next) { }
    Node(): label(""), next(nullptr) { }
};

static Node node;
static Node* nodePtr = nullptr;

static int f() {
    nodePtr = new Node();
    nodePtr->label = "f() Node";
    return 0;
}

int main() {
    // while (true) {
        node.label = "Global Node";
        node.next = nullptr;
        nodePtr = &node;
        f();
        cout << "node.label = " << node.label << endl;
        cout << "&node = " << &node << endl;
        cout << "nodePtr = " << nodePtr << endl;
        cout << "nodePtr->label = " << nodePtr->label << endl;
    // }
    
}
