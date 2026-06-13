import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        int arr[] = new int[N];
        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 0; i < N; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }
        int ans = 0;
        for (int i = 0; i < N; i++) {
            for (int j = i; j < N; j++) {
                double tmp = 0;
                for (int k = i; k <= j; k++) {
                    tmp += arr[k];
                }
                tmp = tmp / (j-i+1);
                for (int k = i; k <= j; k++) {
                    if (tmp == arr[k]) {
                        ans++;
                        break;
                    }
                }
            }
        }
        System.out.println(ans);
    }
}