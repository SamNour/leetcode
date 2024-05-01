use std::collections::HashMap;
fn main() {
    let mut strs = vec!["eat", "tea", "tan", "ate", "nat", "bat"].iter().map(|s| s.to_string()).collect::<Vec<String>>();
    let mut hm: HashMap<String, Vec<String>> = HashMap::new();
	// i is the unsorted String
	for i in strs {
		let mut  str_char: Vec<char> = i.chars().collect(); 
		str_char.sort();

		// sorted string
		let sorted: String = str_char.iter().collect(); 

		if  !hm.contains_key(&sorted) {
			let mut v: Vec<String> = Vec::new();
			v.push(i);
			hm.insert(sorted, v);
		} else {
			// v.push(i);
			// hm.insert(sorted, v);
			let mut value = hm.get_mut(&sorted).expect("Error finding the key?!");
			value.push(i)
			
		}
	}
    println!("{:?}", hm)
}

// fn gp(strs: Vec<String>) -> Vec<Vec<String>> {
// 
// }
fn TwoSum(nums: Vec<i32>, target: i32) -> Vec<i32> {
    let mut nums2 = nums.clone();
    nums2.sort();
    let mut l = 0;
    let mut r = nums2.len() - 1;
    let mut res: Vec<i32> = Vec::new();
    for i in 0..nums2.len() {
        if nums2[l] + nums2[r] == target {
            res.push(nums2[l] as i32);
            res.push(nums2[r] as i32);
            return res;
        } else if nums2[l] + nums[r] > target {
            r -= 1;
        } else {
            l += 1;
        }
    }
    res
}

fn paranthesis(s: String) -> bool {
    let s1: Vec<char> = s.chars().collect();
    let mut stack: Vec<char> = Vec::new();

    for i in s1 {
        if i == '(' || i == '{' || i == '[' {
            stack.push(i)
        }
        if i == ')' {
            if stack.pop() != Some('(') {
                return false;
            }
        }
        if i == ']' {
            if stack.pop() != Some('[') {
                return false;
            }
        }
        if i == '}' {
            if stack.pop() != Some('{') {
                return false;
            }
        }
    }
    if stack.len() > 0 {
        return false;
    } // not all elemetns popped
    true
}
pub fn min(nums: Vec<i32>) -> i32 {
    let (mut l, mut r) = (0, nums.len() - 1);
    if nums[l] < nums[r] {
        return nums[l]; // our array is sorted
    } else {
        while nums[l] > nums[r] {
            l += 1;
        }
    }
    nums[l]
}
