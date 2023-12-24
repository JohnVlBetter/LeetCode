/*
 * @lc app=leetcode.cn id=LCP 77 lang=rust
 *
 * [LCP 77] 符文储备
 */

// @lc code=start
impl Solution {
    pub fn rune_reserve(mut runes: Vec<i32>) -> i32 {
        runes.sort_unstable();
        if runes.len() == 1 {
            return 1
        }
        let mut maxVal = 0;
        let mut idx = 0;
        for i in 1..runes.len() {
            if runes[i] - runes[i-1]  <= 1 {
                maxVal = maxVal.max(i as i32 - idx + 1)
            }else{
                idx = i as i32
            }
        }
        maxVal as i32
    }
}
// @lc code=end

