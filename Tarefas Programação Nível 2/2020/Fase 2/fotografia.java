
/*
 * Alonso Martins
 * Fotografia
 * OBI2020 - Fase 2
 */
import java.util.*;

public class fotografia {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int A = in.nextInt(), L = in.nextInt(), N = in.nextInt(), melhor = -1, areaMel = -1;
        int[][] molduras = new int[N][2];
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < 2; j++)
                molduras[i][j] = in.nextInt();
        }
        for (int i = 0; i < N; i++) {
            int molL = molduras[i][0], molA = molduras[i][1];
            if (A <= molA && L <= molL || A <= molL && L <= molA) {
                int areaMol = molL * molA - L * A;
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
