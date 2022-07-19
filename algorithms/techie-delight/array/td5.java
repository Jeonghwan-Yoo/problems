package array;

import java.util.HashMap;
import java.util.Map;

public class td5 {

    public static void findMaxLenSubarray(int nums[], int target) {
        int maxLen = 0;
        int maxLenLastIndex = -1;
        int numsLen = nums.length;
        for (int i = 0; i < numsLen; i++) {
            int sum = 0;

            for (int j = i; j < numsLen; j++) {
                sum += nums[j];
                if (sum == target) {
                    int len = j - i + 1;
                    if (maxLen < len) {
                        maxLen = len;
                        maxLenLastIndex = j;
                    }
                }
            }
        }
        System.out.println("[" + (maxLenLastIndex - maxLen + 1)
        + ", " + maxLenLastIndex + "]");
    }
    
    public static void findMaxLenSubarray2(int nums[], int target) {
        Map<Integer, Integer> map = new HashMap<Integer, Integer>();
        map.put(0, -1);
        int maxLen = 0;
        int maxLenLastIndex = -1;
        int numsLen = nums.length;
        int sum = 0;
        for (int i = 0; i < numsLen; i++) {
            sum += nums[i];
            map.putIfAbsent(sum, i);
            if (map.containsKey(sum - target) == true) {
                int len = i - map.get(sum - target);
                if (maxLen < len) {
                    maxLen = len;
                    maxLenLastIndex = i;
                }
            }
        }
        System.out.println("[" + (maxLenLastIndex - maxLen + 1)
        + ", " + maxLenLastIndex + "]");
    }

    public static void main(String args[]) {
        int nums[] = { 5, 6, -5, 5, 3, 5, 3, -2, 0 };
        int target = 8;

        findMaxLenSubarray(nums, target);
        findMaxLenSubarray2(nums, target);
    }
}
