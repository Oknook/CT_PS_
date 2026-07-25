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
            boolean flag = true;
            for (int j = 0; j < N; j++) {
                if (i == j) continue;
                if (((arr[i][0] <= arr[j][0]) && (arr[i][1] >= arr[j][1]))
                || ((arr[i][0] >= arr[j][0]) && (arr[i][1] <= arr[j][1]))) {
                    flag = false;
                    break;
                }
            }
            if (flag) ans++;
        }
        System.out.println(ans);
    }
}