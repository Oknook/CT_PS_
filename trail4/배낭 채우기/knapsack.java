import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());
        int jewel[][] = new int[n][2];
        int dp[] = new int[m+1];
        for (int i = 0; i < n; i++) {
            st = new StringTokenizer(br.readLine());
            jewel[i][0] = Integer.parseInt(st.nextToken());
            jewel[i][1] = Integer.parseInt(st.nextToken());
        }
        Arrays.fill(dp, -1);
        dp[0] = 0;

        for (int i = 0; i < n; i++) {
            for (int j = m; j >= jewel[i][0]; j--) {
                if (dp[j-jewel[i][0]] != -1) {
                    dp[j] = Math.max(dp[j], dp[j-jewel[i][0]]+jewel[i][1]);
                }
            }
        }
        int ans = dp[m];
        for (int i = m-1; i >= 0; i--) {
            ans = Math.max(ans, dp[i]);
        }
        System.out.println(ans);
    }
}