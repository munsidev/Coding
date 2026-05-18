import java.util.HashMap;

public class Service {
    private HashMap<String, Double> groceries = new HashMap<>();
    private HashMap<String, Double> medicines = new HashMap<>();

    public Service() {
        groceries.put("Apples", 300.0);
        groceries.put("Bananas", 5.0);
        groceries.put("Milk", 60.0);
        groceries.put("Bread", 20.0);

        medicines.put("Paracetamol", 2.0);
        medicines.put("Aspirin", 5.0);
        medicines.put("VitaminC", 10.0);
        medicines.put("Antibiotic", 35.0);
    }

    public HashMap<String, Double> getGroceries() {
        return groceries;
    }

    public HashMap<String, Double> getMedicines() {
        return medicines;
    }
}
