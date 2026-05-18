import java.util.ArrayList;

public class Cart {
    private ArrayList<Item> items = new ArrayList<>();

    public void addItem(Item item) {
        items.add(item);
    }

    public void removeItem(String name) {
        items.removeIf(item -> item.getName().equalsIgnoreCase(name));
    }

    public ArrayList<Item> getItems() {
        return items;
    }

    public double getTotalAmount() {
        return items.stream().mapToDouble(Item::getTotal).sum();
    }

    public boolean isEmpty() {
        return items.isEmpty();
    }

    public void clearCart() {
        items.clear();
    }
}
