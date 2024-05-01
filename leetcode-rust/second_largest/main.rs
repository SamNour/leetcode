fn main () {
	// find the second largest number in the array
	
	let nums = [-1,-2,0,-3, 1];
	
	let mut max = -100;
	let mut second_max = -100;
	for i in nums {
		if i > max {
			second_max = max;
			max = i;	
		}
	}
	
	println!("second_max {}, max {}", second_max, max);
}
