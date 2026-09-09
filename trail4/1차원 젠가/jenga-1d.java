import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int arr[] = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = Integer.parseInt(br.readLine());
        }

        for (int i = 0; i < 2; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int a = Integer.parseInt(st.nextToken())-1;
            int b = Integer.parseInt(st.nextToken())-1;
            for (int j = a; j < n - (b-a+1); j++) {
                arr[j] = arr[j+(b-a+1)];
            }
            n -= b-a+1;
        }

        System.out.println(n);
        for (int i = 0; i < n; i++) {
            System.out.println(arr[i]);
        }
    }
}