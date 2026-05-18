import javax.swing.*;

public class ContactView {
    private JFrame frame;
    private JPanel panel;
    private JTextArea contactTextArea;
    private JButton returnButton;

    public ContactView() {
        frame = new JFrame("Contact Records");
        frame.setSize(800, 500);
        frame.setDefaultCloseOperation(JFrame.DISPOSE_ON_CLOSE);
        panel = new JPanel();
        panel.setLayout(null);

        contactTextArea = new JTextArea();
        contactTextArea.setEditable(false);
        contactTextArea.setBounds(10, 10, 760, 400);
        panel.add(contactTextArea);

        returnButton = new JButton("Return");
        returnButton.setBounds(10, 420, 100, 30);
        returnButton.addActionListener(new ContactViewReturnButtonAction(frame));
        panel.add(returnButton);

        frame.add(panel);
        loadContactData();
    }

    private void loadContactData() {
        Contact[] contacts = ContactRepository.getAll();
        if (contacts.length == 0) {
            contactTextArea.setText("No contact records found.");
        } else {
            String text = "";
            for (int i = 0; i < contacts.length; i++) {
                text = text + "Name: " + contacts[i].getName() +
                       ", Phone: " + contacts[i].getPhone() +
                       ", Email: " + contacts[i].getEmail() +
                       ", Address: " + contacts[i].getAddress() +
                       ", Occupation: " + contacts[i].getOccupation() +
                       "\n";
            }
            contactTextArea.setText(text);
        }
    }

    public JFrame getFrame() {
        return frame;
    }
}