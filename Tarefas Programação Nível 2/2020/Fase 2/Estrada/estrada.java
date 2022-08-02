
/*
 * Alonso Martins
 * Estrada
 * OBI2020 - Fase 2
 */
import java.util.*;

public class estrada {
    
    public static void main(String[] args) {
        
        Scanner in = new Scanner(System.in);
         
        int T = in.nextInt(), N = in.nextInt();
        double sumViz = 0.0; 
        int[] dCentros = new int[N];
        double[] vizinhancas = new double[N];
        for (int i = 0; i < N; i ++) {
            dCentros[i] = in.nextInt();
        }
        Arrays.sort(dCentros);
        for (int i = 0; i < N-1; i ++) {
            vizinhancas[i] = (dCentros[i] + dCentros[i+1]) / 2.0 - sumViz;
            sumViz += vizinhancas[i];
        }
        vizinhancas[N-1] = T - vizinhancas[N-2];
        Arrays.sort(vizinhancas);
        System.out.printf("%.2f\n", vizinhancas[0]);
        in.close();
    }
}
