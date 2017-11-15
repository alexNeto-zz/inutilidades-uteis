
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class ExpressoesRegulares {

  public static void main(String[] args) {

    String msg = "x:343.43y:454.65angulo:45.76velocidade:12.43estaAtivo:trueid:4tiroX:345.65tiroY:234.54tiroAngulo:12.43";
    StringBuffer stringBuffer = new StringBuffer();

    stringBuffer.append("(x:)").append("(\\d+\\.\\d+)");
    stringBuffer.append("(y:)").append("(\\d+\\.\\d+)");
    stringBuffer.append("(angulo:)").append("(\\d+\\.\\d+)");
    stringBuffer.append("(velocidade:)").append("(\\d+\\.\\d+)");
    stringBuffer.append("(estaAtivo:)").append("(true|false)");
    stringBuffer.append("(id:)").append("(\\d+)");
    stringBuffer.append("(tiroX:)").append("(\\d+\\.\\d+)");
    stringBuffer.append("(tiroY:)").append("(\\d+\\.\\d+)");
    stringBuffer.append("(tiroAngulo:)").append("(\\d+\\.\\d+)");

    Pattern padrao = Pattern.compile(stringBuffer.toString());
    Matcher combina = padrao.matcher(msg);
    if (combina.find()) {
      System.out.println("x: " + combina.group(2));
      System.out.println("y: " + combina.group(4));
      System.out.println("angulo: " + combina.group(6));
      System.out.println("velocidade: " + combina.group(8));
      System.out.println("estaAtivo: " + combina.group(10));
      System.out.println("id: " + combina.group(12));
      System.out.println("tiroX: " + combina.group(14));
      System.out.println("tiroY: " + combina.group(16));
      System.out.println("tiroAngulo: " + combina.group(18));
    }
  }
}