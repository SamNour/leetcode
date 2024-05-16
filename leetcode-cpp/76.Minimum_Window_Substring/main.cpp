#include <iostream>
#include <map>
#include <math.h>
#include <vector>
using namespace std;

bool isEmpty(map<char, int> &hm) {
  for (auto &kv : hm)
    if (kv.second > 0)
      return false;
  return true;
}

string minWindow(string s, string t) {
  int l = 0;
  int r = 0;
  map<char, int> hm;
  // populate map
  string res{""};
  for (auto &c : t) {
    hm[c]++;
  }
  int size = s.size();
  string tmp{};
  while (r <= size) {
    if (hm.find(s[l]) != hm.end() && hm[s[l]] > 0) {
      hm[s[l]]--;
      r++;
      tmp.push_back(s[l]);
      while (!isEmpty(hm) && r < size) {
        if (hm.find(s[r]) != hm.end() && hm[s[r]] > 0 && r < size) {
          hm[s[r]]--;
          tmp.push_back(s[r]);
          r++;
        } else if (hm.find(s[r]) == hm.end()){
			tmp.push_back(s[r]);
			r++;
		} else if (hm.find(s[r]) != hm.end() && hm[s[r]] <= 0){
			r++;
			continue;
		}
	  }
	  if (isEmpty(hm))
	  	res = tmp;

	  if (r < size)
	  {
		  r++;
		  l = r;
		  for (auto &c : t)
		  {
			  hm[c]++;
		  }
		  tmp = "";
	  }
	  else
	  {
		  return res;
	  }
	} else {
	  l++;
	  r ++;
	}
  }
  return res;
}

int main() {
//   Test case 1
  string s1{"ADOBECODEBANC"};
  string t1{"ABC"};
  string res1 = minWindow(s1, t1);
  cout << "Expected: BANC, Actual: " << res1 << '\n';

  // Test case 2
  string s2{"a"};
  string t2{"a"};
  string res2 = minWindow(s2, t2);
  cout << "Expected: a, Actual: " << res2 << '\n';

  // Test case 3
  string s3{"a"};
  string t3{"aa"};
  string res3 = minWindow(s3, t3);
  cout << "Expected: , Actual: " << res3 << '\n'; // Expected output is an empty string

  // Test case 4
  string s4{"ab"};
  string t4{"b"};
  string res4 = minWindow(s4, t4);
  cout << "Expected: b, Actual: " << res4 << '\n';

  // Test case 5
  string s5{"bba"};
  string t5{"ab"};
  string res5 = minWindow(s5, t5);


  // Test case 6
string s6{"this is a test string"};
string t6{"string"};
string res6 = minWindow(s6, t6);
cout << "Expected: string, Actual: " << res6 << '\n';

// Test case 7
string s7{"try to find the smallest window"};
string t7{"window"};
string res7 = minWindow(s7, t7);
cout << "Expected: window, Actual: " << res7 << '\n';

// Test case 8
string s8{"the quick brown fox jumps over the lazy dog"};
string t8{"fox"};
string res8 = minWindow(s8, t8);
cout << "Expected: fox, Actual: " << res8 << '\n';

// Test case 9
string s9{"the quick brown fox jumps over the lazy dog"};
string t9{"fox jumps"};
string res9 = minWindow(s9, t9);
cout << "Expected: fox jumps, Actual: " << res9 << '\n';

// Test case 10
string s10{"the quick brown fox jumps over the lazy dog"};
string t10{"the quick brown fox"};
string res10 = minWindow(s10, t10);
cout << "Expected: the quick brown fox, Actual: " << res10 << '\n';
  cout << "Expected: ba, Actual: " << res5 << '\n';
}

