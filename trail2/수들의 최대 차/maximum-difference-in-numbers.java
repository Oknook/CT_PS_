import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int K = Integer.parseInt(st.nextToken());

        int arr[] = new int[N];
        for (int i = 0; i < N; i++) {
            arr[i] = Integer.parseInt(br.readLine());
        }
        Arrays.sort(arr);
        
        int ans = 0;
        for (int i = 0; i < N; i++) {
            int cnt = 0;
            for (int j = i; j < N; j++) {
                if (arr[j]-arr[i] > K) break;
                cnt++;
            }
            ans = Math.max(ans, cnt);
        }
        System.out.println(ans);
    }
}