/*

*******
 *****
  ***
   *

*/

#include <iostream>
//base heigh + (heigh -1)
int h = 4;
int sw = 0;
int aw = (2 * h) -1;
int tmp = h;
int main () {
	
	for (int i = 0; i < tmp; ++i){
		for (int i = 0; i < sw; i++){
			std::cout << ' ';
		}
		sw+= 1;

		int j = 0;
		while (j < aw){
			std::cout << '*';
			aw--;
		}
		h--;
		aw = (2 * h) -1;
		
		std::cout << '\n';
		// std::cout << aw;
	}
	return 0;
}
