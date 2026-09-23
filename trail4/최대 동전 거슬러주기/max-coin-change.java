import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());
        int arr[] = new int[n];
        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < n; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }
        Arrays.sort(arr);

        int ans[] = new int[m+1];
        Arrays.fill(ans, -1);
        ans[0] = 0;

        for (int i = 1; i <= m; i++) {
            for (int j = 0; j < n; j++) {
                if (i >= arr[j] && ans[i - arr[j]] != -1) {
                    ans[i] = Math.max(ans[i], ans[i-arr[j]]+1);
                }
            }
        }
        System.out.println(ans[m]);
    }
}