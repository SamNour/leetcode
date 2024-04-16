
fn main () {
	let nums = [1,2,3,4];
	let mut mul = 1;
	let mut res : Vec<i32> = Vec::new();
	let mut lp =0;
	let mut rp = 0;

	for i in 0..nums.len(){
		rp = 0;
		for j in 00..nums.len(){
			if  lp == rp {
				rp +=1;
			} else {
				mul *= nums[rp];
				rp +=1;
			}
			
		}
		res.push(mul);
		mul=1;
		lp += 1;
	}
	println!("{:?}", res);
}


/*
impl Solution {
    pub fn product_except_self(nums: Vec<i32>) -> Vec<i32> {
	let mut mul = 1;
	let mut res : Vec<i32> = Vec::new();
	let mut lp =0;
	let mut rp = 0;

	for i in 0..nums.len(){
		rp = 0;
		for j in 00..nums.len(){
			if  lp == rp {
				rp +=1;
			} else {
				mul *= nums[rp];
				rp +=1;
			}
			
		}
		res.push(mul);
		mul=1;
		lp += 1;
    }
    res
}
}



*/
