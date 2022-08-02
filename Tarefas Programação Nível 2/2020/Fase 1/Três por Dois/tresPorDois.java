
/*
 * Alonso Martins
 * 3 por 2
 * OBI2020 - Fase 1
 */
import java.util.*;

public class tresPorDois {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int total = 0;
        int N = in.nextInt(); // número de chocolates escolhidos

        int[] precos = new int[N]; // vetor com o preço de cada chocolate

        for (int i = 0; i < N; i++) {

            precos[i] = in.nextInt();

        }

        Arrays.sort(precos);

        for (int i = 0; i < N / 2; i++) { // ordenar os preços em ordem decrescente

            int temp = precos[i]; // variável temporária

            precos[i] = precos[N - i - 1];
            precos[N - i - 1] = temp;

        }

        for (int i = 0; i < N; i++) {

            if ((i + 1) % 3 == 0) // não considerar o preço de cada 3° chocolate
                continue;

            total += precos[i];
        }

        System.out.println(total);

        in.close();
    }
}
