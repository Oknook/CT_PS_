import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int K = Integer.parseInt(st.nextToken());
        int arr[] = new int[10001];
        for (int i = 0; i < N; i++) {
            st = new StringTokenizer(br.readLine());
            int index = Integer.parseInt(st.nextToken());
            int tmp = st.nextToken().charAt(0)=='G'?1:2;
            arr[index] = tmp;
        }
        int ans = 0;
        for (int i = 1; i <= 10000-K; i++) {
            int tmp = 0;
            for (int j = 0; j <= K; j++) {
                tmp += arr[i+j];
            }
            ans = Math.max(ans, tmp);
        }
        System.out.println(ans);
    }
}