import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int arr[] = new int[n];
        
        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 0; i < n; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }

        int ans[] = new int[n];
        Arrays.fill(ans, 1);
        for (int i = 0; i < n-1; i++) {
            for (int j = i+1; j < n; j++) {
                if (arr[j] > arr[i]) {
                    ans[j] = Math.max(ans[j], ans[i]+1);
                }
            }
        }

        int res = 0;
        for (int i : ans) {
            res = Math.max(res, i);
        }
        System.out.println(res);
    }
}