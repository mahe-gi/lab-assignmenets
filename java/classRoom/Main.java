//---------------------------------------------------------------------

//wap to print amStrongNumber no or not  ->

//---------------------------------------------------------------------

//wap to print strongNumber no or not  -> 1 4 5 -> 1! + 4 ! + 5! =>145 == 145

// strong Numbers below 50k -> 1,2,145,40585
//---------------------------------------------------------------------
//
//import java.util.Scanner;
//
//public class Main {
//    public static void main(String[] args) {
//        System.out.println("Enter Number");
//        Scanner scanner = new Scanner(System.in);
////        taking number from user
//        int number = scanner.nextInt();
////        storing in temp container
//        int temp = number;
////        sum variable to calculate factorial value sum
//        int sum=0;
//        while (number != 0) {
////            taking lastnumber
//            int ld = number % 10;
////            removing last number
//                 number /= 10;
////                finding factorial of last number
//                int  val =1; //total factorial value
//            for(int i=ld;i>=1;i--){
//            val*=i;
//            }
////            adding factorial value to sum
//            sum+=val;
//
//        }
////        comparing number to sum
//        if(sum==temp){
//            System.out.println("Strong / Krishnamurti Number");
//        }else{
//            System.out.println("Not Strong / Krishnamurti Number");
//        }
//
//
//
//    }
//}
//
//
//

//---------------------------------------------------------------------

//wap to print perfect no or not  -> 6 -> sum of factors of number -> 1+2+3 =>6

//---------------------------------------------------------------------
//import java.util.Scanner;
//public class Main{
//    public static void main(String[] args) {
//        Scanner s = new Scanner(System.in);
//        System.out.println("Enter Number:");
//        int n = s.nextInt();
//        int sum = 0;
//        for(int i = 1; i < n; i++){
//            if(n%i == 0){
//                sum += i;
//            }
//        }
//        if(sum == n){
//            System.out.println("Perfect Number");
//        }else{
//            System.out.println("Not Perfect Number");
//        }
//
//    }
//}



//---------------------------------------------------------------------

//wap to print palindrome no or not  form 1 to 1000

//---------------------------------------------------------------------
//
//public class Main {
//    public static void main(String[] args) {
//        for (int i=1;i<=1000;i++){
//    /*    step 1 : take a number every time         */
//            int temp =i;
//        int rev = 0;
//    /*    step 2 : reverser taken number     */
//        while(temp!=0){
//            int ld = temp%10;
//            rev = rev*10+ld;
//            temp/=10;
//        }
//       /*    step 3 : compare number  == reverse number     */
//        if(rev==i){
//            System.out.println(i+" is a palindrome");
//
//        }
//        }
//    }
//}
//
//---------------------------------------------------------------------

//wap to print Prime no or not  from 2 to 100

//---------------------------------------------------------------------
//
//public class Main {
//    public static void main(String[] args) {
//        for(int i=2;i<=100;i++){
//            int c=0;
//            int flag=1;
//            for(int j=2;j<i;j++){
//                if(i%j==0){
//                    flag=0;
//                    break;
//                }
//            }
//            if(flag==1){
//                System.out.println( i);
//            }
//        }
//    }
//}

//---------------------------------------------------------------------

//wap to print palindrome no or not  take number from user

//---------------------------------------------------------------------

//import java.util.Scanner;
//public class Main{
//    public static void main(String[] args) {
//        Scanner s = new Scanner(System.in);
//        System.out.println("Enter Number :");
//        int n = s.nextInt();
//        int temp =n;
//        int rev = 0;
//        while(temp!=0){
//            int ld = temp%10;
//            rev = rev*10+ld;
//            temp/=10;
//        }
//        if(rev==n){
//            System.out.println(n+" is a palindrome");
//
//        }else{
//            System.out.println(n+" is not a palindrome");
//        }
//    }
//}



//---------------------------------------------------------------------

//wap to print Duck no or not  take number from user

//---------------------------------------------------------------------
//
//import java.util.Scanner;
//
//public class Main{
//
//    public static void main(String[] args){
//        Scanner scan = new Scanner(System.in);
//
//        int  n = scan.nextInt();
//        int product =1;
//        while(n!=0){
//            int ld = n%10;
//            product*=ld;
//            n/=10;
//        }
//
//        if(product==0){
//            System.out.println("Duck Number");
//        }else{
//
//            System.out.println("Not a Duck Number");
//        }
//
//    }
//
//
//
//
//}



//---------------------------------------------------------------------

//wap to print spy no or not  take number from user

