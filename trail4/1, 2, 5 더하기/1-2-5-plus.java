import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int dp[] = new int[n+1];
        Arrays.fill(dp, 1);
        for (int i = 2; i <= n; i++) {
            dp[i] = (dp[i-1]+dp[i-2])%10007;
            if (i >= 5) dp[i] = (dp[i]+dp[i-5])%10007;
        }
        System.out.println(dp[n]);
    }
}