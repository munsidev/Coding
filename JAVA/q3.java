import java.util.*;

public class q3 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int n = input.nextInt();
        input.nextLine();

        String[] Lname = new String[n];
        double[] average = new double[n];

        for (int i = 0; i < n; i++) {
            String name = input.nextLine();
            int test = input.nextInt();
            double av = 0;

            for (int j = 0; j < test; j++) {
                int score = input.nextInt();
                av += score;
            }
            input.nextLine();

            average[i] = av / test;
            Lname[i] = name;
        }

       
        for (int k = 0; k < n - 1; k++) {
            for (int j = k + 1; j < n; j++) {
                if (average[k] < average[j]) {
                    double temp = average[k];
                    average[k] = average[j];
                    average[j] = temp;

                    String tempN = Lname[k];
                    Lname[k] = Lname[j];
                    Lname[j] = tempN;
                }
            }
        }

        System.out.println("Top student: " + Lname[0]);
        System.out.println("Sorted List:");
        for (int x = 0; x < n; x++) {
            System.out.printf("%s - %.1f\n", Lname[x], average[x]);
        }

        input.close();
    }
}
