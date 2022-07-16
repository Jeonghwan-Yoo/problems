package array;

import java.util.HashSet;
import java.util.Set;

public class td2 {

    public static boolean hasZeroSumSubarray(int nums[]) {
        int n = nums.length;
        for (int i = 0; i < n; i++) {
            int sum = 0;
            for (int j = i; j < n; j++) {
                sum += nums[j];
                if (sum == 0) {
                    return true;
                } 
            }
        }

        return false;
    }

    public static boolean hasZeroSumSubarray2(int nums[]) {
        Set<Integer> set = new HashSet<Integer>();
        set.add(0);

        int sum = 0;
        for (int num: nums) {
            sum += num;
            if (set.contains(sum)) {
                return true;
            }
            set.add(sum);
        }

        return false;
    }

    public static void main(String args[]) {
        int nums[] = { 4, -6, 3, -1, 4, 2, 7 };
 
        if (hasZeroSumSubarray2(nums)) {
            System.out.println("Subarray exists");
        }
        else {
            System.out.println("Subarray does not exist");
        }
    }
}