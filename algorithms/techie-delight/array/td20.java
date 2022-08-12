package array;

public class td20 {

    public static int getMaxDiff(int[] A) {
        int n = A.length;
        if (n < 2) {
            return -2;
        }

        int maxDiff = -1;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                int diff = A[j] - A[i];
                if (maxDiff < diff) {
                    maxDiff = diff;
                }
            }
        }
        return maxDiff;
    }

    public static int getMaxDiff2(int[] A) {
        int n = A.length;
        if (n < 2) {
            return -2;
        }

        int maxDiff = -1;
        int maxValue = A[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            if (maxValue <= A[i]) {
                maxValue = A[i];
            } else {
                maxDiff = Math.max(maxDiff, maxValue - A[i]);
            }
        }

        return maxDiff;
    }

    public static void main(String[] args) {
        int[] A = { 2, 7, 9, 5, 1, 3, 5 };
 
        int diff = getMaxDiff2(A);
        if (diff > 0) {
            System.out.print("The maximum difference is " + diff);
        }
    }
}
