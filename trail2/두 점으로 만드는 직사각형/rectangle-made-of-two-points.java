import java.util.*;
import java.io.*;

public class Main {
    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int row[] = new int[4];
        int col[] = new int[4];
        StringTokenizer st = new StringTokenizer(br.readLine());
        row[0] = Integer.parseInt(st.nextToken());
        col[0] = Integer.parseInt(st.nextToken());
        row[1] = Integer.parseInt(st.nextToken());
        col[1] = Integer.parseInt(st.nextToken());
        st = new StringTokenizer(br.readLine());
        row[2] = Integer.parseInt(st.nextToken());
        col[2] = Integer.parseInt(st.nextToken());
        row[3] = Integer.parseInt(st.nextToken());
        col[3] = Integer.parseInt(st.nextToken());
        Arrays.sort(row);
        Arrays.sort(col);
        System.out.println((row[3]-row[0])*(col[3]-col[0]));
    }
}