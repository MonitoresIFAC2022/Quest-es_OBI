
/*
 * Alonso Martins
 * Rede social
 * OBI2020 - Fase 3
 */
import java.util.*;

public class rede {

    public static void main(String[] args) {

        Scanner in = new Scanner(System.in);

        int N = in.nextInt();   // número de mensagens postadas pelo usuário
        int FI = 0;             // fator de influência

        int[] msg = new int[N]; // vetor com os índices de repostagens da mensagem

        for (int i = 0; i < N; i++) {

            msg[i] = in.nextInt();

        }

        Arrays.sort(msg); // ordena os índices de repostagens do menor para o maior

        for (int i = 1; i <= N; i++) { // percorre o vetor em ordem reversa procurando os índices de repostagens maiores que o fator de influência 

            if (msg[N - i] >= i)
                FI = i;

        }

        System.out.println(FI);

        in.close();
    }
}
