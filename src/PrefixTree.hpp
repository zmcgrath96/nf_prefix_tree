#ifndef PREFIXTREE_H
#define PREFIXTREE_H

#include "TreeNode.hpp"

class PrefixTree{
public:
    /*  Define outward facing functions  */
    PrefixTree();
    ~PrefixTree();

    /**
     * Add a sequence with a key to the tree
     * 
     * @param   sequence    std::string the sequence to add
     * @param   key         std::string the key for the sequence
    */
    void addSequence(std::string sequence, std::string key);

    /**
     * Check if a string exists in the prefix tree
     * 
     * @param   sequence    std::string the sequence to search for
     * 
     * @return bool         true if the sequence is found, false otherwise
    */
    bool hasPrefix(std::string sequence);

    /**
     * Get all keys associated with a prefix
     * 
     * @param   sequence    std::string the sequence to search for
     * 
     * @return std::vector  a vector containing all keys associated with a sequence. An
     *          empty vector is returned if the sequence can't be found
    */
    std::vector<std::string> getKeysWithPrefix(std::string sequence);

private:
    /*  Define Tree properties  */
    TreeNode * root;

};

#endif