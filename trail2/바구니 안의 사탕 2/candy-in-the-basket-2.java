import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        int k = Integer.parseInt(st.nextToken());
        int arr[] = new int[101];
        for (int i = 0; i < n; i++) {
            st = new StringTokenizer(br.readLine());
            int mount = Integer.parseInt(st.nextToken());
            int index = Integer.parseInt(st.nextToken());
            arr[index] += mount;
        }
        int ans = 0;
        if (k >= 50) {
            for (int i = 0; i <= 100; i++) {
                ans += arr[i];
            }
        }
        else {
            for (int i = 0; i < 100 - (2*k); i++) {
                int tmp = 0;
                for (int j = i; j <= i+2*k; j++) {
                    tmp += arr[j];
                }
                ans = Math.max(ans, tmp);
            }
        }
        System.out.println(ans);
    }
}