//---------------------------------------------------------------------
//
//import  java.util.Scanner;
//public class Main {
//    public static void main(String[] args) {
//        Scanner sc = new Scanner(System.in);
//        int n = sc.nextInt();
//        int product =1;
//        int sum =0;
//        while (n!=0){
//// step1: take last digit from num
//            int ld = n%10;
//// step2: calculating and adding to product
//            product *= ld;
//// step3: calculating and adding sum
//           sum+=ld;
//// step 4 : removing last digit from the number
//            n = n/10;
//        }
//        System.out.println("The product is: "+product);
//        System.out.println("The sum is: "+sum);
//        if(product == sum){
//            System.out.println("SPY NUMBER ");
//        }else{
//            System.out.println("NOT SPY NUMBER ");
//        }
//
//    }
//}
//---------------------------------------------------------------------

//wap to print product of digits of number take number from user

//---------------------------------------------------------------------
//
//import java.util.Scanner;
//public class Main {
//    public static void main(String[] args) {
//        Scanner scanner = new Scanner(System.in);
//        System.out.println("Enter the number ");
//        int number = scanner.nextInt();
//        int product = 1;
//        while (number != 0) {
//            int lastDigit = number % 10;
//            product *= lastDigit;
//            number /= 10;
//        }
//        System.out.println(product);
//    }
//}
//

//---------------------------------------------------------------------

//wap to print sum of digits of number take number from user

//---------------------------------------------------------------------

//
//import  java.util.Scanner;
//
//class Main{
//    public static void main(String[] args){
//        Scanner sc = new Scanner(System.in);
//        System.out.println("Enter the number ");
//        int n = sc.nextInt();
//        int sum = 0;
//        while(n!=0){
//
//            int lastNumber =n%10;
//            sum+=lastNumber;
//            n/=10;
//        }
//        System.out.println(sum);
//    }
//}
//






//---------------------------------------------------------------------

//wap to print count of digits of number take number from user

//---------------------------------------------------------------------
//
//import java.util.Scanner;
//public  class Main  {
//
//    public static void main(String[] args){
//
//        Scanner sc = new Scanner(System.in);
//        System.out.println("Enter the number : ");
//        int n = sc.nextInt();
//        int c=0;
//        while (n!=0){
//
//            c++;
//
//            n/=10;
//        }
//        System.out.println(c);
//
//
//    }
//
//}
//




//---------------------------------------------------------------------

//wap to print prime Numbers or not

//---------------------------------------------------------------------
//import java.util.Scanner;
//public class Main{
//        public static  void main(String[] args){
//                Scanner scan = new Scanner(System.in);
//                int n=scan.nextInt();
//                int c=0;
//
//                for(int i=1;i<=n;i++){
//                        if(n%i==0){
//                                c++;
//                        }
//                }
//                if(c==n){
//                        System.out.println("Prime Number");
//                }else{
//                        System.out.println("Not Prime Number");
//                }
//        }
//}




//---------------------------------------------------------------------

//wap to print factors count of a given number

//---------------------------------------------------------------------
//import java.util.Scanner;
//class Main{
//        public static void main(String[] args){
//                Scanner scan = new Scanner(System.in);
//                int n=scan.nextInt();
//                        int c=0;
//                for(int i=1;i<=n;i++){
//                        if(n%i==0){
//                               c++;
//                        }
//                }
//                System.out.println(c);
//        }
//}


//---------------------------------------------------------------------

//wap to print factors of a given number

//---------------------------------------------------------------------
//import java.util.Scanner;
//class Main{
//        public static void main(String[] args){
//                Scanner scan = new Scanner(System.in);
//                int n=scan.nextInt();
//                for(int i=1;i<=n;i++){
//                        if(n%i==0){
//                                System.out.println(i);
//                        }
//                }
//        }
//}
//

//---------------------------------------------------------------------

//wap to print 1 to 5  numbers product

//---------------------------------------------------------------------
// don't give initial value as zero if initial value is zero anything multiply with zero it returns zero
//
//public class Main {
//    public static void main(String[] args) {
//       int product=1;
//       for (int i=1;i<=5;i++) {
//           product*=i;
//       }
//       System.out.println(product);
//    }
//}
//

//---------------------------------------------------------------------

//wap to print 1 to 10  numbers sum

//---------------------------------------------------------------------
//
//public class Main {
//    public static void main(String[] args) {
//       int sum=0;
//       for (int i=1;i<=10;i++) {
//           sum+=i;
//       }
//       System.out.println(sum);
//    }
//}

//---------------------------------------------------------------------

//wap to print 10 to 1

//---------------------------------------------------------------------

//
//
//class Main{
//    public static void main(String[] args){
//
//
//        for (int i=10;i>=1;i--){
//            System.out.println(i);
//        }

//        int i=10;
//
//        while (i>=1){
//            System.out.println(i);
//            i--;
//        }
//
//
//
//
//    }
//}
//





//---------------------------------------------------------------------

//wap to print 1 to 10

