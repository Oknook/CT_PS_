import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(br.readLine());
        int N = Integer.parseInt(st.nextToken());
        int budget = Integer.parseInt(st.nextToken());
        int students[] = new int[N];
        for (int i = 0; i < N; i++) {
            students[i] = Integer.parseInt(br.readLine());
        }

        int ans = 0;
        Arrays.sort(students);
        for (int i = 0; i < N; i++) {
            students[i] /= 2;
            int cnt = 0;
            int count = 0;
            for (int j = 0; j < N; j++) {
                cnt += students[j];
                count++;
                if (cnt > budget) break;
                else ans = Math.max(ans, count);
            }
            students[i] *= 2;
        }
        System.out.println(ans);
    }
}