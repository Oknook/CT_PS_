import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int arr[] = new int[7];
        for (int i = 0; i < 7; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }
        Arrays.sort(arr);
        int a = arr[0];
        int b = arr[1];
        int c = arr[6] - a - b;
        System.out.println(a+" "+b+" "+c);
    }
}