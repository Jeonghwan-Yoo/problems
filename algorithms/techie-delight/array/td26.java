package array;

public class td26 {
    
    private static void findLongestSequence(int[] A, int k) {
        int lenA = A.length;
        int leftIndex = 0;
        int count0 = 0;
        int maxCount1 = 0;
        int maxLeftIndex = 0;
        for (int i = 0; i < lenA; i++) {
            if (A[i] == 0) {
                count0++;
            }
            while (count0 > k) {
                if (A[leftIndex] == 0) {
                    count0--;
                }
                leftIndex++;
            }
            int count1 = i - leftIndex + 1;
            if (maxCount1 < count1) {
                maxCount1 = count1;
                maxLeftIndex = leftIndex;
            }
        }

        System.out.println("The longest sequence has length " + maxCount1 + " from index " + maxLeftIndex + " to " + (maxLeftIndex + maxCount1 - 1));
    }

    public static void main(String[] args) {
        int[] A = { 1, 1, 0, 1, 1, 0, 1, 1, 1, 1, 0, 0 };
        int k = 2;
 
        findLongestSequence(A, k);
    }

}