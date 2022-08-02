
/*
 * Alonso Martins
 * Estrada
 * OBI2020 - Fase 2
 */
import java.util.*;

public class estrada {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int T = in.nextInt(); // comprimento total da estrada
        int N = in.nextInt(); // número de cidades pelas quais a estrada vai passar

        double sumViz = 0.0; // soma das vizinhanças 

        int[] dCentros = new int[N]; // distâncias dos centros das cidades até a fronteira oeste

        double[] vizinhancas = new double[N]; // vetor com todas as vizinhanças de estrada

        for (int i = 0; i < N; i ++) {

            dCentros[i] = in.nextInt();

        }

        Arrays.sort(dCentros);

        for (int i = 0; i < N-1; i ++) {

            vizinhancas[i] = (dCentros[i] + dCentros[i+1]) / 2.0 - sumViz;
            sumViz += vizinhancas[i];

        }

        vizinhancas[N-1] = T - sumViz;

        Arrays.sort(vizinhancas); // ordena o vetor de vizinhas para que a menor vizinhança de estrada esteja no primeiro índice do vetor

        System.out.printf("%.2f\n", vizinhancas[0]);

        in.close();
    }
}
