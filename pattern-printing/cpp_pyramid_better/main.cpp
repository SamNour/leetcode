#include <iostream>

int main(){
	int h = 10;
	int sw ;
	int asw = 1;
	for (int i = 0; i < h ; ++i){//heigh
		sw = h - i - 1;
		while (sw > 0) {
			std::cout << ' ';
			sw--;
		}
		for (int i = 0; i < asw; ++i){
			std::cout << '*';
		}
		std::cout << '\n';
		
		asw += 2;
		
	}
}
