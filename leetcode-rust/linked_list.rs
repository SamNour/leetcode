pub struct LinkedList{
    pub len: i32,
    pub root : Option<Box<LinkedListNode>>,
}


pub struct LinkedListNode {
    pub val : i32,
    pub next : Option<Box<LinkedListNode>>
}

impl LinkedListNode {
    fn new(val : i32) -> Self{
        LinkedListNode{
            val, 
            next : None,
        }
    }
}

impl LinkedList {
    fn new() -> Self {
        LinkedList {
            len: 0,
            root :None, 
        }
    }

    fn get(&mut self, index: i32) -> i32 {
        // get val at an index
        let mut current = self.root.as_mut().unwrap();
        for _ in  0..index {
            current = current.next.as_mut().unwrap();
        }
        current.val
    }
    
    fn add_at_head (&mut self, val: i32){
        let n = Some(Box::new(LinkedListNode{ 
            val,
            next: self.root.take(),
        })) ;
        self.root = n;
        self.len += 1;
    }

    fn add_at_tail(&mut self, val: i32) {
		let n = Some(Box::new(LinkedListNode{ 
			val,
			next: None
		})); 

		if self.root.is_none() {
			self.root = n;
		} else {
			let mut current = self.root.as_mut().unwrap();
			while current.next.is_some(){
				current = current.next.as_mut().unwrap();
			}
			current.next = n;
		}
		self.len += 1;
	}

	fn add_at_index(&mut self, val: i32, index: i32){
		if index == 0 { 
			self.add_at_head(val) 
		} else if index == self.len {
			self.add_at_tail(val) 
		} else if index > 0 && index < self.len {
			let mut current = self.root.as_mut().unwrap();
			for _ in 0..index - 1 {
				current = current.next.as_mut().unwrap();
		}
		let n = Some(Box::new(LinkedListNode {
			val,
			next: current.next.take()	
		}));
		current.next = n;
						
		self.len += 1;

		} else {
			unreachable!("This should not happen");
		}
	}

	fn delete_at_index(&mut self, index: i32) {
		if index == 0 { 
			let mut root = self.root.take();
			match root {
				Some(output) => self.root = output.next,
				None => {}
			}

		}
		let mut current = self.root.as_mut().unwrap();
		for _ in 0..index - 1 {
			current = current.next.as_mut().unwrap();
		}
		let del_node  = current.next.as_mut().unwrap();
		let rest_node = del_node.next.take();
		current.next = rest_node;
		self.len -= 1
	}

	fn print_me(&mut self) {
		let with = self.root.as_mut().unwrap();
		println!("without = {:#?}", with.val )
	}
}


fn main() {
    // Create a new linked list
    let mut list = LinkedList::new();

    // Add nodes to the list
    list.add_at_head(1);
    list.add_at_tail(3);
    list.add_at_tail(5);
    list.add_at_index(2, 1);
	list.delete_at_index(2);
	list.print_me();
    // Print the values of the nodes in the list
    for i in 0..list.len {
        println!("Node at index {}: {}", i, list.get(i));
    }
}


