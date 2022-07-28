package array;

import java.util.ArrayList;
import java.util.Collections;
import java.util.List;
import java.util.stream.IntStream;

public class td14 {

    // Linear time 
    public static void findEquilibriumIndex(int[] A) {
        int lenA = A.length;
        int[] sum = new int[lenA];
        sum[0] = 0;
        for (int i = 1; i < lenA; i++) {
            sum[i] = sum[i - 1] + A[i - 1];
        }
        
        int rightSum = 0;
        List<Integer> indexList = new ArrayList<Integer>();

        for (int i = lenA - 1; i >= 0; i--) {
            if (sum[i] == rightSum) {
                indexList.add(i);
            }

            rightSum += A[i];
        }

        Collections.reverse(indexList);
        System.out.println("Equilibrium Index found at " + indexList);
    }
    
    // Optimized
    public static void findEquilibriumIndex2(int[] A) {
        int sum = IntStream.of(A).sum();
        int lenA = A.length;
        
        
        int rightSum = 0;
        List<Integer> indexList = new ArrayList<Integer>();
        
        for (int i = lenA - 1; i >= 0; i--) {
            if (rightSum == sum - rightSum - A[i]) {
                indexList.add(i);
            }
            
            rightSum += A[i];
        }
        
        Collections.reverse(indexList);
        System.out.println("Equilibrium Index found at " + indexList);
    }

    public static void main(String[] args) {
        int[] A = { 0, -3, 5, -4, -2, 3, 1, 0 };
 
        findEquilibriumIndex(A);
        findEquilibriumIndex2(A);
    }
}
