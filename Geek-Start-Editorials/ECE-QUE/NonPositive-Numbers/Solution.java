import java.io.*;
import java.util.*;

public class Solution {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int n = input.nextInt();
        int a[] = new int[n];
        for(int i = 0 ;i < n; i++){
            a[i] = input.nextInt();
        }
        int count = 0;
        for(int i = 0 ;i < n; i++){
            if(a[i]<=0)
                count++;
        }
        System.out.println(count);
    }
}