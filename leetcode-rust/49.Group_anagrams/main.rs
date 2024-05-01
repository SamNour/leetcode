use std::collections::HashMap;
pub fn group_anagrams(strs: Vec<String>) -> Vec<Vec<String>> {
    let mut hm: HashMap<String, Vec<String>> = HashMap::new();
    for i in strs {
        let mut sorted_i: Vec<char> = i.chars().collect();
        sorted_i.sort();
        let sorted_i: String = sorted_i.into_iter().collect();
        println!("{:?}", sorted_i);

        if !hm.contains_key(&sorted_i) {
            let mut vals: Vec<String> = Vec::new();
            vals.push(i.to_string());
            hm.insert(sorted_i, vals);
        } else {
            let existing_key = hm.get_mut(&sorted_i).unwrap();
            existing_key.push(i.to_string());
        }
    }
    let mut res: Vec<Vec<String>> = Vec::new();
    for (key, value) in &hm {
        res.push(value.to_vec());
    }
    res
}
fn main(){
    let arr = vec!["eat", "tea", "tan", "ate", "nat", "bat"]
        .iter()
        .map(|s| s.to_string())
        .collect();
    let result = group_anagrams(arr);
    println!("{:?}", result);}
