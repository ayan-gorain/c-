import java.util.ArrayList;

class Complete {
    public static ArrayList<Integer> array(int a[][], int b[], int n) {
        ArrayList<Integer> result = new ArrayList<>();
        
        // Sum of left diagonal elements
        int leftDiagonalSum = 0;
        for (int i = 0; i < n; i++) {
            leftDiagonalSum += a[i][i];
        }
        result.add(leftDiagonalSum);
        
        // Find maximum element in 1D array
        int maxElement = Integer.MIN_VALUE;
        for (int i = 0; i < n; i++) {
            if (b[i] > maxElement) {
                maxElement = b[i];
            }
        }
        result.add(maxElement);
        
        return result;
    }
    
    public static void main(String[] args) {
        int arr[][] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
        int brr[] = {3, 6, 9};
        int N = 3;
        
        ArrayList<Integer> result = array(arr, brr, N);
        for (int num : result) {
            System.out.print(num + " ");
        }
    }
}
