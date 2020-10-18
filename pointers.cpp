#include <iostream>
#include <string>

using namespace std;

class Node {
    public:
    string label;
    Node* next;
    Node(string label, Node* next): label(label), next(next) { }
};

static Node node("Global Node", nullptr);
static Node* nodePtr = &node;

static int f() {
    nodePtr = new Node("f() Node",nullptr);
    // nodePtr->label = new string("Local Node");

    return 0;
}

int main() {
    //  while (true) {
        f();
    //  } 
}
