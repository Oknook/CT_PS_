import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int M = Integer.parseInt(st.nextToken());
        int jewel[][] = new int[N][2];
        for (int i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine());
            jewel[i][0] = Integer.parseInt(st.nextToken());
            jewel[i][1] = Integer.parseInt(st.nextToken());
        }
        int dp[] = new int[M+1];
        Arrays.fill(dp, 0);

        for (int i = 0; i < N; i++) {
            for (int j = 0; j <= M; j++) {
                if (j >= jewel[i][0]) {
                    dp[j] = Math.max(dp[j], dp[j-jewel[i][0]]+jewel[i][1]);
                }
            }
        }
        int ans = 0;
        for (int i = 1; i <= M; i++) {
            ans = Math.max(ans, dp[i]);
        }
        System.out.println(ans);
    }
}