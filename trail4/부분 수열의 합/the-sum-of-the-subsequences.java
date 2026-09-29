import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());
        int arr[] = new int[n];
        int dp[] = new int[m+1];
        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < n; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }
        Arrays.fill(dp, -1);
        dp[0] = 0;

        for (int i = 0; i < n; i++) {
            for (int j = m; j >= arr[i]; j--) {
                if (dp[j-arr[i]] != -1) {
                    dp[j] = Math.max(dp[j], dp[j-arr[i]]+1);
                }
            }
        }
        if (dp[m] == -1) System.out.println("No");
        else System.out.println("Yes");
    }
}