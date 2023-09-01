/*
 * @lc app=leetcode.cn id=208 lang=cpp
 *
 * [208] 实现 Trie (前缀树)
 */

// @lc code=start
class Node {
public:
    Node* next[26];
    bool isword;
    Node(){
        memset(next,0,sizeof(next));
        isword=false;
    }
    ~Node(){
        for(int i=0;i<26;i++)if(next[i])delete next[i];
    }
};

class Trie {
public:
    Node* head;
    Trie() {
        head = new Node();
    }
    
    void insert(string word) {
        Node* tmp = head;
        for(int i = 0;i<word.size();++i){
            int idx = word[i] - 'a';
            if(!tmp->next[idx]){
                tmp->next[idx] = new Node();
            }
            tmp = tmp->next[idx];
        }
        tmp->isword = true;
    }
    
    bool search(string word) {
        Node* tmp = head;
        for(int i = 0;i<word.size();++i){
            int idx = word[i] - 'a';
            if(!tmp->next[idx]){
                return false;
            }
            tmp = tmp->next[idx];
        }
        return tmp->isword;
    }
    
    bool startsWith(string prefix) {
        Node* tmp = head;
        for(int i = 0;i<prefix.size();++i){
            int idx = prefix[i] - 'a';
            if(!tmp->next[idx]){
                return false;
            }
            tmp = tmp->next[idx];
        }
        return true;
    }
};


/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */
// @lc code=end

