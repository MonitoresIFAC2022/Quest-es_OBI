
/*
 * Alonso Martins
 * Dona formiga (maior número de salões)
 * OBI2020 - Fase 2
 * (Obs: Incompleto)
 */
import java.util.*;

public class formiga {

    public static Map<Integer, Integer> alturaS = new HashMap<Integer, Integer>();
    public static Map<Integer, ArrayList<Integer>> tuneis = new HashMap<Integer, ArrayList<Integer>>();

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int n = in.nextInt(), t = in.nextInt(), p = in.nextInt();

        for (int i = 1; i <= n; i++) {
            int altura = in.nextInt();
            alturaS.put(i, altura);
        }

        for (int i = 0; i < t; i++) {
            Integer t0 = in.nextInt(), t1 = in.nextInt();
            Integer key = alturaS.get(t0) > alturaS.get(t1) ? t0 : t1;
            Integer value = alturaS.get(t0) > alturaS.get(t1) ? t1 : t0;
            if (alturaS.get(key) > alturaS.get(p)) continue;
            if (tuneis.containsKey(key)) {
                tuneis.get(key).add(value);
            } else {
                ArrayList<Integer> aux = new ArrayList<Integer>();
                aux.add(value);
                tuneis.put(key, aux);
            }
        }

        int cont;

        if (tuneis.containsKey(p))
            cont = deslizar(p) - 1;
        else
            cont = 0;

        System.out.println(cont);

        in.close();
    }

    public static int deslizar(Integer p) {

        int s = 0;

        if (!tuneis.containsKey(p))
            return 1;

        for (Integer t : tuneis.get(p)) {

            int a = deslizar(t);

            if (a > s)
                s = a;

        }

        return s + 1;
    }
    
}
