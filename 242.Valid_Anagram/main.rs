impl Solution {
    pub fn is_anagram(s: String, t: String) -> bool {
        let mut a : Vec<char> = s.chars().collect();
        let mut b : Vec<char> = t.chars().collect();
        a.sort(); 
        b.sort();
        a == b
    }
}
