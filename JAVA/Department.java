public class Department {
    // Attributes
    private String deptName;
    private int deptCode;
    private String faculty;

    // Method to set values
    public void setValues(String deptName, int deptCode, String faculty) {
        this.deptName = deptName;
        this.deptCode = deptCode;
        this.faculty = faculty;
    }

    // Method to display values
    public void display() {
        System.out.println("Department Name: " + deptName);
        System.out.println("Department Code: " + deptCode);
        System.out.println("Faculty: " + faculty);
        System.out.println("--------------------------");
    }

    // main method
    public static void main(String[] args) {
        // Creating two Department objects
        Department d1 = new Department();
        Department d2 = new Department();

        // Setting values
        d1.setValues("Computer Science", 101, "Engineering");
        d2.setValues("English", 102, "Arts");

        // Displaying values
        d1.display();
        d2.display();
    }
}
