import java.util.Scanner;

public class temp {

    public static void main(String[] args) {

        // Scanner sc = new Scanner(System.in);
        // int n = sc.nextInt();
        int n = 3;
        for (int i = n; i >= 1; i--) {
            for (int j = n-i; j >= 1; j--) {
                for (int k = n; k >= 1; k--) {
                    System.out.print((j) + " ");
                }
            }
            System.out.println();
        }
    }
}
