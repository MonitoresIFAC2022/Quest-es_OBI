
/*
 * Alonso Martins
 * Ralouim
 * OBI2020 - Fase 1
 * (Obs: Os resultados nem sempre são corretos)
 */
import java.util.*;

public class ralouim {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int N = in.nextInt(); // número de tendas
        int guloseimas = 0; // maior número de guloseimas que Pedrinho pode ganhar
        int tendaAtual = 0; // tenda atual em que Pedrinho está
        int tendaMaisLonge = 0; // tenda mais longe da tenda atual

        double maiorD = 0.0; 
        double dAnterior = 0.0;
        int X = 0, Y = 1;

        double[][] tendas = new double[N][2]; // coordenadas de cada tenda

        for (int i = 0; i < N; i++) {

            for (int j = 0; j < 2; j++) {

                tendas[i][j] = in.nextDouble();

            }

            double x = tendas[i][X];
            double y = tendas[i][Y];
            double d = Math.sqrt(x * x + y * y);

            if (d > maiorD) {

                maiorD = d;
                tendaMaisLonge = i;

            }

        }

        tendaAtual = tendaMaisLonge;
        dAnterior = maiorD;
        guloseimas++;
        System.out.println("Maior d: "+maiorD);

        while (true) {

            maiorD = 0.0;

            for (int i = 0; i < N; i++) {

                double x0 = tendas[tendaAtual][X];
                double y0 = tendas[tendaAtual][Y];
                double x1 = tendas[i][X];
                double y1 = tendas[i][Y];

                double d = Math.sqrt((x1 - x0) * (x1 - x0) + (y1 - y0) * (y1 - y0));
                System.out.println("i: "+i+" -> "+d);
                if (d > maiorD && d < dAnterior) {

                    maiorD = d;
                    tendaMaisLonge = i;

                }
                System.out.println("Maior d: "+maiorD);

            }

            if (maiorD == 0)
                break;

            dAnterior = maiorD;
            tendaAtual = tendaMaisLonge;
            guloseimas++;

        }

        System.out.println(guloseimas);

        in.close();
    }
}
