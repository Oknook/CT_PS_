import java.io.*;
import java.util.*;

public class Main {
    static int[] arr;
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int K = Integer.parseInt(st.nextToken());
        int N = Integer.parseInt(st.nextToken());
        arr = new int[N];
        comb(K, N, 0);
    }
    static void comb(int k, int n, int cnt) {
        if (cnt >= n) {
            for (int d : arr) {
                System.out.print(d + " ");
            }
            System.out.println();
            return;
        }

        for (int i = 1; i <= k; i++) {
            arr[cnt] = i;
            comb(k, n, cnt+1);
        }
    }
}