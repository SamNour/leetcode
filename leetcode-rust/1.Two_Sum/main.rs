fn main() {

	let mut nums: Vec<i32> = vec![3,3,3];
	let res =  TwoSum(nums, 6);
	println!("{:?}", res)
}

fn TwoSum(nums: Vec<i32>, target: i32) -> Vec<i32> {
	let mut hm: HashMap<i32, usize> = HashMap::new();
	//O(n)
	for (index, item) in nums.iter().enumerate() {
		hm.insert(*item, index);
	} 	
	//O(n)
	println!("{:#?}", hm);
	for  (index, item) in nums.iter().enumerate() {
		let mut diff = target - item;
		if hm.contains_key(&diff) {
			return vec![index as i32, hm[&diff] as i32]
		}
	}
	Vec::new()	
}
