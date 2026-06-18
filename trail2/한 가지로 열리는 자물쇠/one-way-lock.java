import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        StringTokenizer st = new StringTokenizer(br.readLine());
        int a = Integer.parseInt(st.nextToken());
        int b = Integer.parseInt(st.nextToken());
        int c = Integer.parseInt(st.nextToken());

        int cnt = 0;
        for (int i = 1; i <= N; i++) {
            if (Math.abs(i - a) <= 2) continue;

            for (int j = 1; j <= N; j++) {
                if (Math.abs(j - b) <= 2) continue;

                for (int k = 1; k <= N; k++) {
                    if (Math.abs(k - c) <= 2) continue;

                    cnt++;
                }
            }
        }

        System.out.println(N*N*N - cnt);
    }
}