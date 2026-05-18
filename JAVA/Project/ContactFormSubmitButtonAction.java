import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class ContactFormSubmitButtonAction implements ActionListener {
    JTextField nameField;
    JTextField phoneField;
    JTextField emailField;
    JTextField addressField;
    JTextField occupationField;

    public ContactFormSubmitButtonAction(JTextField nameField, JTextField phoneField, JTextField emailField, JTextField addressField, JTextField occupationField) {
        this.nameField = nameField;
        this.phoneField = phoneField;
        this.emailField = emailField;
        this.addressField = addressField;
        this.occupationField = occupationField;
    }

    public void actionPerformed(ActionEvent e) {
        String name = nameField.getText().trim();
        String phone = phoneField.getText().trim();
        String email = emailField.getText().trim();
        String address = addressField.getText().trim();
        String occupation = occupationField.getText().trim();

        Contact contact = new Contact(name, phone, email, address, occupation);
        ContactRepository.insert(contact);

        nameField.setText("");
        phoneField.setText("");
        emailField.setText("");
        addressField.setText("");
        occupationField.setText("");
    }
}