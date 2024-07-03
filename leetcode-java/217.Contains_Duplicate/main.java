import java.util.*;

class Solution {
    public boolean hasDuplicate(int[] nums) {
        Arrays.sort(nums);
        int l = 0;
        for (int r = 1; r < nums.length; r++){
            if (nums[l] != nums[r]){
                l++;
            } else {
                return true;
            }
        }
        return false;
    }
}
