use std::cmp::Ordering;

fn main () {
	let matrix = vec![[1,3,5,7],[10,11,16,20],[23,30,34,60]];
	let target = 3;
	for row in matrix {
		let o = BinarySearch(row.to_vec(), target);
		println!("{}", o);
		if o == true {
			return true;
		} 
	}
	false
}

fn BinarySearch(v : Vec<i32>, target : i32) -> bool{
	let mut l = 0;
	let mut r = v.len(); 
	let mut mid = (l+r)/2;
	let mut res = false;
	while l < r {
		mid = (l + r) / 2;
		if v[mid] < target {
			l = mid + 1;
		} else if v[mid] > target  {
			r = mid ;
		} else {
			return true;
		}
	}
	false
}


impl Solution {
  pub fn search_matrix(matrix: Vec<Vec<i32>>, target: i32) -> bool {
    let mut result: bool = false;

    for (i, vec) in matrix.iter().enumerate() {
      if vec.contains(&target) {
        result = true;
        break;
      }
    }
    return result
  }
}
