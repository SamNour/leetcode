
impl Solution {
    pub fn search(nums: Vec<i32>, target: i32) -> i32 {
    	let mut num = nums.clone();
	let (mut l, mut r) = (0, num.len());
	let mut mid = (l + r) / 2;;
    if num.len() == 1 { 
        if num[0] == target { return 0; } else { return  -1; }
    }
    
	while l < r {
		mid = (l + r) / 2;
		if num[mid] == target { 
			return mid as i32;
		}
		if num[mid] < target {
			l = mid + 1;
		} else {
			r = mid ;
		}
	}
	-1
    }
}
