import java.util.Scanner;

public class q4 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int[] numbers = new int[n];

        for (int i = 0; i < n; i++) {
            numbers[i] = input.nextInt();
        }

        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (numbers[i] > numbers[j]) {
                    int temp = numbers[i];
                    numbers[i] = numbers[j];
                    numbers[j] = temp;
                }
            }
        }

        boolean[] visited = new boolean[n];
        for (int i = 0; i < n; i++) {
            if (!visited[i]) {
                int count = 1;
                for (int j = i + 1; j < n; j++) {
                    if (numbers[i] == numbers[j]) {
                        count++;
                        visited[j] = true;
                    }
                }
                visited[i] = true;
                System.out.println(numbers[i] + " -> " + count);
            }
        }

        input.close();
    }
}
