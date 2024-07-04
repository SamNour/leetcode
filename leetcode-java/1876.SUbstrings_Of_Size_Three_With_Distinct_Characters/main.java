class Solution {
    public int countGoodSubstrings(String s) {
        HashSet<Character> set = new HashSet<>();
        int count = 0;
        int l = 0;
        for (int r = 0; r < s.length(); r++){
            if (!set.contains(s.charAt(r))){
                set.add(s.charAt(r));
                if (set.size() >= 3) count++;
            } else {
                while (set.contains(s.charAt(r))) {
                    set.remove(s.charAt(l));
                    l++;
                }
                set.add(s.charAt(r));
                if (set.size() >= 3) count++;
            }
       }
        return count;    
    }
}
