use std::collections::HashMap;

fn main() {
    //extract all the subarray that start and end with
    //a positive number
    let vec: Vec<i32> = [-2, 1, -3, 4, -1, 2, 1, -5, 4].to_vec();
    let mut hm: HashMap<Vec<i32>, i32> = HashMap::new();
	let mut lp = 0;
	let mut rp = vec.len() - 1;

	while lp < rp {
		while lp < rp {
			let mut arr = &vec[lp..rp];
			hm.insert(arr.to_vec(), arr.iter().sum());
			rp -= 1;
		}
		rp = vec.len() - 1;
		lp += 1;
	} 
	let mut res : Vec<(Vec<i32>, i32)> = Vec::new();
   	let mut max = -1;

	for (key, value ) in &hm {
		if 
		
	} 
    println!("{:?}", &hm);   // Collect key-value pairs into a vector
}
