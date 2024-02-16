/*
 * @lc app=leetcode.cn id=93 lang=rust
 *
 * [93] 复原 IP 地址
 */

// @lc code=start
impl Solution {
    pub fn restore_ip_addresses(s: String) -> Vec<String> {
        let mut result = vec![];
        let mut cur = vec![];
        dfs(s.as_str(), &mut cur, 0, &mut result);
        result
    }
}

fn dfs(s: &str, cur: &mut Vec<String>, pos: usize, result: &mut Vec<String>) {
    if cur.len() == 4 {
        if pos == s.len() {
            result.push(cur.join("."));
        }
        return;
    }

    for i in 1..4 {
        if pos + i > s.len() {
            break;
        }
        let seg = &s[pos..pos + i];
        let val = seg.parse::<i32>().unwrap();
        if seg.starts_with("0") && seg.len() > 1 || val > 255 {
            continue;
        }
        cur.push(seg.to_string());
        dfs(s, cur, pos + i, result);
        cur.pop();
    }
}
// @lc code=end
