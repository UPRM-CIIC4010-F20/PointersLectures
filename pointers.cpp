#include <iostream>
#include <string>

using namespace std;

class Node {
    public:
    string* label;
    Node* next;
    Node(string* label, Node* next): label(label), next(next) { }
    ~Node();
};

Node::~Node() {
    delete this->label;
}

static Node node(new string("Global Node"), nullptr);
static Node* nodePtr = new Node(new string("Global Node #2"),nullptr);
static Node* nodePtr2 = nodePtr;

static void f() {
    int bar = 0;
    delete nodePtr;
    nodePtr = new Node(new string("f() Node"),nullptr);
}

int main() {
    int foo = 0;
    delete nodePtr;
    delete nodePtr2;
    nodePtr = nullptr;
    nodePtr2 = nullptr;

    cout << nodePtr2->label << endl;
    // while (true) {
    //     f();
    // }
}
