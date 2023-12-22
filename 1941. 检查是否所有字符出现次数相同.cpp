/*
 * @lc app=leetcode.cn id=1941 lang=rust
 *
 * [1941] 检查是否所有字符出现次数相同
 */

// @lc code=start
impl Solution {
    pub fn are_occurrences_equal(s: String) -> bool {
       let mut last:[i32;128]=[-1;128];
       for c in s.chars(){
        last[c as usize]+=1;
       }

    let mut has_set=std::collections::HashSet::new();
    ('a'..='z').for_each(|c|{
      if last[c as usize]!=-1{
      has_set.insert(last[c as usize]);
      }  
    }
    );
    has_set.len()==1    
    }
}
// @lc code=end