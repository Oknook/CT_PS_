import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        int arr[] = new int[N];
        int sum = 0;
        for (int i = 0; i < N; i++) {
            arr[i] = Integer.parseInt(br.readLine());
            sum += arr[i];
        }
        Arrays.sort(arr);
        sum /= N;
        int ans = 0;
        for (int i = 0; i < N; i++) {
            if (arr[i] >= sum) break;
            ans += sum-arr[i];
        }
        System.out.println(ans);
    }
}