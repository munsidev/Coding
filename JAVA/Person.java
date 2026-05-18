import java.util.ArrayList;

class Person {
    private String name;
    private int age;

    public Person(String name, int age) {
        this.name = name;
        this.age = age;
    }
    public void display() {
        System.out.println("Name: " + name + ", Age: " + age);
    }
    public static void main(String[] args) {
        ArrayList<Person> people = new ArrayList<Person>();

        people.add(new Person("Alice", 22));
        people.add(new Person("Bob", 28));
        people.add(new Person("Charlie", 19));

        for(int j=0;j<people.size();j++)
        {
            people.get(j).display();
        }

        /*for (Person i : people) {
            i.display();
        }*/
    }
}
