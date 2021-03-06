//
// Created by laomd on 2018/12/17.
//

#ifndef BOGGLE_TRIE_H
#define BOGGLE_TRIE_H

#include <string>
#include <map>
#include <queue>
#include <iostream>
using namespace std;

class TrieNode {
    map<char, pair<bool, TrieNode*>> _children;
public:

    pair<bool, TrieNode*> get_child(char c);
    string keys() const;
    vector<TrieNode*> children() const;

    bool insert(string::const_iterator first, string::const_iterator last);
};

void bfs(TrieNode* root);
ostream& operator<<(ostream&, const TrieNode&);

#endif //BOGGLE_TRIE_H
