import java.io.*;

public class p11727 {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        // n = 1일 때
        if (n==1) {
            System.out.println(1);
            return;
        }

        // n > 1일 때
        int [] res = new int[n];
        res[0] = 1;
        res[1] = 3;

        for (int i=2; i<n; i++) {
            res[i] = ( res[i-1] + 2 * res[i-2] ) % 10007;
        }

        System.out.println(res[n-1]);

    }
}