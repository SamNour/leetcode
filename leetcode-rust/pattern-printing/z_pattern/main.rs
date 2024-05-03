fn main(){
	let mut heigh = 10;
	let mut OG_heigh = heigh;
	let mut diag = heigh - 1;

	for i in 0..heigh {
		print!("x");
	}
	print!("\n");
	while heigh - 2 > 0{
		while diag - 1 > 0 {
			print!(" ");
			diag -= 1;
		}
		print!("x");
		heigh -= 1;
		diag = heigh - 1;
		print!("\n");
	}
	for i in 0..OG_heigh {
		print!("x");
	}
	print!("\n");
}
