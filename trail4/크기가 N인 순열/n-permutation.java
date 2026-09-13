import java.io.*;
import java.util.*;

public class Main {
    static boolean[] visit;
    static int[] arr;
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        visit = new boolean[N];
        arr = new int[N];
        perm(0);
    }
    static void perm(int index) {
        if (arr[arr.length-1] != 0) {
            for (int i = 0; i < arr.length; i++) {
                System.out.print(arr[i]+" ");
            }
            System.out.println();
            return;
        }
        for (int i = 0; i < visit.length; i++) {
            if (!visit[i]) {
                arr[index] = i+1;
                visit[i] = true;
                perm(index+1);
                arr[index] = 0;
                visit[i] = false;
            }
        }
    }
}