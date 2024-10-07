//#include <stdio.h>
//
//int main() {
//    int number;
//    int result = 1;
//
//    printf("Enter a non-negative integer: ");
//    scanf("%d", &number);
//
//    if (number < 0) {
//        printf("Factorial is not defined for negative numbers.\n");
//    } else {
//        // Calculate factorial
//        for (int i = 1; i <= number; i++) {
//            result *= i; // Multiply result by i in each iteration
//        }
//        printf("Factorial of %d is %d\n", number, result);
//    }
//
//    return 0;
//}




//find the factorial
//#include <stdio.h>
//int main() {
//	int number;
//	int result = 1;
//	printf("Enter a non-negative interger:");
//	scanf("%d", &number);
//if(number<0){
//	printf("factorial is not defined for negative numbers.\n");
//}else{
//	for(int i=1; i<=number; i++) {
//	result*=i;	
//	}
//	printf("Factorial of %d is %d\n",number,result);
//	
//}
//return	0;
//}




//Reverse a Number
//#include <stdio.h>
//int main() {
//    int number, reversed = 0, original;
//    printf("Enter an integer: ");
//    scanf("%d", &number);
//    original = number; // Store the original number for later comparison
//    // Handle negative numbers
//    if (number < 0) {
//        number = -number; // Work with positive version for simplicity
//    }
//    // Reverse the number
//    while (number != 0) {
//        int digit = number % 10; // Get the last digit
//        reversed = reversed * 10 + digit; // Build the reversed number
//        number /= 10; // Remove the last digit from the number
//    }
//    // If the original number was negative, adjust the reversed result
//    if (original < 0) {
//        reversed = -reversed;
//    }
//    // Print the reversed number
//    printf("Reversed number: %d\n", reversed);
//    return 0;
//}



//#include <stdio.h>
//int main() {
//	int number, reversed = 0, orignal;
//	printf("Enter an integer: ");
//	scanf("%d", &number);
//	scanf("%d", &number);
//	orignal = number;
//	if (number<0) {
//		number = -number;	
//	}
//	while (number!=0);
//	int digit = number % 10;
//	reversed =reversed * 10+ digit;
//	number /=10;
//}
//if (original < 0) {
//	reversed = -reversed;
//}
//printf("Reversed number: %d\n",reversed);
//return 0;
//}





//fibonacci Series
//#include <stdio.h>
//int main() {
//int a1=0;
//int a2=1;
//for(int i=1;i<=n;i++){
//	a3=a1+a2;
//	printf("%d",a3),
//	a1=a2;
//	a2=a3;
//}
//printf("%d",a3);
//}



//
// #include <stdio.h>
//int main(){
// int a=0;
// int b=1;
// int i =0;
// int c;
// int steps;
// printf("Enter the number of steps:");
// scanf("%d", &steps);
// printf("%d\n",a);
// printf("%d\n",b);
// for(i=0; i<steps-2;i++){
//
//    c=a+b;
//    a=b;     
//	b=c;
//    printf("%d \n",c);
// }
// return 0;
//
//}




// printf("hello world");




// int a = 10;
// int b = 5;
// int sum = (a+b);
// printf("%d",sum);



// int i;
// int a = 25;
// int b = 10;
// if (a>b){
//     printf("a is largest number");
// } 
// else {
//     printf("b is a largest number");
// }


// int num = 7;
// if (num%2==0){
//     printf("num is even no.");
// }
// else{
//     printf("num is odd no.");
// }

// int i ;
// int num = 5;
// int f = 1;
// for (i=1;i<=num;i++)
// f = f*i;
// printf("%d",f);
 


// int num = 25;
// int a  = num%10;
// int c = num - a ;
// int d = c /10;
// printf("%d",a);
//  printf("%d",d);



// int num = 123;
// int a = num%10;
// int b = num - a;
// int c = b/10;
// int x = c%10;
// int y =c-x;
// int z =y/10;
// // int d = printf("%d",a); printf("%d",c);
// int i;
//  int num = 11;
//  int fact = 0;
//  for (i=1;i<=num;i++){
//  if(num%i==0){
//   fact++;
//  }}
// if (fact>2){
//     printf("Number is not prime");
// }
// else{
//     printf("Number is prime");
// }



//int i;
//int num1 = 25;
//int num2 =20;
//for(i=2; i<=num1 && i<=num2;i++){
//    if(num1%i==0 && num2%i==0){
//        printf("%d \n",i);
//    }
//}





//int i;
//int num1 = 4; //2*2
//int num2 = 6; // 2*3
//for(i=2; i<=num1 && i<=num2;i++){
//    if(num1%i==0 && num2%i==0){
//    int gcd = i;
//    int lcm = (num1*num2)/gcd;
//     printf("%d\n",lcm);
//    }
//}  



//- If the year is divisible by 4 but not by 100, it is a leap year.
//- If the year is divisible by 100 but not by 400, it is not a leap year.
//- If the year is divisible by 400, it is a leap year.




//int arr[5] = {1,3,9,8,7};
//int i;
//int sum = 0;
// int a=  sizeof(arr);
// int b = sizeof(arr[1]);
// int len = a/b;
//for(i=0; i<=len-1;i++){
// sum = sum + arr[i];
//} printf("%d",sum);






// int i;
// int arr [5] = {2,5,9,8,0};
// int max = arr[0];
// for(i=1;i<=4;i++){
//    if (arr[i]>max){
//        max = arr[i];
//       
//
// }} printf("%d",max);




// char  str[] = "abcd";
// int i;
// int count = 0;
// for(i=0;str[i]!=0;i++){
//     count++;
// }
// printf("%d",count);





//int num = 456; 
//int count = 0;
//
//while(num!=0){
//    num = num/10;
//    count++;
//}printf("%d",count);




// C program to find GCD of two numbers
//#include <math.h>
//#include <stdio.h>

// Function to return gcd of a and b
//int gcd(int a, int b)
//{
//    // Find Minimum of a and b
//    int result = ((a < b) ? a : b);
//    while (result > 0) {
// 
//        if (a % result == 0 && b % result == 0) {
//            break;
//        }
//        result--;
//    }
//  
//    return result;
//}
//
//int main()
//{
//    int a = 16, b = 24;
//    printf("GCD of %d and %d is %d ", a, b, gcd(a, b));
//    return 0;
//}





// C program to find LCM of
// two numbers
//#include <stdio.h>
//
// Driver code
//int main()
//{
//    int x = 15, y = 25, max;
//    max = (x > y) ? x : y;
//
//    // While loop to check if max variable
//    // is divisible by x and y
//    while (1) {
//        if (max % x == 0 && max % y == 0) {
//            printf("The LCM of %d and %d is %d.", x, y,
//                   max);
//            break;
//        }
//
//        ++max;
//    }
//
//    return 0;
//}






//ASCII Value of a Character
//#include <stdio.h>
//int main(){
//
//char a='c';
//printf("%d",a);
//return 0;
//}





































