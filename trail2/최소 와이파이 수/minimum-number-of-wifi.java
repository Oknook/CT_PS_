import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        st = new StringTokenizer(br.readLine());
        boolean home[] = new boolean[N];
        for (int i = 0; i < N; i++) {
            home[i] = st.nextToken().equals("1");
        }

        int ans = 0;
        for (int i = 0; i < N; i++) {
            if (home[i]) {
                ans += 1;
                for (int j = i; j < N && j <= i + 2*M; j++) {
                    home[j] = false;
                }
            }
        }
        System.out.println(ans);
    }
}