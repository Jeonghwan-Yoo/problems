package mathmetics;

import java.io.FileInputStream;
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class boj18108 {

    public static void main(String[] args) throws Exception {
        System.setIn(new FileInputStream("./input.txt"));
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());
        System.out.println(N - 543);

        br.close();
    }

}