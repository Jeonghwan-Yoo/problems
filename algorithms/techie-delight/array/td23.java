package array;

import java.util.Arrays;

public class td23 {

    public static int kadane(int[] A) {
        int sum = 0;
        int maxSum = 0;
        for (int a : A) {
            sum += a;
            sum = Integer.max(sum, 0);
            maxSum = Integer.max(maxSum, sum);
        }

        return maxSum;
    }

    public static int runCircularKadane(int[] A) {
        int n = A.length;
        if (n <= 0) {
            return 0;
        }

        int maxVal = Arrays.stream(A).max().getAsInt();
        if (maxVal < 0) {
            return maxVal;
        }

        Arrays.setAll(A, i -> -A[i]);

        int negativeMaxVal = kadane(A);
        
        Arrays.setAll(A, i -> -A[i]);

        return Integer.max(kadane(A), Arrays.stream(A).sum() + negativeMaxVal);
    }

    public static void main(String[] args) {
        int[] A = { 2, 1, -5, 4, -3, 1, -3, 4, -1 };
 
        System.out.println("The sum of the subarray with the largest sum is " + runCircularKadane(A));
    }
}
