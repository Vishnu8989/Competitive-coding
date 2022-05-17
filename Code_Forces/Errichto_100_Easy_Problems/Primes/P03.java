import java.util.Scanner;
import java.lang.Math;

public class P03 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        sc.close();
        a = a + 1;
        int[] d = new int[a];
        for (int i = 0; i < a; i++) {
            d[i] = -1;
        }
        int b = (int) Math.sqrt(a) + 1;
        for (int i = 2; i < b; i++) {
            for (int j = i * i; j < a; j = j + i) {
                d[j] = 0;
            }
        }
        int tot = 0;
        for (int i = 2; i < a; i++) {
            if (d[i] != 0) {
                tot += 1;
            }
        }
        System.out.println(tot);
        for (int i = 2; i < a; i++) {
            if (d[i] != 0) {
                System.out.print(i + " ");
            }
        }
    }

}
