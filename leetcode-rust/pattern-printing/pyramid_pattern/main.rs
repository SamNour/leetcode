fn main() {
	let mut heigh = 7;
	let mut space_len = heigh - 1;
	let mut ass_len = 1;

	while heigh > 0 {

		for _ in 0..space_len {
			print!("{}" , ' ');
		}
		space_len -= 1;

		for _ in 0..ass_len {
			print!("{}", '*');
		}
		ass_len +=2;
		heigh -= 1;
		// print!("{}", heigh);
		print!("{}", '\n');

	}
}
