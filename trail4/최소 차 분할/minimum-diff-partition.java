import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int N = Integer.parseInt(br.readLine());

        StringTokenizer st = new StringTokenizer(br.readLine());

        int[] arr = new int[N];
        int total = 0;

        for (int i = 0; i < N; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
            total += arr[i];
        }

        boolean[] dp = new boolean[total + 1];
        dp[0] = true;

        for (int num : arr) {
            for (int sum = total; sum >= num; sum--) {
                if (dp[sum - num]) {
                    dp[sum] = true;
                }
            }
        }

        int answer = Integer.MAX_VALUE;

        for (int sum = 1; sum < total; sum++) {
            if (dp[sum]) {
                answer = Math.min(answer, Math.abs(total - 2 * sum));
            }
        }

        System.out.println(answer);
    }
}