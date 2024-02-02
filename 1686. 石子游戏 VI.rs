/*
 * @lc app=leetcode.cn id=1686 lang=rust
 *
 * [1686] 石子游戏 VI
 */

// @lc code=start
impl Solution {
    pub fn stone_game_vi(a: Vec<i32>, b: Vec<i32>) -> i32 {
        let mut pairs = a.into_iter().zip(b).collect::<Vec<_>>();
        pairs.sort_unstable_by(|(px, py), (qx, qy)| (qx + qy).cmp(&(px + py)));
        pairs
            .iter()
            .enumerate()
            .map(|(i, &(x, y))| if i % 2 == 0 { x } else { -y })
            .sum::<i32>()
            .signum()
    }
}
// @lc code=end