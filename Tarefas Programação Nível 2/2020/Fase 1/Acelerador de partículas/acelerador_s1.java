
/*
 * Alonso Martins.
 * Acelerador de partículos
 * OBI2020 - Fase 1
 */
import java.util.*;

public class acelerador_s1 {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int d = in.nextInt();

        System.out.println((d - 3) % 8 == 3 ? 1 : (d - 3) % 8 == 4 ? 2 : 3);

        in.close();
    }
}
