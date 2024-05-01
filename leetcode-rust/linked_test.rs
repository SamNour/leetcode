struct LinkedList {
	len: i32,
	root: Optional<Box<ListNode>>
}

impl LinkedList {
	fn new() -> Self {
		LinkedList {
			len: 0,
			root: None
		}
	}
}


struct ListNode {
	val: i32,
	next: Optional<Box<ListNode>>
}

impl ListNode {
	pub fn new(val: i32) -> Self {
		ListNode {
			val,
			next: None
		}
	}

	pub fn get(&mut self, index: i32) -> i32 {
		let curr = self.root().as_mut().unwrap();
		for i in 0..index {
			curr = curr.next.as_mut().unwrap();
		}
		curr.val
		
	}

	pub fn add_at_head(&mut self, val: i32) {
		let curr = self.root().take();
		let n =  Some(Box::new(ListNode {
			val,
			next: curr
		))}
		self.root = n;
		self.len +=1
	}

	pub fn add_at_tail(&mut self, val) {
		let n =  Some(Box::new(ListNode {
					val,
					next: None
		))}

		if root.is_none() {
			self.root = n;
		} else {
			let curr = self.root.as_mut().unwrap();
			while curr.is_some(){
				curr = curr.next.as_mut().unwrap();
			}
			curr.next = n;
		}
		self.len += 1;
	}

	pub add_at_index(&mut self, index: i32, val: i32){

		// index is the whole length
		if index == self.len {
			self.add_at_tail(val);
		}
		// index is at the head
		if index == 0 {
			self.add_at_head(val);
		}
		
		let n =  Some(Box::new(ListNode {
					val,
					next: None
		))}
		let mut curr = self.root.as_mut().unwrap();

		for i in 0..index - 1 {
			curr = curr.next.as_mut().unwrap();
		} 
		curr.next = n;
	}
}

