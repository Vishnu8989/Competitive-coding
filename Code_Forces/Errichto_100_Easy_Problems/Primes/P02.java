import java.util.ArrayList;
import java.util.Scanner;

public class P02 {

    public static boolean primeFactors(int n) {
        ArrayList<Integer> factors = new ArrayList<Integer>();
        while (n % 2 == 0) {
            if (!factors.contains(2)) {
                factors.add(2);
            }
            n /= 2;
        }
        for (int i = 3; i <= n; i += 2) {
            while (n % i == 0) {
                if (!factors.contains(i)) {
                    factors.add(i);
                }
                n /= i;
            }
        }
        if (factors.size() == 2) {
            return true;
        }
        return false;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        sc.close();
        int tot = 0;
        for (int i = 4; i < a + 1; i++) {
            if (primeFactors(i)) {
                tot += 1;
            }
        }
        System.out.println(tot);
    }
}
