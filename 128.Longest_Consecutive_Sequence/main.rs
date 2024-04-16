use std::collections::HashSet;
use std::iter::FromIterator;
use std::cmp;
impl Solution {
    pub fn longest_consecutive(nums: Vec<i32>) -> i32 {
    if nums.len() == 0 {
        return 0
    }
    let mut count = 1;
	let hs :HashSet<i32> = HashSet::from_iter(nums);
	println!("{:?}", hs);
	for i in &hs{
        if !hs.contains(&(i - 1)) {
            let mut length = 1;
            let mut pre = i + 1;
            while hs.contains(&pre) {
                length += 1;
                pre += 1;
            }
        
        count = count.max(length);
        }
    }
    count
    }
}
