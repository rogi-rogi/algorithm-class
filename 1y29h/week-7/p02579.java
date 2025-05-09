import java.io.*;

public class p02579 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int stairsNum = Integer.parseInt(br.readLine());

        if (stairsNum == 1) {
            System.out.println(br.readLine());
            return;
        }

        int [] stairs = new int[stairsNum+1];
        int [] max = new int[stairsNum+1];

        stairs[0] = 0;
        for (int i = 1; i <= stairsNum; i++) {
            stairs[i] = Integer.parseInt(br.readLine());
        }

        max[1] = stairs[1];
        max[2] = stairs[1] + stairs[2];

        for (int i=3; i<=stairsNum; i++) {

            int num1 = max[i-2] + stairs[i];
            int num2 = max[i-3] + stairs[i-1] + stairs[i];

            if (num1 > num2) max[i] = num1;
            else max[i] = num2;

        }

        System.out.println(max[stairsNum]);

    }
}