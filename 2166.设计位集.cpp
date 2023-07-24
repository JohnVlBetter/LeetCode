/*
 * @lc app=leetcode.cn id=2166 lang=cpp
 *
 * [2166] 设计位集
 */

// @lc code=start
class Bitset {
public:
    int *set;
    int size;
    int cnt;
    int reverse = 0;
    Bitset(int size) {
        this->size = size; 
        set = (int*) malloc(size * sizeof(int)); 
        memset(set,0,size * sizeof(int));
        cnt = 0;
    }

    void fix(int idx) {
        if((set[idx] ^ reverse) == 0){
            ++cnt;
            set[idx] ^= 1;
        }
    }

    void unfix(int idx) {
        if((set[idx] ^ reverse) == 1){
            --cnt;
            set[idx] ^= 1;
        }
    }

    void flip() {
        reverse ^= 1;
        cnt = size - cnt;
    }

    bool all() {
        return cnt == size;
    }

    bool one() {
        return cnt > 0;
    }

    int count() {
        return cnt;
    }

    string toString() {
        string result;
        for(int i = 0;i<size;++i){
            result.push_back('0'+set[i]^reverse);
        }
        return result;
    }
};

/**
 * Your Bitset object will be instantiated and called as such:
 * Bitset* obj = new Bitset(size);
 * obj->fix(idx);
 * obj->unfix(idx);
 * obj->flip();
 * bool param_4 = obj->all();
 * bool param_5 = obj->one();
 * int param_6 = obj->count();
 * string param_7 = obj->toString();
 */
// @lc code=end

