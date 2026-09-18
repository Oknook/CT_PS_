import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int arr[] = new int[n+2];
        arr[0] = 1;
        for (int i = 0; i < n-1; i++) {
            arr[i+2] += arr[i]%10007;
            arr[i+3] += arr[i]%10007;
        }
        System.out.println(arr[n] % 10007);
    }
}