import java.io.*;
import java.util.*;

public class p02294 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());

        int n = Integer.parseInt(st.nextToken());
        int k = Integer.parseInt(st.nextToken());
        int [] prices = new int[n];
        for (int i = 0; i < n; i++) {
            prices[i] = Integer.parseInt(br.readLine());
        }
        Arrays.sort(prices);

        int [] res = new int[k+1];
        for (int i=prices[0]; i<=k; i++) {

            int min = -1;

            // 나누어 떨어질 경우
            for (int j=0; j<n; j++) {
                if (i % prices[j] == 0) {
                    if (min == -1) min = i / prices[j];
                    else min = Math.min(min, i / prices[j]);
                }
            }

            // 조합 확인
            for (int j=i-1; j>=prices[0]; j--) {
                if (res[j] > 0) {
                    int remainder = i - j;
                    if (res[remainder] > 0) {
                        if (min != -1) min = Math.min(res[j] + res[remainder], min);
                        else min = res[j] + res[remainder];
                    }
                }
            }

            res[i] = min;

        }

        System.out.println(res[k]);

    }
}