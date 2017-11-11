import javax.swing.JOptionPane;

public class ConverteParaDolar {

  public static void main(String[] args) {
    double valorDolar = Double.parseDouble(JOptionPane.showInputDialog("Digite o valor do dolar"));
    double valorDigitado = Double.parseDouble(JOptionPane.showInputDialog("Digite o valor a converter"));
    valorDigitado /= valorDolar;
    JOptionPane.showMessageDialog(null, "O valor em dolar é R$: " + valorDigitado);
  }
}