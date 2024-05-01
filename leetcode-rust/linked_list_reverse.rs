// Definition for singly-linked list.
#[derive(PartialEq, Eq, Clone, Debug)]
pub struct ListNode {
    pub val: i32,
    pub next: Option<Box<ListNode>>,
}

impl ListNode {
    #[inline]
    fn new(val: i32) -> Self {
        ListNode {
            next: None,
            val,
        }
    }

pub fn reverse_list(head: Option<Box<ListNode>>) -> {
	let mut  prev = None
	let mut current = head;
	while current.is_some(){
		let mut curr_node = current.unwrap();
		let mut next = curr_node.next.take();
		curr_node.next = prev.take();
		prev = Some(curr_node);
		curr_node = next;

	}
	prev
}

















    
    // pub fn reverse_list(head: Option<Box<ListNode>>) -> Option<Box<ListNode>> {
        // let mut prev = None;
        // let mut option_wrapped_head = head;
// 
        // while option_wrapped_head.is_some() {
            // let mut curr_node = option_wrapped_head.unwrap(); // Unwrap to get the inner value
            // let next = curr_node.next.take();
            // curr_node.next = prev.take();
            // prev = Some(curr_node);
            // option_wrapped_head = next;
        // }
// 
        // prev
    // }
}

fn main() {
    // Create a linked list: 1 -> 2 -> 3 -> 4 -> 5
    let mut head = Some(Box::new(ListNode::new(1)));
    let mut current = head.as_mut();
    for val in 2..=5 {
        let node = current.unwrap();
        node.next = Some(Box::new(ListNode::new(val)));
        current = node.next.as_mut();
    }

    // Reverse the linked list
    let reversed_list = ListNode::reverse_list(head);

    // Print the reversed linked list
    let mut current = &reversed_list;
    print!("Reversed list: ");
    while let Some(node) = current {
        print!("{} -> ", node.val);
        current = &node.next;
    }
    println!("None");
}
