import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int[] arr = new int[n + 1];
        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 1; i <= n; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }

        int[][] dp = new int[n+1][4];
        for (int[] row : dp) {
            Arrays.fill(row, -1);
        }
        dp[0][0] = 0;

        for (int i = 1; i <= n; i++) {
            for (int k = 0; k <= 3; k++) {
                if (i >= 2 && dp[i - 2][k] != -1) {
                    dp[i][k] = Math.max(dp[i][k], dp[i - 2][k] + arr[i]);
                }
                if (k >= 1 && dp[i - 1][k - 1] != -1) {
                    dp[i][k] = Math.max(dp[i][k], dp[i - 1][k - 1] + arr[i]);
                }
            }
        }

        int ans = -1;
        for (int k = 0; k <= 3; k++) {
            ans = Math.max(ans, dp[n][k]);
        }

        System.out.println(ans);
    }
}