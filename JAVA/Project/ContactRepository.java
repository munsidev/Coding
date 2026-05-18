import java.io.*;

public class ContactRepository {
    private static final String FILENAME = "contacts.txt";

    private static File getDataSource() {
        final File file = new File(FILENAME);
        if (!file.exists()) {
            try {
                file.createNewFile();
            } catch (IOException e) {
                System.out.println("Error creating file: " + FILENAME + ": " + e.getMessage());
            }
        }
        return file;
    }

    public static void insert(Contact contact) {
        FileWriter writer = null;
        try {
            writer = new FileWriter(getDataSource(), true);
            writer.write(format(contact) + "\n");
        } catch (IOException e) {
            System.out.println("Error writing to file: " + FILENAME + ": " + e.getMessage());
        } finally {
            if (writer != null) {
                try {
                    writer.close();
                } catch (IOException e) {
                    System.out.println("Error closing file: " + FILENAME + ": " + e.getMessage());
                }
            }
        }
    }

    public static Contact[] getAll() {
        int len = getTotalNumberOfContacts();
        int counter = 0;
        Contact[] contacts = new Contact[len];
        FileReader reader = null;
        BufferedReader bufferedReader = null;
        try {
            reader = new FileReader(getDataSource());
            bufferedReader = new BufferedReader(reader);
            String line;
            while ((line = bufferedReader.readLine()) != null) {
                String[] words = line.split(",");
                if (words.length == 5) {
                    String name = words[0];
                    String phone = words[1];
                    String email = words[2];
                    String address = words[3];
                    String occupation = words[4];
                    contacts[counter++] = new Contact(name, phone, email, address, occupation);
                }
            }
        } catch (IOException e) {
            System.out.println("Error getting file: " + FILENAME + ": " + e.getMessage());
        } finally {
            closeResources(reader, bufferedReader);
        }
        return contacts;
    }

    public static int getTotalNumberOfContacts() {
        int total = 0;
        FileReader reader = null;
        BufferedReader bufferedReader = null;
        try {
            reader = new FileReader(getDataSource());
            bufferedReader = new BufferedReader(reader);
            while (bufferedReader.readLine() != null) {
                total++;
            }
        } catch (IOException e) {
            System.out.println("Error getting file: " + FILENAME + ": " + e.getMessage());
        } finally {
            closeResources(reader, bufferedReader);
        }
        return total;
    }

    private static void closeResources(FileReader reader, BufferedReader bufferedReader) {
        if (bufferedReader != null) {
            try {
                bufferedReader.close();
            } catch (IOException e) {
                System.out.println("Error closing file: " + FILENAME + ": " + e.getMessage());
            }
        }
        if (reader != null) {
            try {
                reader.close();
            } catch (IOException e) {
                System.out.println("Error closing file: " + FILENAME + ": " + e.getMessage());
            }
        }
    }

    private static String format(Contact contact) {
        return contact.getName() + "," + contact.getPhone() + "," + contact.getEmail() + "," + contact.getAddress() + "," + contact.getOccupation();
    }
}