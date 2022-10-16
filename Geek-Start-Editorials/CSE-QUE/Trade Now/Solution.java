import java.io.*; 
import java.util.*; 
 
public class Solution { 
 
    public static void main(String[] args) { 
        Scanner sc = new Scanner(System.in); 
        int p=0; 
        int n = sc.nextInt(); 
         
        int arr[] = new int[n]; 
        for(int i=0;i<n;i++) 
        { 
            arr[i] = sc.nextInt(); 
        } 
     
        for(int i=0;i<n;i++) 
        { 
            for(int j= i+1;j<n;j++) 
            { 
                if (arr[j]>arr[i]) 
                { 
                    if (arr[j]-arr[i] > p) 
                        p = arr[j]-arr[i]; 
                } 
            } 
        } 
        System.out.println(p); 
    } 
}
