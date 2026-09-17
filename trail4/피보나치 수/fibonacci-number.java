import java.io.*;
import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(br.readLine());
        int a = 1;
        int b = 1;
        for (int i = 3; i <= N; i++) {
            int tmp = a + b;
            a = b;
            b = tmp;
        }
        System.out.println(b);
    }
}