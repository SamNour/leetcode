use std::collections::HashSet;
use std::collections::HashMap;


fn main() {
	let mut k = 2 ;
    let s = String::from("ABAB");
	let s_vec : Vec<char> = s.chars().into_iter().collect();
	let mut hm : HashMap<char, i32> = HashMap::new();
	let mut valid_len = 0;
	let mut l  = 0;
	let mut res = 0;
	println!("{:#?}", s_vec.len());
	for r in 0..s_vec.len() {
		let s_slice  = &s_vec[l..=r];
		println!("{:#?}", s_slice);

		for i in s_slice {
			let mut count = hm.entry(*i).or_insert(0);
			*count += 1;
		}
		let max_key_from_value = hm.iter().max_by_key(|entry| entry.1).unwrap();
		println!("slice = {:#?}, hm = {:#?}, max_key_from_value = {:#?}", s_slice, hm, max_key_from_value.1);

		valid_len = (r - l + 1) as i32 - *max_key_from_value.1 as i32;
		hm.clear();
		
		if valid_len <= k {
			println!("FINAL SLICE ={:#?}", s_slice);
			res = s_slice.len();
		} else {
			l += 1;
		}
	}
	
	// let max_key_from_value = hm.iter().min_by_key(|entry| entry.1).unwrap();
	println!("{:#?}", res);
}

