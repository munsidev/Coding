import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class ContactViewReturnButtonAction implements ActionListener {
    JFrame contactViewFrame;

    public ContactViewReturnButtonAction(JFrame contactViewFrame) {
        this.contactViewFrame = contactViewFrame;
    }

    public void actionPerformed(ActionEvent e) {
        this.contactViewFrame.setVisible(false);
        ContactForm contactForm = new ContactForm();
        contactForm.getFrame().setVisible(true);
    }
}