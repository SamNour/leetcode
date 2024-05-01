use std::collections::HashMap;
fn main() {
    let mut hm: HashMap<i32, i32> = HashMap::new();
	let mut nums = [1,1,1,2,2,3,6,6,6];
	let k = 2;
	let mut res: Vec<i32> = Vec::new();
	for i in nums {
		let mut count = hm.entry(i).or_insert(0);
		*count += 1;
	}
	println!("{:?}", hm);
	let mut sort_vec: Vec<_> = hm.iter().collect();
	sort_vec.sort_by_key(|&(k,v)| k );
	println!("{:?}", &sort_vec[(sort_vec.len() - k)..]);
	let sliced_vec = &sort_vec[(sort_vec.len() - k)..];
	for i in sliced_vec {
		res.push(*i.0);
	}
	println!("{:?}", res);
}
