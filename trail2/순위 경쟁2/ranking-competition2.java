import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        int A = 0;
        int B = 0;
        int prev = 0;
        int ans = 0;

        for (int i = 0; i < N; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());

            char C = st.nextToken().charAt(0);
            int d = Integer.parseInt(st.nextToken());

            if (C == 'A') {
                A += d;
            } else {
                B += d;
            }

            int current = Integer.compare(A, B);

            if (prev != current) {
                ans++;
                prev = current;
            }
        }

        System.out.println(ans);
    }
}