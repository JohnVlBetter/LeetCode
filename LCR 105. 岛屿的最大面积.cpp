/*
 * @lc app=leetcode.cn id=LCR 105 lang=rust
 *
 * [LCR 105] 岛屿的最大面积
 */

// @lc code=start
impl Solution {
    pub fn max_area_of_island(grid: Vec<Vec<i32>>) -> i32 {
        fn dfs(grid: &mut Vec<Vec<i32>>, i:i32,j:i32, n:i32,m:i32) -> i32 {
            let mut res = 1;
            let dir = [-1,0,1,0,-1];
            for k in 0..4{
                let (x,y) = (i+dir[k], j+dir[k+1]);
                if x<0 || x>=n || y<0 || y>=m {
                    continue
                }
                if grid[x as usize][y as usize] == 1{
                    grid[x as usize][y as usize] = 0;
                    res += dfs(grid,x,y,n,m);
                }
            }
            res
        }

        let mut grid = grid;
        let mut res = 0;
        let (n, m) = (grid.len() as i32, grid[0].len() as i32);
        for i in 0..n{
            for j in 0..m{
                if grid[i as usize][j as usize] == 1{
                    grid[i as usize][j as usize] = 0;
                    res = std::cmp::max(res, dfs(&mut grid,i,j,n,m))
                }
            }
        }
        res
    }
}
// @lc code=end