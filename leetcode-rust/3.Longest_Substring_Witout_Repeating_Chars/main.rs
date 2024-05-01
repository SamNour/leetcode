use std::collections::HashSet;

fn main() {
    let s = String::from("pwwkew");
	let o = longest_substring(s);
	println!("{}", o);
}

pub fn longest_substring(s : String) -> i32 {
	let mut l = 0;
	let mut res = 0;
	let mut hs : HashSet<char> = HashSet::new();
	let s_vec : Vec<char> = s.chars().into_iter().collect();
	for r in 0..s_vec.len() - 1 {
		while hs.contains(&s_vec[r]){
			hs.remove(&s_vec[l]);
			l += 1;
		}	
		hs.insert(s_vec[r]);
		res = i32::max(res, (r - l + 1) as i32);
	}
	res
}
