import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int n = Integer.parseInt(st.nextToken());
        int m = Integer.parseInt(st.nextToken());
        int arr[] = new int[n];
        int pattern[] = new int[m];
        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < n; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }
        st = new StringTokenizer(br.readLine());
        for (int i = 0; i < m; i++) {
            pattern[i] = Integer.parseInt(st.nextToken());
        }
        Arrays.sort(pattern);

        int ans = 0;
        for (int i = 0; i < n-m+1; i++) {
            int[] tmp = Arrays.copyOfRange(arr, i, i+m);
            Arrays.sort(tmp);
            if (Arrays.equals(tmp, pattern)) ans++;
        }

        System.out.println(ans);
    }
}