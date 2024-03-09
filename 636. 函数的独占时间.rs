/*
 * @lc app=leetcode.cn id=636 lang=rust
 *
 * [636] 函数的独占时间
 */

// @lc code=start
impl Solution {
    pub fn exclusive_time(n: i32, logs: Vec<String>) -> Vec<i32> {
        let parser = |log: String| {
            let mut iter = log.split(':');
            Some((
                iter.next()?.parse::<usize>().ok()?,
                iter.next()?.starts_with('s'),
                iter.next()?.parse::<usize>().ok()?,
            ))
        };
    
        let (mut res, mut stack) = (vec![0_i32; n as usize], Vec::with_capacity(n as usize));
        logs.into_iter().for_each(|log| match parser(log) {
            Some((_, true, ts)) => stack.push((ts, ts)),
            Some((id, false, ts)) => {
                let (pre, start) = stack.pop().unwrap();
                res[id] += (ts - start + 1) as i32;
                if let Some(e) = stack.last_mut() {
                    e.1 += ts - pre + 1;
                }
            }
            _ => (),
        });
    
        res
    }
}
// @lc code=end