fn main() {
	let ss =String::from("()[]{}");
	let res = sol(ss);
	println!("{:?}", res);
}

fn sol(s: String) -> bool {
    let v : Vec<char> = s.chars().collect();
	let mut stack = Vec::new();

	for i in v {
		if i == '(' || i == '[' || i == '{' {
			stack.push(i);
		}
		if i == ')' {
			if stack.pop() != Some('(') { return false; }
		}
		if i == ']' {
			if stack.pop() != Some('[') { return false; }
		}
		if i == '}' {
			if stack.pop() != Some('{') { return false; }
		}
		else { continue }
	}
	true
}
