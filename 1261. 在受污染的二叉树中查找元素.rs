/*
 * @lc app=leetcode.cn id=1261 lang=rust
 *
 * [1261] 在受污染的二叉树中查找元素

 */

// @lc code=start
use std::collections::HashSet;
use std::cell::RefCell;
use std::rc::Rc;

struct FindElements {
    set: HashSet<i32>,
}

impl FindElements {
    fn new(root: Option<Rc<RefCell<TreeNode>>>) -> Self {
        fn dfs(node: Option<&Rc<RefCell<TreeNode>>>, val: i32, set: &mut HashSet<i32>) {
            if let Some(x) = node {
                let x = x.borrow();
                set.insert(val);
                dfs(x.left.as_ref(), val * 2 + 1, set);
                dfs(x.right.as_ref(), val * 2 + 2, set);
            }
        }
        let mut set = HashSet::new();
        dfs(root.as_ref(), 0, &mut set);
        Self { set }
    }

    fn find(&self, target: i32) -> bool {
        self.set.contains(&target)
    }
}
// @lc code=end