//---------------------------------------------------------------------

//class Main{
//    public static void main(String[] args){
//
//
//        for (int i=1;i<=10;i++){
//            System.out.println(i);
//        }
//
//        int i=1;
//
//        while (i<=10){
//            System.out.println(i);
//            i++;
//        }
//
//
//
//
//    }
//}













//---------------------------------------------------------------------

//wap to print calculate arithmetic operations using switch

//---------------------------------------------------------------------


//import java.util.Scanner;
//public class Main {
//    public static void main(String[] args) {
//        Scanner scanner = new Scanner(System.in);
//        System.out.println("====================================");
//        System.out.println("Arithmetic Operations using Switch");
//        System.out.println("====================================");
//        int n1 = scanner.nextInt();
//        char op = scanner.next().charAt(0);
//        int n2 = scanner.nextInt();
//        switch(op) {
//                case '+': System.out.println("Result :"+(n1 + n2)); break;
//                case '-':System.out.println("Result :"+(n1 - n2)); break;
//                case '*':System.out.println("Result :"+(n1 * n2)); break;
//                case '/':System.out.println("Result :"+(n1 / n2)); break;
//                case '%': System.out.println("Result :"+(n1 % n2)); break;
//                default: System.out.println("Invalid operation");
//        }
//        System.out.println("====================================");
//        System.out.println("Thank you for using Arithmetic Operations");
//
//        System.out.println("====================================");
//
//    }
//}
//
//
//






//---------------------------------------------------------------------

//wap to print positive or negative or zero

//---------------------------------------------------------------------

//import java.util.Scanner;
//
//public class Main {
//    public static void main(String[] args) {
//    Scanner scanner = new Scanner(System.in);
//    System.out.println("Enter a Number:");
//    int n = scanner.nextInt();
//
//    if(n>0){
//        System.out.println("Positive");
//    }else if(n<0){
//        System.out.println("Negative");
//    }else{
//        System.out.println("Zero");
//    }
//    }
//}


//---------------------------------------------------------------------

//area calculator app

//---------------------------------------------------------------------

//
// import  java.util.Scanner;
//
//public class Main {
//    public static void main(String[] args) {
//    Scanner scan = new Scanner(System.in);
//    System.out.println("=======================================================");
//        System.out.println("Area Calculator");
//        System.out.println("=======================================================");
//        System.out.println("Enter 1 for Circle");
//        System.out.println("Enter 2 for Rectangle");
//        System.out.println("Enter 3 for Triangle");
//        System.out.println("Enter 4 for Square");
//        System.out.println("Enter 5 for Parallelogram");
//        System.out.println("Enter 6 for Rhombus");
//        System.out.println("=======================================================");
//        System.out.println("Enter your choice");
//        int choice = scan.nextInt();
//        if(choice == 1) {
//            System.out.println(("You chose Circle"));
//            System.out.println("Enter the radius");
//            double radius = scan.nextDouble();
//            double area = Math.PI * radius * radius;
//            System.out.println("Area of Circle is " + area);
//        }else if(choice == 2) {
//            System.out.println(("You chose Rectangle"));
//            System.out.println("Enter the length");
//            double length = scan.nextDouble();
//            System.out.println("Enter the height");
//            double height = scan.nextDouble();
//            double area = length * height;
//            System.out.println("Area of Rectangle is " + area);
//
//        }
//        else if(choice == 3) {
//            System.out.println(("You chose Triangle"));
//            System.out.println("Enter the height");
//            double height = scan.nextDouble();
//            System.out.println("Enter the base");
//            double base = scan.nextDouble();
//            double area = 0.5 * height * base;
//            System.out.println("Area of Triangle is " + area);
//        }
//        else if(choice == 4) {
//            System.out.println(("You chose Square"));
//            System.out.println("Enter the side of square");
//            double side = scan.nextDouble();
//            double area = side * side;
//            System.out.println("Area of Square is " + area);
//        }
//        else if(choice == 5) {
//            System.out.println(("You chose Parallelogram"));
//            System.out.println("Enter the V-length");
//            double hl = scan.nextDouble();
//            System.out.println("Enter the height");
//            double vl= scan.nextDouble();
//            double area = hl * vl;
//            System.out.println("Area of Parallelogram is " + area);
//        }else if(choice == 6) {
//            System.out.println(("You chose Rhombus"));
//            System.out.println("Enter diagonal2 of Rhombus");
//            double d1 = scan.nextDouble();
//            System.out.println("Enter diagonal2 of Rhombus");
//            double d2 = scan.nextDouble();
//            double area = 0.5 * (d1*d2);
//            System.out.println("Area of Rhombus is " + area);
//        }else{
//            System.out.println(("Invalid choice"));
//        }
//
//    }
//}
//