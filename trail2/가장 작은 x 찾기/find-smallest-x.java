import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        boolean arr[] = new boolean[5001];

        for (int i = 1; i <= N; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine());
            int left = Integer.parseInt(st.nextToken());
            int right = Integer.parseInt(st.nextToken());

            double stand = Math.pow(2, i);
            for (int j = 0; j < (int)Math.ceil(left/stand); j++) {
                if (!arr[j]) arr[j] = true;
            }
            for (int j = (int)Math.floor(right/stand)+1; j < 5001; j++) {
                if (!arr[j]) arr[j] = true;
            }
        }
        for (int i = 0; i < 5001; i++) {
            if (!arr[i]) {
                System.out.println(i);
                break;
            }
        }
    }
}