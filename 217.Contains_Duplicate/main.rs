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
	contains_duplicate(list.clone());
	println!("{}",	contains_duplicate(list.clone()));
}
