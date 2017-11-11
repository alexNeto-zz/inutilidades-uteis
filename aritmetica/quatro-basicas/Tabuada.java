import javax.swing.JOptionPane;

public class Tabuada {

  public static void main(String[] args) {
    int numero = Integer.parseInt(JOptionPane.showInputDialog("Digite o valor da tabuada desejada:"));
    for (int i = 0; i < 11; i++) {
      System.out.println(i + " * " + numero + " = " + (numero * i));
    }
  }
}