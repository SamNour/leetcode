fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
        let mut lp = 0;
        let mut rp = 0;
        let mut res: Vec<i32> = Vec::new();
        for i in 0..nums.len() {
            rp = lp + 1;
            for j in lp..nums.len()-1 {
                if nums[lp] + nums[rp] == target {
                    res.push(lp as i32);
                    res.push(rp as i32 );

                }
                rp += 1;
            }
                lp += 1;

        }
        res
    }
}
