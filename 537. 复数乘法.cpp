/*
 * @lc app=leetcode.cn id=537 lang=rust
 *
 * [537] 复数乘法
 */

// @lc code=start
use std::{str::FromStr, fmt::format};

#[derive(Debug, Copy, Clone, PartialEq)]
struct Plural {
    re: i32,
    im: i32,
}

impl FromStr for Plural{
    type Err = std::num::ParseIntError;
    fn from_str(s:&str)->Result<Self, Self::Err>{
        let nums:Vec<&str> = s.split("+").collect();
        let re = nums[0].parse::<i32>()?;
        let n = nums[1].len();
        let im = nums[1][..n-1].parse::<i32>()?;
        Ok(Self{
            re,
            im
        })
    }
}

impl std::ops::Mul for Plural{
    type Output = Self;
    fn mul(self, other:Self)->Self{
        Self { 
            re: self.re * other.re - self.im * other.im,
            im: self.re * other.im + self.im * other.re,
        }
    }
}

impl ToString for Plural{
    fn to_string(&self) -> String {
        format!("{}+{}i",self.re,self.im)
    }
}

impl Solution {
    pub fn complex_number_multiply(num1: String, num2: String) -> String {
        let num1 = Plural::from_str(&num1).unwrap();
        let num2 = Plural::from_str(&num2).unwrap();
        (num1 * num2).to_string()
    }
}
// @lc code=end