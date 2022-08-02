
/*
 * Alonso Martins
 * Fotografia
 * OBI2020 - Fase 2
 */
import java.util.*;

public class fotografia {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int A = in.nextInt(), L = in.nextInt(); // dimensões da fotografia
        int N = in.nextInt();                   // quantidade de molduras disponíveis
        int melhor = -1;                        // identificador da melhor moldura
        int areaMel = -1;                       // a menor área da moldura não ocupada pela fotografia

        for (int i = 0; i < N; i++) {

            int molL = in.nextInt(), molA = in.nextInt(); // leitura das dimensoes da i-ésima moldura

            if (A <= molA && L <= molL || A <= molL && L <= molA) { // checa se a fotografia cabe na moldura

                int areaMol = molL * molA - L * A; // area da i-ésima moldura não ocupada pela fotografia

                if (areaMel >= 0) {

                    if (areaMol < areaMel) {

                        areaMel = areaMol;
                        melhor = i + 1;

                    }
                } else {

                    melhor = i + 1;
                    areaMel = areaMol;

                }
            }
        }

        System.out.println(melhor);

        in.close();
    }
}
