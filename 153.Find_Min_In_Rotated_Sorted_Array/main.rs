use std::cmp;
fn main() {
    // let nums = vec![3, 4, 5, 1, 2];
    // let res = find_min(nums);
    // println!{"{:#?}", res};
	let nums = vec![-1,0,3,5,9,12];
	    let res = BS(nums, 9);
    println!{"{:#?}", res};

}

pub fn find_min(nums: Vec<i32>) -> i32 {
    let mut res = nums[0];
    let mut l = 0;
    let mut r = nums.len() - 1;

    //case that the array is sorted
    while l <= r {
        if nums[l] < nums[r] {
            res = cmp::min(res, nums[l]);
            break;
        }
        let mut mid = (l + r) / 2;
        res = cmp::min(res, nums[mid]);
        if nums[mid] >= nums[l] {
            l = mid + 1;
        } else {
            r = mid - 1;
        }
    }
    res
}

