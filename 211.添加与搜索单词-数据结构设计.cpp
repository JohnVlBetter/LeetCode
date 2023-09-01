/*
 * @lc app=leetcode.cn id=211 lang=cpp
 *
 * [211] 添加与搜索单词 - 数据结构设计
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
class WordDictionary {
public:
    Node* head;
    WordDictionary() {
        head = new Node();
    }
    
    void addWord(string word) {
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
        return search(word,0,head);
    }

    bool search(const string& word, int idx, Node* tmp) {
        if (idx == word.size()) {
            return tmp->isword;    
        }
        if(word[idx] == '.'){
            for(int i = 0;i<26;++i){
                Node* cur = tmp->next[i];
                if(cur != nullptr){
                    bool res = search(word,idx+1,cur);
                    if(res) return true;
                }
            }
            return false;
        }
        else if(word[idx] >= 'a' && word[idx] <= 'z'){
            Node* next = tmp->next[word[idx] - 'a'];
            if(next != nullptr){
                return search(word,idx +1,next);
            }
        }
        return false;
    }
};


/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */
// @lc code=end

