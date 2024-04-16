use std::collections::HashMap;


fn main() {
    let mut k = 2;
	let nums = [1,1,1,2,2,3];

	let mut hm : HashMap<i32,i32> = HashMap::new();
	for i in nums{
		let count = hm.entry(i).or_insert(0);
		*count += 1;
	}
	//println!("{:?}", hm);

	let hm_iter = hm.iter();
	let mut hm_iter_tup: Vec<(&i32, &i32)> = hm.iter().collect();
	hm_iter_tup.sort();
	println!("{:?}", hm_iter_tup);

	let res_tup = &hm_iter_tup[hm_iter_tup.len() - k as usize..];
	let mut res : Vec<i32> = Vec::new();
	for i in res_tup{
		res.push(*i.1);

	}
	println!("{:?}", res);

}

/*
use std::collections::HashMap;
impl Solution {
    pub fn top_k_frequent(nums: Vec<i32>, k: i32) -> Vec<i32> {
    let mut hm : HashMap<i32,i32> = HashMap::new();
	for i in nums{
		let count = hm.entry(i).or_insert(0);
		*count += 1;
	}
	//println!("{:?}", hm);

	let hm_iter = hm.iter();
	let mut hm_iter_tup: Vec<(&i32, &i32)> = hm.iter().collect();
	hm_iter_tup.sort();
	println!("{:?}", hm_iter_tup);

	let res_tup = &hm_iter_tup[hm_iter_tup.len() - k as usize..];
	let mut res : Vec<i32> = Vec::new();
	for i in res_tup{
		res.push(*i.1);
	}
	println!("{:?}", res);
    res
    }
}
