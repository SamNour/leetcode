    pub fn contains_duplicate(nums: Vec<i32>) -> bool {
        let mut res : Vec<i32> = Vec::new();
        for i in 0..nums.len() {
            if !res.contains(&nums[i]){
                res.push(nums[i]);
            } else {
               return true
            }
        }
        println!("{:?}", nums);
        false
    }

fn main(){
	let	list = vec![1,2,1,3,4];
	contains_duplicate2(list.clone());
	println!("{}",	contains_duplicate(list.clone()));
}


use std::collections::HashMap;
fn contains_duplicate2(nums: Vec<i32>) -> bool {
	let nums = vec![1,2,3];
	let mut hm : HashMap<i32, i32> = HashMap::new();

	for i in nums {
		let mut count = hm.entry(i).or_insert(0);
		*count += 1;
	}

    println!("{:#?}", hm);
    // get the max value by key
    let max_value = hm.iter().max_by_key(|entry| entry.1).unwrap().1;
    println!("xxx {:#?}", max_value);
     if *max_value > 1 {
     	true 
     } else {
		false
     }

}
