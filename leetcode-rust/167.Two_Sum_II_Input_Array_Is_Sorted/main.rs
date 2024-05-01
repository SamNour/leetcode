use std::cmp::Ordering;

fn main() {
	let nums : Vec<i32> = vec![-1,0];
	// let pos_two = nums.iter().position(|&x| x == 2).expect("Element doesnot exuist");
	// println!("{}", pos_two);
	let target = -1;
	let o = sol(nums, target );
	println!("{:?}", o);
	
}

fn sol (numbers : Vec<i32>, target : i32) -> Vec<i32> {
	let mut lp = 0;
	let mut rp = numbers.len() - 1;

	while lp < rp {
		match (numbers[lp] + numbers [rp]).cmp(&target) {
			Ordering::Less =>  lp += 1,
			Ordering::Greater => rp -= 1,
			Ordering::Equal => return vec![(lp + 1) as i32, (rp + 1) as i32],
		}
	}
	unreachable!();
	
}
