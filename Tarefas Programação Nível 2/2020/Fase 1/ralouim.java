
/*
 * Alonso Martins
 * Ralourim
 * OBI2020 - fase 1
 */
import java.util.*;

public class ralouim {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int n = in.nextInt(), doces = 0;
        int tendaAtual = 0;
        int tendaMaisLonge = 0;

        double maiorD = 0.0;
        double dAnterior = 0.0;

        double[][] tendas = new double[n][2];

        for (int i = 0; i < n; i++) {

            for (int j = 0; j < 2; j++) {

                tendas[i][j] = in.nextDouble();

            }

            double x = tendas[i][0];
            double y = tendas[i][1];
            double d = Math.sqrt(x * x + y * y);

            if (d > maiorD) {

                maiorD = d;
                tendaMaisLonge = i;

            }

        }

        tendaAtual = tendaMaisLonge;
        dAnterior = maiorD;
        doces++;
        System.out.println("Maior d: "+maiorD);

        while (true) {

            maiorD = 0.0;

            for (int i = 0; i < n; i++) {

                double x0 = tendas[tendaAtual][0];
                double y0 = tendas[tendaAtual][1];
                double x1 = tendas[i][0];
                double y1 = tendas[i][1];

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
            doces++;

        }

        System.out.println(doces);

        in.close();
    }
}