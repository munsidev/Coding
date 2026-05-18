import javax.swing.*;

public class ContactForm {
    private JFrame frame;
    private JPanel panel;
    private JTextField nameField;
    private JTextField phoneField;
    private JTextField emailField;
    private JTextField addressField;
    private JTextField occupationField;
    private JButton submitButton;
    private JButton showInfoButton;

    public ContactForm() {
        frame = new JFrame("Contact Entry Form");
        frame.setSize(800, 500);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        panel = new JPanel();
        panel.setLayout(null);

        JLabel nameLabel = new JLabel("Name:");
        nameLabel.setBounds(10, 10, 80, 30);
        panel.add(nameLabel);

        nameField = new JTextField();
        nameField.setBounds(100, 10, 200, 30);
        panel.add(nameField);

        JLabel phoneLabel = new JLabel("Phone:");
        phoneLabel.setBounds(10, 50, 80, 30);
        panel.add(phoneLabel);

        phoneField = new JTextField();
        phoneField.setBounds(100, 50, 200, 30);
        panel.add(phoneField);

        JLabel emailLabel = new JLabel("Email:");
        emailLabel.setBounds(10, 90, 80, 30);
        panel.add(emailLabel);

        emailField = new JTextField();
        emailField.setBounds(100, 90, 200, 30);
        panel.add(emailField);

        JLabel addressLabel = new JLabel("Address:");
        addressLabel.setBounds(10, 130, 80, 30);
        panel.add(addressLabel);

        addressField = new JTextField();
        addressField.setBounds(100, 130, 200, 30);
        panel.add(addressField);

        JLabel occupationLabel = new JLabel("Occupation:");
        occupationLabel.setBounds(10, 170, 80, 30);
        panel.add(occupationLabel);

        occupationField = new JTextField();
        occupationField.setBounds(100, 170, 200, 30);
        panel.add(occupationField);

        submitButton = new JButton("Submit");
        submitButton.setBounds(100, 210, 100, 30);
        submitButton.addActionListener(new ContactFormSubmitButtonAction(nameField, phoneField, emailField, addressField, occupationField));
        panel.add(submitButton);

        showInfoButton = new JButton("ShowInfo");
        showInfoButton.setBounds(210, 210, 100, 30);
        showInfoButton.addActionListener(new ContactFormShowInfoButtonAction(frame));
        panel.add(showInfoButton);

        frame.add(panel);
    }

    public JFrame getFrame() {
        return frame;
    }
}