fn main() {
	let s : String = String::from("A man, a plan, a canal: Panama");
	let mut s1 :Vec<char> = s
		.to_lowercase()
		.chars()
		.filter(|x| x.is_alphanumeric())
		.collect();
	println!("{:?}", s1);
	let s2 = s1.clone();
	s1.reverse();
	println!("{:?}", s2);

	println!("{:#?}", s1==s2);
}
