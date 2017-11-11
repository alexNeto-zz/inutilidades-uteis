import javax.swing.JOptionPane;

public class MediaDeTres {

	public static void main(String[] args) {
		String nome  = JOptionPane.showInputDialog("Digite o nome do aluno");
		double notaTotal = 0;
		for (int i = 0; i < 3; i++) {
			int notaParcial = Integer.parseInt(JOptionPane.showInputDialog("Digite a " + (i + 1) + "nota"));
			notaTotal += notaParcial;
		}
		notaTotal /= 3;
		if (notaTotal > 7) JOptionPane.showMessageDialog(null, nome + "Aprovado");
		else if (notaTotal >= 5 && notaTotal <= 6.99) JOptionPane.showMessageDialog(null, nome + "Média");
		else JOptionPane.showMessageDialog(null,nome + "Recuperação");
	}

}