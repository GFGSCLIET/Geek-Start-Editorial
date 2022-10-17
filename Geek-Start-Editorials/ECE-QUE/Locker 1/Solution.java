import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        int s1,s2 = 0;
        int a[] = new int [n];
        
        for(int i=0;i<n-1;i++)
            a[i] = sc.nextInt();

        s1 = n*(n+1)/2;

        for(int i=0;i<n-1;i++)
            s2 += a[i];

        System.out.println(s1-s2);
    }
}
