import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.util.Map;

public class Main {
    private static Cart cart = new Cart();
    private static Service service = new Service();

    public static void main(String[] args) {
        JFrame frame = new JFrame("EasyCheckout");
        frame.setSize(400, 400);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLayout(new GridLayout(10, 1));

        JButton btnViewGroceries = new JButton("View Grocery Items");
        JButton btnAddGrocery = new JButton("Add Grocery to Cart");
        JButton btnViewMedicines = new JButton("View Medicine Items");
        JButton btnAddMedicine = new JButton("Add Medicine to Cart");
        JButton btnViewCart = new JButton("View Cart");
        JButton btnRemoveItem = new JButton("Remove Item from Cart");
        JButton btnPlaceOrder = new JButton("Place Order");
        JButton btnFeedback = new JButton("Give Feedback");
        JButton btnMedicalServices = new JButton("Medical Services");
        JButton btnExit = new JButton("Exit");

        frame.add(btnViewGroceries);
        frame.add(btnAddGrocery);
        frame.add(btnViewMedicines);
        frame.add(btnAddMedicine);
        frame.add(btnViewCart);
        frame.add(btnRemoveItem);
        frame.add(btnPlaceOrder);
        frame.add(btnFeedback);
        frame.add(btnMedicalServices);
        frame.add(btnExit);

        btnViewGroceries.addActionListener(e -> displayItems(service.getGroceries(), "Grocery Items"));
        btnAddGrocery.addActionListener(e -> addItem(service.getGroceries(), "Add Grocery Item"));
        btnViewMedicines.addActionListener(e -> displayItems(service.getMedicines(), "Medicine Items"));
        btnAddMedicine.addActionListener(e -> addItem(service.getMedicines(), "Add Medicine Item"));

        btnViewCart.addActionListener(e -> viewCart());
        btnRemoveItem.addActionListener(e -> removeItem());
        btnPlaceOrder.addActionListener(e -> placeOrder());
        btnFeedback.addActionListener(e -> collectFeedback());
        btnMedicalServices.addActionListener(e -> showMedicalServices());
        btnExit.addActionListener(e -> System.exit(0));

        frame.setVisible(true);
    }

    private static void displayItems(Map<String, Double> items, String title) {
        StringBuilder sb = new StringBuilder();
        for (String key : items.keySet()) {
            sb.append(key).append(" - ").append(items.get(key)).append("\n");
        }
        JOptionPane.showMessageDialog(null, sb.toString(), title, JOptionPane.INFORMATION_MESSAGE);
    }

    private static void addItem(Map<String, Double> items, String title) {
        String name = JOptionPane.showInputDialog(title + "\nEnter item name:");
        if (name == null || !items.containsKey(name)) {
            JOptionPane.showMessageDialog(null, "Invalid item name!");
            return;
        }
        int qty = Integer.parseInt(JOptionPane.showInputDialog("Enter quantity:"));
        cart.addItem(new Item(name, items.get(name), qty));
        JOptionPane.showMessageDialog(null, "Item added successfully.");
    }

    private static void viewCart() {
        if (cart.isEmpty()) {
            JOptionPane.showMessageDialog(null, "Your cart is empty.");
            return;
        }
        StringBuilder sb = new StringBuilder();
        for (Item item : cart.getItems()) {
            sb.append(item.getName()).append(" - ").append(item.getQuantity())
              .append(" x ").append(item.getPrice()).append(" = ").append(item.getTotal()).append("\n");
        }
        sb.append("\nTotal: ").append(cart.getTotalAmount());
        JOptionPane.showMessageDialog(null, sb.toString(), "Cart", JOptionPane.INFORMATION_MESSAGE);
    }

    private static void removeItem() {
        String name = JOptionPane.showInputDialog("Enter item name to remove:");
        cart.removeItem(name);
        JOptionPane.showMessageDialog(null, "Item removed (if existed).");
    }

    private static void placeOrder() {
        if (cart.isEmpty()) {
            JOptionPane.showMessageDialog(null, "Your cart is empty!");
            return;
        }
        String name = JOptionPane.showInputDialog("Enter your name:");
        String address = JOptionPane.showInputDialog("Enter your address:");
        String phone = JOptionPane.showInputDialog("Enter your phone:");

        StringBuilder sb = new StringBuilder();
        sb.append("Receipt for ").append(name).append("\n")
          .append("Address: ").append(address).append("\n")
          .append("Phone: ").append(phone).append("\n\n");

        for (Item item : cart.getItems()) {
            sb.append(item.getName()).append(" - ").append(item.getQuantity())
              .append(" x ").append(item.getPrice()).append(" = ").append(item.getTotal()).append("\n");
        }
        sb.append("\nTotal: ").append(cart.getTotalAmount());

        JOptionPane.showMessageDialog(null, sb.toString(), "Order Placed", JOptionPane.INFORMATION_MESSAGE);
        cart.clearCart();
    }

    private static void collectFeedback() {
        String feedback = JOptionPane.showInputDialog("Enter your feedback:");
        int rating = Integer.parseInt(JOptionPane.showInputDialog("Give rating (1-5):"));
        JOptionPane.showMessageDialog(null, "Thanks for your feedback!\nRating: " + rating);
    }

    private static void showMedicalServices() {
        JOptionPane.showMessageDialog(null, "Ambulance Service: Call 999\nEmergency Helpline: Call 999");
    }
}
