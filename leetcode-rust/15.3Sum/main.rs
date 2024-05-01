use std::cmp::Ordering;
use std::collections::HashSet;

impl Solution {
    pub fn three_sum(nums: Vec<i32>) -> Vec<Vec<i32>> {
    let mut nums = nums.clone();
    nums.sort();
	let mut res = HashSet::new();
	for (index, &item) in nums.iter().enumerate() {
		if &item > &( 0 as i32) {
            break;
        }

        if index > 0 && item == nums[index - 1]{
			continue
		}
		let mut lp = index + 1;
        let mut rp = nums.len() - 1;
		while lp < rp {
            let mut threeSome = &item + nums[lp] + nums[rp];
            if threeSome > 0 { rp -= 1}
            else if threeSome < 0 { lp += 1}
            else {
                res.insert(vec![(nums[lp]) as i32, (nums[rp]) as i32, item as i32]);
                lp += 1;
                while nums[lp] == nums [lp - 1] && lp < rp {
                    lp += 1;
                }
            }
		}
	}
	let fin: Vec<Vec<i32>>=  res.iter().cloned().collect();
	fin
    }
}
