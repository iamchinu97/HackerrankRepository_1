import java.util.Scanner;
import  java.lang.*;

public class Solution {
    static void twoChars(String s,int len)
    {
        for (int i=0;i<len-1;)
        {
            if(s.charAt(i)==s.charAt(i+1))
            {
                s=s.replaceAll(String.valueOf(s.charAt(i)),"");
                len=s.length();
                i=0;
            }
            else
            {
                i++;
            }
        }
        System.out.println(s.length());
    }
    public static void main(String arg[])
    {
        Scanner sc=new Scanner(System.in);
        System.out.println("Enter length:");
        int len=sc.nextInt();
        System.out.println("Enter String:");
        String s=sc.next();
        twoChars(s,len);
    }

}
