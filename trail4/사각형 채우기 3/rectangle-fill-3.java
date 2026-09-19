import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        long[] dp = new long[n + 1];
        dp[0] = 1;
        dp[1] = 2;
        if (n >= 2) {
            dp[2] = 7;
        }
        long sum = 0;
        for (int i = 3; i <= n; i++) {
            sum += dp[i-3] % 1000000007;
            dp[i] = (2*dp[i-1] + 3*dp[i-2] + 2*sum) % 1000000007;
        }
        System.out.println(dp[n]);
    }
}