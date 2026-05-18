import java.util.Scanner;

public class q6 {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);

        int n = scan.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = scan.nextInt();
        }

        int maxLength = 1;
        int currentLength = 1;

        for (int i = 1; i < n; i++) {
            if (arr[i] > arr[i - 1]) {
                currentLength++; 
                if (currentLength > maxLength) {
                    maxLength = currentLength;
                }
            } else {
                currentLength = 1; 
            }
        }

        System.out.println(maxLength);
        scan.close();

    }
}
