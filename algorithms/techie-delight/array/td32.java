package array;

public class td32 {

    public static int findMaxSum(int[] X, int[] Y) {
        int xLen = X.length;
        int yLen = Y.length;

        int sum = 0;
        int xSum = 0;
        int ySum = 0;
        int xIndex = 0;
        int yIndex = 0;
        
        while (xIndex < xLen && yIndex < yLen) {
            while (xIndex < xLen - 1 && X[xIndex] == X[xIndex + 1]) {
                xSum += X[xIndex];
                xIndex++;
            }
            while (yIndex < yLen - 1 && Y[yIndex] == Y[yIndex + 1]) {
                ySum += Y[yIndex];
                yIndex++;
            }
            if (X[xIndex] > Y[yIndex]) {
                ySum += Y[yIndex];
                yIndex++;
            } else if (X[xIndex] < Y[yIndex]) {
                xSum += X[xIndex];
                xIndex++;
            } else {
                sum += Math.max(xSum, ySum) + X[xIndex];
                xSum = ySum = 0;
                xIndex++;
                yIndex++;
            }
        }
        while (xIndex < xLen) {
            xSum += X[xIndex];
            xIndex++;
        }
        while (yIndex < yLen) {
            ySum += Y[yIndex];
            yIndex++;
        }
        sum += Math.max(xSum, ySum);

        return sum;
    }

    public static void main(String[] args) {
        int[] X = { 3, 6, 7, 8, 10, 12, 15, 18, 100 };
        int[] Y = { 1, 2, 3, 5, 7, 9, 10, 11, 15, 16, 18, 25, 50 };
        
        System.out.println("The maximum sum is " + findMaxSum(X, Y));
    }
}
