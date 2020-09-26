#include "TreeNode.hpp"

/*  Define outward facing functions  */
TreeNode::TreeNode(){
    this->value = '\0';
}

/**
 * Create a new TreeNode
 * 
 * @param value     char        the value to initialize the node with
 * @param key       std::string the key to initialize the node with
*/
TreeNode::TreeNode(char value, std::string key){
    this->value = value;
    this->keys.push_back(key);
}

TreeNode::~TreeNode(){}

/**
 * Add a key to the current node
 * 
 * @param key   std::string     the key to add to the current node
*/
void TreeNode::addKey(std::string key){
    this->keys.push_back(key);
}

/**
 * Add a child node with the new key and value
 * 
 * @param value char        the value to initialize the child with
 * @param key   std::string the key to initialize the child with
 * 
 * @return  TreeNode        the new child node
*/
TreeNode * TreeNode::addChild(char value, std::string key){
    TreeNode * child = new TreeNode(value, key);
    this->children.push_back(child);
    return child;
}

/**
 * Search through this node's children for the provided value
 * 
 * @param value  char    the value to search for
 * @return bool          true if found, false otherwise
*/
bool TreeNode::hasChildWithValue(char value){
    for (TreeNode * child: this->children){
        if (child->value == value) return true;
    }
    return false;
}

/**
 * Search through the node's children and return child if it has a value
 * 
 * @param value   char    the value to search for
 * @return TreeNode       The child with the value if it has one, empty node otherwise
*/
TreeNode * TreeNode::getChildWithValue(char value){    
    for (TreeNode * child: this->children){
        if (child->value == value) return child;
    }

    return new TreeNode();
}

/**
 * Get the keys of this node
 * 
 * @return std::vector     vector of the keys
*/
std::vector<std::string> TreeNode::getKeys(){
    return this->keys;
}

/**
 * Get the value of the current node
 * 
 * @return char     the value of the current node
*/
char TreeNode::getValue(){
    return this->value;
}