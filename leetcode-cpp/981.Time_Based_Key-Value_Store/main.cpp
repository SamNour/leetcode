#include <iostream>
#include <map>
#include <string_view>
#include <vector>

using namespace std;
class TimeMap {
  map<string, map<int, string>> mp;

public:
  TimeMap() : mp() { std::cout << "TimeMap constructed\n"; }

  void set(string key, string value, int timestamp) {
    mp[key][timestamp] = value;
  }

  string get(string key, int timestamp) {
    if (mp.find(key) != mp.end()) {
        while (timestamp > 0) {
          if (mp[key].find(timestamp) != mp[key].end()) {
            return mp[key][timestamp];
          }
        timestamp--;
        }
    };
    return "";
	}
};
int main() {
    TimeMap timeMap;
    timeMap.set("foo", "bar", 1);
    cout << timeMap.get("foo", 1) << endl;  // should print "bar"
    cout << timeMap.get("foo", 3) << endl;  // should print "bar"
    timeMap.set("foo", "bar2", 4);
    cout << timeMap.get("foo", 4) << endl;  // should print "bar2"
    cout << timeMap.get("foo", 5) << endl;  // should print "bar2"
    return 0;
}
