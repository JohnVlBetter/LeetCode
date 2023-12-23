/*
 * @lc app=leetcode.cn id=1828 lang=rust
 *
 * [1309] 解码字母到整数映射
 */

// @lc code=start
impl Solution {
    pub fn freq_alphabets(s: String) -> String {
        let mut res = String::new();
        let mut i = 0;
        while i < s.len(){
            if i + 2 < s.len() && &s[i+2..i+3] == "#"{
                let r = &s[i..i+2].parse::<u8>().unwrap();
                let c = (r - 10 + 'j' as u8 ) as char;
                res.push(c);
                i += 3;
            }else{
                let r = &s[i..i+1].parse::<u8>().unwrap();
                let c = (r - 1 + 'a' as u8 ) as char;
                res.push(c);
                i += 1;
            }
        }
        res
    }
}
// @lc code=end

