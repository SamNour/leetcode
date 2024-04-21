use std::collections::HashSet;
fn main() {
	let mut nums: Vec<i32> = vec![100,4,200,1,3,2];
	let hs: HashSet<i32> = nums.iter().cloned().collect();
	let mut count = 0;
	for i in nums {
		if !hs.contains(&(i-1)) {
			let mut length = 1;
			let mut post = i + 1;
		 while hs.contains(&post) {
			length += 1;
			post += 1;
		}
		count = i32::max(count, length);
		}
	}
	println!("{}",count);	

}


pub fn max_profit(prices: Vec<i32>) -> i32 {

	let mut hold = prices[0];
	let mut profit = 0;

	for i in 0..prices.len() {
		profit = i32::max(profit, prices[i] as i32 - hold);
		hold = i32::min(hold, prices[i]);
	}
	println!("hold = {}, profit = {}", hold, profit);
	profit
}
