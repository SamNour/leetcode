use std::collections::HashSet;
use std::iter::FromIterator;

fn main () {
	let mut count = 1;
	let res = vec![0,3,7,2,5,8,4,6,0,1];
	let hs :HashSet<i32> = HashSet::from_iter(res);
	println!("{:?}", hs);
	for i in &hs{
		let pre = (i + 1).abs();
		if hs.contains(&pre) {
			count += 1;
		}

	}
	println!("{}", count);
}

/*
use std::collections::HashSet;
use std::iter::FromIterator;
impl Solution {
    pub fn longest_consecutive(nums: Vec<i32>) -> i32 {
    let mut count = 1;
	let hs :HashSet<i32> = HashSet::from_iter(nums);
	println!("{:?}", hs);
	for i in &hs{
		let pre = (i + 1).abs();
		if hs.contains(&pre) {
			count += 1;
		}
	}
    count
    }
}
*/
