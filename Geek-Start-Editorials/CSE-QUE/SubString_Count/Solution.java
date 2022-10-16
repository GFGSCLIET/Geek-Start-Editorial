import java.io.*;
import java.util.*;

public class Solution {
    
    static long substrCount (String s, int k) {
      return solve(s,k)-solve(s,k-1);
    }
    
    static long solve(String s, int k) {
        int i=0,j=0,size=0,n=s.length();
        long ans=0;
        int[] map = new int[26];
        while(j<n) {
            char cha = s.charAt(j);
            if(map[cha-'a']==0) size++;
            map[cha-'a']++;
            while(size>k) {
                char chr = s.charAt(i);
                map[chr-'a']--;
                if(map[chr-'a']==0) size--;
                i++;
            }
            ans+=j-i+1;
            j++;
        }
        return ans;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        String s = sc.next();
        int n = sc.nextInt();
        if (n==0)
        {
            System.out.println(0);
        }
        else
            System.out.println(substrCount(s,n));
        
    }
}
