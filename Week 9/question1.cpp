#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include <iomanip>
#include <vector>
using namespace std;

class Node {
    private:
    int val;
    Node *next = nullptr;
    Node *prev = nullptr;

    public:
    Node(int val=0): val(val) {

    }

    void setLinks(Node *next, Node *prev) {
        this->next = next;
        this->prev = prev;
    }
};

int main() {
    cout << "Testing linked lists \n";
    
    Node node1(5), node2(8), node3(8), node4(4);
    Node *head = &node1;
    node1.setLinks(&node2, nullptr);
    node2.setLinks(&node3, &node1);
    node3.setLinks(&node4, &node2);
    node4.setLinks(nullptr, &node3);
    Node *tail = &node4;

    return 0;
}