import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int arr[] = new int[3];
        for (int i = 0; i < 3; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }
        Arrays.sort(arr);
        if (arr[1]-arr[0] == 1 && arr[2]-arr[1] == 1) System.out.println(0);
        else if (arr[2]-arr[0] == 2 || arr[1]-arr[0] == 2 || arr[2]-arr[1] == 2) System.out.println(1);
        else System.out.println(2);
    }
}