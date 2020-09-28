# No Frills Prefix Tree (nf_prefix_tree)
This is a prefix tree with no frills. Supports simple insert, search, and basic querying of strings that a (can be) keyed. Written in C++ 11 and has python wrappers. Written because I couldn't find a fast, easy to install and use basic prefix tree in python. 

## Usage
### C++ 
```c++
#include "PrefixTree.hpp"

int main() {

    PrefixTree * t = new PrefixTree();

    t->addSequence("ABCDEFG", "Key1");
    t->addSequence("ABCDEFG", "Key2");
    t->addSequence("ABCXYZ", "Key3");
    t->addSequence("LMNOP", "Key4");

    t->show();
    
    t->show(2);
}
```
Output:
```bash
root
|-> Sequence: A	 keys: Key1, Key2, Key3, 
 |-> Sequence: AB	 keys: Key1, Key2, Key3, 
  |-> Sequence: ABC	 keys: Key1, Key2, Key3, 
   |-> Sequence: ABCD	 keys: Key1, Key2, 
    |-> Sequence: ABCDE	 keys: Key1, Key2, 
     |-> Sequence: ABCDEF	 keys: Key1, Key2, 
      |-> Sequence: ABCDEFG	 keys: Key1, Key2, 
   |-> Sequence: ABCX	 keys: Key3, 
    |-> Sequence: ABCXY	 keys: Key3, 
     |-> Sequence: ABCXYZ	 keys: Key3, 
|-> Sequence: L	 keys: Key4, 
 |-> Sequence: LM	 keys: Key4, 
  |-> Sequence: LMN	 keys: Key4, 
   |-> Sequence: LMNO	 keys: Key4, 
    |-> Sequence: LMNOP	 keys: Key4, 
root
|-> Sequence: A	 keys: Key1, Key2, Key3, 
 |-> Sequence: AB	 keys: Key1, Key2, Key3, 
|-> Sequence: L	 keys: Key4, 
 |-> Sequence: LM	 keys: Key4, 
```

### Python 
```python

```