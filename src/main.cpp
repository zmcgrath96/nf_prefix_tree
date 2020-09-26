#include "TreeNode.hpp"

#include <iostream>

int main() {
    TreeNode * tn = new TreeNode('A', "key1");

    std::cout << "Value of tree node" << tn->getValue();
    std::cout << "\nKeys: ";
    for (std::string k: tn->getKeys()) std::cout << k;
    std::cout << "\n";
}