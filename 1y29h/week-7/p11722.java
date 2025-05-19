import java.io.*;
import java.util.*;

public class p11722 {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        if (N==1) {
            System.out.println(1);
            return;
        }

        StringTokenizer st = new StringTokenizer(br.readLine());
        int [] A = new int[N+1];
        int [] length = new int[N+1];
        for (int i = 1; i <= N; i++) {
            A[i] = Integer.parseInt(st.nextToken());
            length[i] = 1;
        }

        int max = 1;
        for (int i = 2; i <= N; i++) {
            for (int k = 1; k < i; k++) {
                if (A[i] < A[k]) {
                    if (length[k] + 1 > length[i])
                        length[i] = length[k] + 1;
                }
            }
            if (length[i] > max) max = length[i];
        }

        System.out.println(max);

    }
}