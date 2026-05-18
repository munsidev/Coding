import java.util.Scanner;

public class q5 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[][] matrix = new int[n][n];

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matrix[i][j] = input.nextInt();
            }
        }

        int Sum1 = 0;
        int Sum2 = 0;

        for (int i = 0; i < n; i++) {
            Sum1 += matrix[i][i];
            Sum2 += matrix[i][n - 1 - i];
        }

        int difference =Math.abs(Sum1 - Sum2);
        System.out.println(difference);
        input.close();

    }
}
