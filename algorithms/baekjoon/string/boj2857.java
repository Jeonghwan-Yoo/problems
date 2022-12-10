package string;

import java.io.FileInputStream;
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class boj2857 {

    public static void main(String[] args) throws Exception {
        System.setIn(new FileInputStream("./input.txt"));
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();

        for (int i = 0; i < 5; i++) {
            String name = br.readLine();
            if (name.contains("FBI")) {
                sb.append(i + 1).append(" ");
            }
        }
        if (sb.length() == 0) {
            sb.append("HE GOT AWAY!");
        }

        System.out.println(sb);
        br.close();
    }

}