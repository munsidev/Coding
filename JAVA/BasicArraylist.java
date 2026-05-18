import java.util.ArrayList;

public class BasicArraylist {
    public static void main(String[] args) {
        ArrayList<Integer> n = new ArrayList<>();
        n.add(10);
        n.add(20);
        n.add(30);

        System.out.println("After adding: " + n);
        int value = n.get(1);
        System.out.println("Element at index 1: " + value);

        n.set(1, 25);
        System.out.println("setting 25 at index 1: " + n);

        n.remove(0);
        System.out.println("After removing at index 0: " + n);
        System.out.println("Size of list: " + n.size());

        n.clear();
        System.out.println("After clearing: " + n);
    }
}
