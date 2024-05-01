use std::collections::HashMap;

fn main() {
    let nums = [-1, 1, 0, -3, 3];
    let mut res: Vec<i32> = Vec::new();
    let mut lc = 1;
    for i in 0..nums.len() {
        res.push(lc);
        lc *= nums[i];
    }
    let mut rc = 1;
    //println!("{}", rc);

    for i in (0..nums.len()).rev() {
        println!("{}", i);
        res[i] *= rc;
        rc *= nums[i];
        //println!("{}", rc);
    }
    println!("{:#?}", res);
}

impl Solution {
    pub fn product_except_self(nums: Vec<i32>) -> Vec<i32> {
        let mut res: Vec<i32> = Vec::new();
        let mut lc = 1;
        for i in 0..nums.len() {
            res.push(lc);
            lc *= nums[i];
        }
        let mut rc = 1;
        //println!("{}", rc);

        for i in (0..nums.len()).rev() {
            println!("{}", i);
            res[i] *= rc;
            rc *= nums[i];
            //println!("{}", rc);
        }
        println!("{:#?}", res);
        res
    }
}
