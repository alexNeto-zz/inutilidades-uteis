import javax.swing.JOptionPane;

public class VelocidadeMedia {

  public static void main(String[] args) {
    double vi;
    do {
      vi = Double.parseDouble(JOptionPane.showInputDialog("Digite a velocidade inicial"));
    } while (vi < 0);
    double tempo;
    do {
      tempo = Double.parseDouble(JOptionPane.showInputDialog("Digite o tempo"));
    } while (tempo < 0);
    double a = Double.parseDouble(JOptionPane.showInputDialog("Digite a aceleração"));
    JOptionPane.showMessageDialog(null, "A velocidade do objeto é: " + (vi + a * tempo));
  }

}