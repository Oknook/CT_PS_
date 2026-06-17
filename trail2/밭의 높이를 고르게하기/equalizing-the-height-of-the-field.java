import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int H = Integer.parseInt(st.nextToken());
        int T = Integer.parseInt(st.nextToken());
        int arr[] = new int[N];
        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }

        int ans = Integer.MAX_VALUE;
        for (int i = 0; i <= N-T; i++) {
            int tmp = 0;
            for (int j = 0; j < T; j++) {
                tmp += Math.abs(arr[i+j] - H);
            }
            ans = Math.min(ans, tmp);
        }
        System.out.println(ans);
    }
}