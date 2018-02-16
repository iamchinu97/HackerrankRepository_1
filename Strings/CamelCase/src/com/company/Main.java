package com.company;
import java.util.Scanner;

public class Main {

    static int camelCase(String s)
    {
     int num=1;
     int length=s.length();
     for (int i=0;i<length;i++) {
         if (Character.isUpperCase(s.charAt(i)))
         {
             num++;
         }

     }
        return num;
    }
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the string:");
        String s=sc.next();
        int res=camelCase(s);
        System.out.print(res);
	// write your code here

    }
}
