#include "Ejercicio03.h"
#include <unordered_map>

Node<int>* Ejercicio03::copyList(Node<int>* head) {
    if (!head) {
        return nullptr;
    }

    std::unordered_map<Node<int>*, Node<int>*> nodeMap;

    Node<int>* original = head;
    while (original) {
        nodeMap[original] = new Node<int>{ original->value, nullptr, nullptr };
        original = original->next;
    }

    original = head;
    while (original) {
        nodeMap[original]->next = nodeMap[original->next];
        nodeMap[original]->random = nodeMap[original->random];
        original = original->next;
    }

    return nodeMap[head];
}
