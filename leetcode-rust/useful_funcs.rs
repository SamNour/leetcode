fn permutations(chars: &mut [char], start: usize) -> Vec<String> {
    let mut result = Vec::new();

    if start == chars.len() {
        result.push(chars.iter().collect());
    } else {
        for i in start..chars.len() {
            chars.swap(start, i);
            let mut perms = permutations(chars, start + 1);
            result.append(&mut perms);
            chars.swap(start, i);
        }
    }

    result
}

fn main() {
    let mut chars = ['a', 'b', 'c'];
    let perms = permutations(&mut chars, 0);
    for perm in perms {
        println!("{}", perm);
    }
}

fn slice_window (){
	let s = "abcdefg";
    let window_size = 3;
    let mut start = 0;
    let mut end = window_size;

    while end < s.len() {
        let window = &s[start..=end];
        println!("{}", window);
        start += 1;
        end += 1;
    }
}
