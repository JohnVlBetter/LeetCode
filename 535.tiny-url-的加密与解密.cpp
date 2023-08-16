/*
 * @lc app=leetcode.cn id=535 lang=cpp
 *
 * [535] TinyURL 的加密与解密
 */

// @lc code=start
class Solution {
public:
    unordered_map<int,string> map;
    int idx = 0;
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        map[++idx] = longUrl;
        return std::to_string(idx);
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        return map[std::stoi(shortUrl)];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));
// @lc code=end

