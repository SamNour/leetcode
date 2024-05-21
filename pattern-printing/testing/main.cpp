#include <iostream>

int height = 7;
int num_a = 1;

int main(){

	while (height > 0){
		int num_s = height - 1;
		while (num_s > 0){
			std::cout << ' ';
			num_s --;
		}
		for (int i =0; i < num_a ; i++){
			std::cout << '*';
		}
		num_a = num_a + 2;

		std::cout << '\n';
		height --;
	}
}
