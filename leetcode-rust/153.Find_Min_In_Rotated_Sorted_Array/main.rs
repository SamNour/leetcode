use std::collections::HashSet;
fn main() {
	let mut nums: Vec<i32> = vec![11,13,15,17,-11];
	let res = min(nums);
	println!("{:?}", res);

}


pub fn min(nums: Vec<i32>) -> i32 {
	let (mut l, mut r) = (0, nums.len() - 1);
	if nums[l] < nums[r] {
		return nums[l] // our array is sorted
	} else {
		while nums[l] > nums[r] {
			l += 1;
		}
	}
	nums[l]

}
