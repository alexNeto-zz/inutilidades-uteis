import javax.swing.JOptionPane;

public class ClassificaCrianca {

  public static void main(String[] args) {
    int idade = Integer.parseInt(JOptionPane.showInputDialog("Digitre a idade:"));
    switch (idade) {
    case 0:
    case 1:
      JOptionPane.showMessageDialog(null, "Berçário");
      break;
    case 2:
    case 3:
      JOptionPane.showMessageDialog(null, "Infantil I");
      break;
    case 4:
    case 5:
      JOptionPane.showMessageDialog(null, "Infantil II");
      break;
    default:
      JOptionPane.showMessageDialog(null, "Pré");
      break;
    }
  }
}