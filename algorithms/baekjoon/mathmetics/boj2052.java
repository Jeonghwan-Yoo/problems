package mathmetics;

import java.io.FileInputStream;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.math.BigDecimal;

public class boj2052 {

    public static void main(String[] args) throws Exception {
        System.setIn(new FileInputStream("./input.txt"));
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();

        int N = Integer.parseInt(br.readLine());
        double num = 1.0;
        for (int i = 0; i < N; i++) {
            num /= 2;
        }
        sb.append(new BigDecimal(num).toPlainString());

        System.out.println(sb);
        br.close();
    }

}