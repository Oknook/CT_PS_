import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int str[][] = new int[n][2];
        for (int i = 0; i < n; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            str[i][0] = Integer.parseInt(st.nextToken());
            str[i][1] = Integer.parseInt(st.nextToken());
        }
        Arrays.sort(str, (a, b) -> {
            if (a[1] == b[1]) return a[0]-b[0];
            else return a[1]-b[1];
        });

        int ans = 0;
        int dp[] = new int[n+1];
        for (int i = 0; i < n; i++) {
            dp[i] = 1;
            for (int j = 0; j < i; j++) {
                if (str[j][1] < str[i][0]) {
                    dp[i] = Math.max(dp[i], dp[j] + 1);
                }
            }
            ans = Math.max(ans, dp[i]);
        }
        System.out.println(ans);
    }
}