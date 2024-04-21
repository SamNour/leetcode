fn main() {
    let s = "abcdefg";

    let window_size = 3;
    let mut start = 0;
    let mut end = window_size;

    while end <= s.len() {
        let window = &s[start..end];
        println!("{}", window);
        start += 1;
        end += 1;
    }
}
