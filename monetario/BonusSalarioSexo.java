import javax.swing.JOptionPane;

public class BonusSalarioSexo {

  public static void main(String[] args) {
    int idade = Integer.parseInt(JOptionPane.showInputDialog("Digite a idade"));
    String sexo = JOptionPane.showInputDialog("Digite o sexo:\nH para homem\nM para mulher");
    double salario = Double.parseDouble(JOptionPane.showInputDialog("Digite o salario"));
    switch (sexo) {
    case "H":
      if (idade < 30)
        salario += 50;
      else
        salario += 100;
      break;
    case "M":
      if (idade < 30)
        salario += 80;
      else
        salario += 250;
    default:
      JOptionPane.showMessageDialog(null, "Valor inválido");
      break;
    }
    JOptionPane.showMessageDialog(null, "Salário + bonus R$: " + salario);
  }
}