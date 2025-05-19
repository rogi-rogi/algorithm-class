import java.io.*;
import java.util.*;

public class p15988 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();
        int T = Integer.parseInt(br.readLine());

        int [] nums = new int[T+1];
        for (int i = 1; i <= T; i++) {
            nums[i] = Integer.parseInt(br.readLine());
        }

        int [] bigNums = Arrays.copyOf(nums, nums.length);
        Arrays.sort(bigNums);
        int [] res = new int[bigNums[T]+1];

        res[1] = 1;
        if (bigNums[T]>=2) res[2] = 2;
        if (bigNums[T]>=3) res[3] = 4;
        for (int i=4; i<=bigNums[T]; i++) {
            res[i] = (int)(((long)res[i-1] + res[i-2] + res[i-3])%1000000009);
        }

        for (int i=1; i<=T; i++) {
            sb.append(res[nums[i]] + "\n");
        }

        System.out.println(sb);

    }
}