import javax.swing.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class ContactFormShowInfoButtonAction implements ActionListener {
    JFrame contactFormFrame;

    public ContactFormShowInfoButtonAction(JFrame contactFormFrame) {
        this.contactFormFrame = contactFormFrame;
    }

    public void actionPerformed(ActionEvent e) {
        this.contactFormFrame.setVisible(false);
        ContactView contactView = new ContactView();
        contactView.getFrame().setVisible(true);
    }
}