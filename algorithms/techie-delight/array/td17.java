package array;

import java.util.Arrays;

public class td17 {
    public static void reorder(int[] A) {
        int n = A.length;
        
        int index = 0;
        for (int a : A) {
            if (a != 0) {
                A[index] = a;
                index++;
            }
        }
        for (int i = index; i < n; i++) {
            A[i] = 0;
        }
    }

    // Partitioning logic of quicksort
    public static void swap(int[] A, int i, int j) {
        int tmp = A[i];
        A[i] = A[j];
        A[j] = tmp;
    }

    public static void reorder2(int[] A) {
        int n = A.length;

        int j = 0;
        for (int i = 0; i < n; i++) {
            if (A[i] != 0) {
                swap(A, i, j);
                j++;
            }
        }
    }

    public static void main(String[] args) {
            int[] A = { 6, 0, 8, 2, 3, 0, 4, 0, 1 };
     
            reorder2(A);
            System.out.println(Arrays.toString(A));
    }
}
