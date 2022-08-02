
/*
 * Alonso Martins
 * 3 por 2
 * OBI2020 - fase 1
 */
import java.util.*;

public class tresPorDois {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int total = 0, n = in.nextInt();

        int[] chocolates = new int[n];

        for (int i = 0; i < n; i++) {

            chocolates[i] = in.nextInt();

        }
        Arrays.sort(chocolates);
        for (int i = 0; i < n / 2; i++) {
            int aux = chocolates[i];
            chocolates[i] = chocolates[n - i - 1];
            chocolates[n - i - 1] = aux;
        }
        for (int i = 0; i < n; i ++) {
            if ((i + 1) % 3 == 0)
                continue;
            total += chocolates[i];
        }

        System.out.println(total);

        in.close();
    }
}