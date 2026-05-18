import javax.swing.*;
import java.awt.event.*;
import java.io.*;


public class ContactBook {
	public static void main(String[] args) {
		ContactForm cf = new ContactForm();
		cf.getFrame().setVisible(true);
	}
}


abstract class BaseForm {
	protected JFrame jf;
	protected JPanel jp;

	public JFrame getFrame() {
		return jf;
	}

	public JPanel getPanel() {
		return jp;
	}
}


class ContactForm extends BaseForm {

	private JLabel nameLabel;
	private JLabel phoneLabel;
	private JLabel emailLabel;
	private JLabel addressLabel;
	private JLabel occupationLabel;

	private JTextField nameField;
	private JTextField phoneField;
	private JTextField emailField;
	private JTextField addressField;
	private JTextField occupationField;

	private JButton submitButton;
	private JButton showInfoButton;

	public ContactForm() {
		jf = new JFrame("Contact Form");
		jf.setSize(800, 500);
		jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

		jp = new JPanel();
		jp.setLayout(null);

		nameLabel = new JLabel("Name:");
		nameLabel.setBounds(50, 50, 80, 30);
		jp.add(nameLabel);

		nameField = new JTextField();
		nameField.setBounds(150, 50, 200, 30);
		jp.add(nameField);

		phoneLabel = new JLabel("Phone:");
		phoneLabel.setBounds(50, 90, 80, 30);
		jp.add(phoneLabel);

		phoneField = new JTextField();
		phoneField.setBounds(150, 90, 200, 30);
		jp.add(phoneField);

		emailLabel = new JLabel("Email:");
		emailLabel.setBounds(50, 130, 80, 30);
		jp.add(emailLabel);

		emailField = new JTextField();
		emailField.setBounds(150, 130, 200, 30);
		jp.add(emailField);

		addressLabel = new JLabel("Address:");
		addressLabel.setBounds(50, 170, 80, 30);
		jp.add(addressLabel);

		addressField = new JTextField();
		addressField.setBounds(150, 170, 200, 30);
		jp.add(addressField);

		occupationLabel = new JLabel("Occupation:");
		occupationLabel.setBounds(50, 210, 80, 30);
		jp.add(occupationLabel);

		occupationField = new JTextField();
		occupationField.setBounds(150, 210, 200, 30);
		jp.add(occupationField);

		submitButton = new JButton("Submit");
		submitButton.setBounds(150, 260, 100, 30);
		submitButton.addActionListener(new ContactAction(jf, nameField, phoneField, emailField, addressField, occupationField));
		jp.add(submitButton);

		showInfoButton = new JButton("Show Info");
		showInfoButton.setBounds(260, 260, 120, 30);
		showInfoButton.addActionListener(new ShowAction(jf));
		jp.add(showInfoButton);

		jf.add(jp);
	}
}


interface ActionHandler extends ActionListener {}


class ContactAction implements ActionHandler {

	private JFrame jf;
	private JTextField nameField;
	private JTextField phoneField;
	private JTextField emailField;
	private JTextField addressField;
	private JTextField occupationField;

	public ContactAction(JFrame jf, JTextField nameField, JTextField phoneField, JTextField emailField, JTextField addressField, JTextField occupationField) {
		this.jf = jf;
		this.nameField = nameField;
		this.phoneField = phoneField;
		this.emailField = emailField;
		this.addressField = addressField;
		this.occupationField = occupationField;
	}

	public void actionPerformed(ActionEvent ae) {
		File f = new File("contacts.txt");
		FileWriter fw = null;
		try {
			fw = new FileWriter(f, true);
			String line = nameField.getText() + "," + phoneField.getText() + "," + emailField.getText() + "," + addressField.getText() + "," + occupationField.getText() + "\n";
			fw.write(line);
		} catch(IOException ioe) {
			System.out.println("Error while writing to the file");
		} finally {
			try {
				if (fw != null) fw.close();
			} catch(Exception ex) {
				System.out.println("Error while closing the file");
			}
		}
	}
}


class ShowAction implements ActionHandler {

	private JFrame mainFrame;

	public ShowAction(JFrame mainFrame) {
		this.mainFrame = mainFrame;
	}

	public void actionPerformed(ActionEvent ae) {
		mainFrame.setVisible(false);
		ShowFrame sf = new ShowFrame(mainFrame);
		sf.getFrame().setVisible(true);
	}
}


class ShowFrame extends BaseForm {

	private JTextArea area;
	private JButton returnButton;

	public ShowFrame(JFrame mainFrame) {
		jf = new JFrame("Contact Info");
		jf.setSize(800, 500);
		jf.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

		jp = new JPanel();
		jp.setLayout(null);

		File f = new File("contacts.txt");
		FileReader fr = null;
		BufferedReader br = null;
		String data = "";

		try {
			fr = new FileReader(f);
			br = new BufferedReader(fr);
			String line;
			while((line = br.readLine()) != null) {
				String[] parts = line.split(",");
				if (parts.length == 5) {
					data += parts[0] + ", " + parts[1] + ", " + parts[2] + ", " + parts[3] + ", " + parts[4] + "\n";
				}
			}
		} catch(IOException ioe) {
			System.out.println("Error while reading from the file");
		}

		area = new JTextArea(data);
		area.setBounds(50, 50, 700, 300);
		jp.add(area);

		returnButton = new JButton("Return");
		returnButton.setBounds(50, 370, 100, 30);
		returnButton.addActionListener(new ActionListener() {
			public void actionPerformed(ActionEvent e) {
				jf.setVisible(false);
				mainFrame.setVisible(true);
			}
		});
		jp.add(returnButton);

		jf.add(jp);
	}
}
