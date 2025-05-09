import java.io.*;
import java.util.*;

public class p17255 {

    static int length, left, right;
    static char [] N;
    static Set<String> ways = new HashSet<>();

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        String str = br.readLine();
        length = str.length();
        N = str.toCharArray();

        for (int i = 0; i < length; i++) {
            dfs(i, i, String.valueOf(N[i]), String.valueOf(N[i]));
        }

        System.out.println(ways.size());

    }

    public static void dfs(int left, int right, String str, String num) {

        // 완성
        if (left == 0 && right == length-1) {
            ways.add(String.valueOf(str));
            return;
        }

        // 왼쪽 추가
        if (left > 0) {
            String nextNum = N[left-1] + num;
            String way = str + " " + nextNum;
            dfs(left-1, right, way, nextNum);
        }

        // 오른쪽 추가
        if (right < length-1) {
            String nextNum = num + N[right+1];
            String way = str + " " + nextNum;
            dfs(left, right+1, way, nextNum);
        }

    }

}