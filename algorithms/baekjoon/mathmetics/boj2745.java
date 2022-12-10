package mathmetics;

import java.io.FileInputStream;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.util.StringTokenizer;

public class boj2745 {

    public static void main(String[] args) throws Exception {
        System.setIn(new FileInputStream("./input.txt"));
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();

        StringTokenizer st = new StringTokenizer(br.readLine());
        char[] N = st.nextToken().toCharArray();
        int B = Integer.parseInt(st.nextToken());
        int decimal = 0;
        int len = N.length;
        int mul = 1;
        for (int i = len - 1; i >= 0; i--) {
            decimal += mul * toNumber(N[i]);
            mul *= B;
        }
        sb.append(decimal);

        System.out.println(sb);
        br.close();
    }

    private static int toNumber(char c) {
        int ret = 0;
        if ('A' <= c && c <= 'Z') {
            ret += 10 + c - 'A';
        } else {
            ret += c - '0';
        }
        return ret;
    }

}