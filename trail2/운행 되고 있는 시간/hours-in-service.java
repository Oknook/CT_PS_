import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        int arr[][] = new int[N][2];
        for (int i = 0; i < N; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            arr[i][0] = Integer.parseInt(st.nextToken());
            arr[i][1] = Integer.parseInt(st.nextToken());
        }

        int ans = 0;
        for (int i = 0; i < N; i++) {
            boolean[] bool = new boolean[1000];
            for (int j = 0; j < N; j++) {
                if (i==j) continue;
                for (int k = arr[j][0]; k < arr[j][1]; k++) {
                    bool[k] = true;
                }
            }
            int cnt = 0;
            for (int j = 0; j < 1000; j++) {
                if (bool[j]) cnt++;
            }
            ans = Math.max(ans, cnt);
        }

        System.out.println(ans);
    }
}