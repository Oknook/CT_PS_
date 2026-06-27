import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        int[] arr1 = new int[3];
        int[] arr2 = new int[3];
        StringTokenizer st = new StringTokenizer(br.readLine());
        for (int i = 0; i < 3; i++) {
            arr1[i] = Integer.parseInt(st.nextToken());
        }
        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < 3; i++) {
            arr2[i] = Integer.parseInt(st.nextToken());
        }

        int ans = 0;
        for (int i = 1; i <= N; i++) {
            for (int j = 1; j <= N; j++) {
                for (int k = 1; k <= N; k++) {
                    boolean flag1 =
                        close(i, arr1[0], N) &&
                        close(j, arr1[1], N) &&
                        close(k, arr1[2], N);

                    boolean flag2 =
                        close(i, arr2[0], N) &&
                        close(j, arr2[1], N) &&
                        close(k, arr2[2], N);

                    if (flag1 || flag2) ans++;
                }
            }
        }
        System.out.println(ans);
    }
    static boolean close(int a, int b, int N) {
        int d = Math.abs(a - b);
        return Math.min(d, N - d) <= 2;
    }
}