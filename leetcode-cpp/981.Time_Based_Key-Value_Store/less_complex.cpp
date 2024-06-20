#include <unordered_map>

class TimeMap {
public:
    std::unordered_map<std::string, std::vector<std::pair<std::string, int>>> hm {};
    TimeMap() {
        // Not necessarily needed
    }
    
    void set(string key, string value, int timestamp) {
        std::pair<std::string, int> tmp_pair {};
        tmp_pair.first = value;
        tmp_pair.second = timestamp;
        hm[key].push_back(tmp_pair);
    }
    

    string get(string key, int timestamp) {
        for (auto it = hm[key].rbegin(); it != hm[key].rend(); ++it) {
            if (it->second <= timestamp) return it->first;
        }
        return "";
    }
};

/**
 * Your TimeMap object will be instantiated and called as such:
 * TimeMap* obj = new TimeMap();
 * obj->set(key,value,timestamp);
 * string param_2 = obj->get(key,timestamp);
 */
