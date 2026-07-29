import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        int[] origin = new int[N];
        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            origin[i] = Integer.parseInt(st.nextToken());
        }

        int ans = Integer.MAX_VALUE;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                int[] arr = new int[N-1];
                int idx = 0;
                for (int k = 0; k < N; k++) {
                    if (k == j) continue;
                    int tmp = origin[k];
                    if (k == i) tmp *= 2;
                    arr[idx++] = tmp;
                }
                int sum = 0;
                for (int k = 0; k < N - 2; k++) {
                    sum += Math.abs(arr[k] - arr[k + 1]);
                }
                ans = Math.min(ans, sum);
            }
        }
        System.out.println(ans);
    }
}