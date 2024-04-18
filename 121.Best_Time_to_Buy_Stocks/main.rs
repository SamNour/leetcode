use std::cmp;

fn main() {
    let prices = vec![7, 1, 5, 3, 6, 4];
	max_profit(prices);
}

pub fn max_profit(prices: Vec<i32>) -> i32 {
	let (mut profit, mut hold) = (0, prices[0]);

	for i in 0..prices.len(){
		profit = i32::max(profit, prices[i] - hold);
		hold = i32::min(hold, prices[i]);
	}  
	profit
}
