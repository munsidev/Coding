//1042
import java.util.Scanner;

public class check {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int a = scanner.nextInt();
        int b = scanner.nextInt();
        int c = scanner.nextInt();

        int _a = a, _b = b, _c = c;
        int temp;

        if (a > b) {
            temp = a;
            a = b;
            b = temp;
        }

        if (b > c) {
            temp = b;
            b = c;
            c = temp;
        }

        if (a > b) {
            temp = a;
            a = b;
            b = temp;
        }

        System.out.printf("%d\n%d\n%d\n\n", a, b, c);
        System.out.printf("%d\n%d\n%d\n", _a, _b, _c);
        scanner.close();
    }
}
