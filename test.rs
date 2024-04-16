use std::collections::HashMap;

fn main(){
	let mut hm: HashMap<String,Vec<String>> = HashMap::new();

	let strs = ["eat","meat","tea","team","mass","assm","msas"];
	for i in strs{
		// sort all the elemts in the array
		let mut sorted_vec : Vec<char> = i.chars().collect();
		sorted_vec.sort();
		let sorted_str : String = sorted_vec.iter().collect();

		if !hm.contains_key(&sorted_str){
			// append the val to the vector
			let mut value_vector : Vec<String> = Vec::new();
			value_vector.push(sorted_str.clone());
			// add the key if it doesnot exist
			hm.entry(sorted_str).or_insert(value_vector); //return the handle of the value
		} else {
			let value = hm.get_mut(&sorted_str).unwrap();
		
			value.push(sorted_str.clone())
		}
	}
	println!("{:?}", hm);
}
