
/*
 * Alonso Martins
 * Acelerador de partículos
 * OBI2020 - Fase 1
 */
import java.util.*;

public class acelerador_s2 {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int d = (in.nextInt() - 3) % 8;

        System.out.println(d == 3 ? 1 : d == 4 ? 2 : 3);

        in.close();
    }
}
