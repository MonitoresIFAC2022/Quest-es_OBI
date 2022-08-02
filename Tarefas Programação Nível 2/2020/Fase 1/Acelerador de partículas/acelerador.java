
/*
 * Alonso Martins
 * Acelerador de partículos
 * OBI2020 - Fase 1
 */
import java.util.*;

public class acelerador {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int D = in.nextInt(); // distância total percorrida pela partícula
        /*
         * A partícula dará X voltas no acelarador (que está a 3 km do emissor)
         * e o resto da distância será o ponto onde a partícula irá parar
         */
        int voltas = (D - 3) / 8;
        int resto = D - 3 - (voltas * 8);

        if (resto == 3)
            System.out.println(1);
        else if (resto == 4)
            System.out.println(2);
        else
            System.out.println(3);

        in.close();
    }
}
