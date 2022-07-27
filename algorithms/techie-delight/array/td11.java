package array;

public class td11 {

    public static int findIndexOfZero(int[] A) {
        int lenA = A.length;
        int length = 0;

        int maxLength = 0;
        int maxIndex = -1;
        int prevZeroIndex = -1;

        for (int i = 0; i < lenA; i++) {
            if (A[i] == 1) {
                length++;
            } else {
                length = i - prevZeroIndex;
                prevZeroIndex = i;
            }

            if (maxLength < length) {
                maxLength = length;
                maxIndex = prevZeroIndex;
            }
        }

        return maxIndex;
    }

    public static void main(String[] args) {
        int[] A = { 0, 0, 1, 0, 1, 1, 1, 0, 1, 1 };
 
        int index = findIndexOfZero(A);
 
        if (index != -1) {
            System.out.print("Index to be replaced is " + index);
        }
        else {
            System.out.print("Invalid input");
        }
    }
}
