package array;

import java.util.HashMap;
import java.util.HashSet;
import java.util.Map;
import java.util.Set;

public class td29 {
    public static void findSubarray(int[] nums, int target) {
        int len = nums.length;
        for (int i = 0; i < len; i++) {
            int sum = 0;
            for (int j = i; j < len; j++) {
                sum += nums[j];
                if (sum == target) {
                    System.out.printf("Subarray found [%d–%d]", i, j);
                    return;
                }
            }
        }
    }

    // sliding window
    public static void findSubarray2(int[] nums, int target) {
        int len = nums.length;
        for (int sz = 1; sz < len; sz++) {
            int sum = 0;
            int start = 0;
            int end = 0;
            while (end < sz) {
                sum += nums[end];
                if (sum == target) {
                    System.out.printf("Subarray found [%d–%d]", start, end);
                    return;
                }
                end++;
            }
            while (end < len) {
                sum += nums[end] - nums[start];
                start++;
                if (sum == target) {
                    System.out.printf("Subarray found [%d–%d]", start, end);
                    return;
                }
                end++;
            }
        }
    }

    // hashing
    public static void findSubarray3(int[] nums, int target) {
        Set<Integer> set = new HashSet<Integer>();
        
        int sum = 0;
        set.add(sum);
        for (int num: nums) {
            sum += num;
            if (set.contains(sum - target)) {
                System.out.println("Subarray with the given sum exists");
                return;
            }
            set.add(sum);
        }
        System.out.println("Subarray with the given sum does not exist");
    }

    // hashing
    public static void findSubarray4(int[] nums, int target) {
        int len = nums.length;
        Map<Integer, Integer> map = new HashMap<Integer, Integer>();
        
        int sum = 0;
        map.put(sum, -1);
        for (int i = 0; i < len; i++) {
            sum += nums[i];
            if (map.containsKey(sum - target)) {
                System.out.printf("Subarray found [%d–%d]", map.get(sum - target) + 1, i);
                return;
            }
            map.put(sum, i);
        }
        System.out.println("Subarray with the given sum does not exist");
    }

    public static void main(String[] args)
    {
        int[] nums = { 0, 5, -7, 1, -4, 7, 6, 1, 4, 1, 10 };
        int target = 15;
 
        findSubarray4(nums, target);
    }
}