fn main() {
	let mut strs = ["eat","tea","tan","ate","nat","bat"];
	for i in strs {
		let mut sorted_i : Vec<char> = i.chars().collect();
		sorted_i.sort();
		let sorted_i :String = sorted_i.into_iter().collect();
		println!("{:?}", sorted_i);
		let v = vec!["a","b"];
		let iter : String = v.into_iter().collect();
		println!("{:?}", iter);

	}
}
