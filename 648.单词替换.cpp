/*
 * @lc app=leetcode.cn id=648 lang=cpp
 *
 * [648] 单词替换
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
class Solution {
public:
    Node* head;

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

    string getRoot(string s) {
        Node* tmp = head;
        string res = "";
        for(int i = 0;i<s.size();++i){
            int idx = s[i] - 'a';
            res += s[i];
            if(!tmp->next[idx]){
                return s;
            }
            if(tmp->next[idx]->isword) return res;
            tmp = tmp->next[idx];
        }
        return res;
    }

    vector<string> split(string &str, char ch) {
        int pos = 0;
        int start = 0;
        vector<string> ret;
        while (pos < str.size()) {
            while (pos < str.size() && str[pos] == ch) {
                pos++;
            }
            start = pos;
            while (pos < str.size() && str[pos] != ch) {
                pos++;
            }
            if (start < str.size()) {
                ret.emplace_back(str.substr(start, pos - start));
            }
        }
        return ret;
    }

    string replaceWords(vector<string>& dictionary, string sentence) {
        head = new Node();
        for(const auto& s : dictionary){
            insert(s);
        }
        vector<string> splitRes = split(sentence,' ');
        string result;
        int n = splitRes.size();
        for(int i = 0;i < n; ++i){
            string s = splitRes[i];
            result.append(getRoot(s));
            if(i != n - 1) result.append(" ");
        }
        return result;
    }
};
// @lc code=end

