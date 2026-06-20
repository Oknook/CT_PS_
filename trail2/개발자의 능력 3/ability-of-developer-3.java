import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int arr[] = new int[6];
        int sum = 0;
        for (int i = 0; i < 6; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
            sum += arr[i];
        }

        int ans = Integer.MAX_VALUE;
        for (int i = 0; i < 4; i++) {
            for (int j = i+1; j < 5; j++) {
                for (int k = j+1; k < 6; k++) {
                    ans = Math.min(ans, Math.abs(sum - 2*(arr[i]+arr[j]+arr[k])));
                }
            }
        }

        System.out.println(ans);
    }
}