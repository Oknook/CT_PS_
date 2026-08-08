import java.io.*;
import java.util.*;

public class Main {
    public static int n;
    public static int k;
    public static int[] arr;

    public static boolean isPossible(int maxVal) {
        int[] availableIndices = new int[n];
        int cnt = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] <= maxVal) {
                availableIndices[cnt++] = i;
            }
        }

        if (arr[0] > maxVal || arr[n - 1] > maxVal) {
            return false;
        }

        for (int i = 1; i < cnt; i++) {
            int dist = availableIndices[i] - availableIndices[i - 1];

            if (dist > k) {
                return false;
            }
        }

        return true;
    }

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        StringTokenizer st = new StringTokenizer(br.readLine());

        n = Integer.parseInt(st.nextToken());
        k = Integer.parseInt(st.nextToken());

        arr = new int[n];

        st = new StringTokenizer(br.readLine());

        for (int i = 0; i < n; i++) {
            arr[i] = Integer.parseInt(st.nextToken());
        }

        int answer = Integer.MAX_VALUE;

        for (int maxVal = 1; maxVal <= 100; maxVal++) {
            if (isPossible(maxVal)) {
                answer = Math.min(answer, maxVal);
            }
        }

        System.out.println(answer);
    }
}