package array;

import java.util.Arrays;

public class td8 {
    // Counting sort
    public static void countingSort(int[] A) {
        int n = A.length;
        int[] bucket = new int[3];
        
        for (int i = 0; i < n; i++) {
            bucket[A[i]]++;
        }

        int index = 0;
        for (int i = 0; i <= 2; i++) {
            int count = bucket[i];
            for (int j = 0; j < count; j++) {
                A[index] = i;
                index++;
            }
        }
    }

    private static void swap(int[] A, int i, int j) {
        int tmp = A[i];
        A[i] = A[j];
        A[j] = tmp;
    }

    public static void threeWayPartition(int[] A) {
        int start = 0;
        int mid = 0;
        int end = A.length - 1;
        int pivot = 1;
        while (mid <= end) {
            int val = A[mid];
            if (val < pivot) {
                swap(A, start, mid);
                start++;
                mid++;
            } else if (val == pivot) {
                mid++;
            } else {
                swap(A, mid, end);
                end--;
            }
        }
    }
    
    public static void main(String[] args) {
        int[] A = { 0, 1, 2, 2, 1, 0, 0, 2, 0, 1, 1, 0 };
 
        countingSort(A);
        threeWayPartition(A);
        System.out.println(Arrays.toString(A));
    }
}
