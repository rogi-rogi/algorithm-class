import java.io.*;
import java.util.*;

public class p01149 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st;

        int N = Integer.parseInt(br.readLine());
        int [][] prices = new int[N+1][4];
        int [][] res = new int[N+1][4];

        for (int i=1; i<=N; i++) {
            st = new StringTokenizer(br.readLine());
            for (int k=1; k<4; k++) {
                prices[i][k] = Integer.parseInt(st.nextToken());
            }
        }

        res[1][1] = prices[1][1];
        res[1][2] = prices[1][2];
        res[1][3] = prices[1][3];

        for (int i=2; i<=N; i++) {
            res[i][1] = Math.min(res[i-1][2]+prices[i][1], res[i-1][3]+prices[i][1]);
            res[i][2] = Math.min(res[i-1][1]+prices[i][2], res[i-1][3]+prices[i][2]);
            res[i][3] = Math.min(res[i-1][1]+prices[i][3], res[i-1][2]+prices[i][3]);
        }

        System.out.println( Math.min ( Math.min(res[N][1], res[N][2]), res[N][3]) );

    }
}