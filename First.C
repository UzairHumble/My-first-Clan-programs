// Ques#1 Write a program that prints ‘Hello World’ to the screen.

// #include <stdio.h>

// int main() {
//     printf("Hello World\n");
//     return 0;
// }

// Ques#2 Write a C program that asks the user for their name and greets them with
// their name.

// #include <stdio.h>

// int main() {
//     char name[50];
//     printf("Enter your name: ");
//     scanf("%s", name);
//     printf("Hello %s!\n", name);
//     return 0;
// }

// Ques#3  Modify the previous program such that only the users Alice and Bob are
//  greeted with their names.

// #include <stdio.h>
// #include <string.h>
// int main() {
//     char name[20];
//     printf("Enter Your Name");
//     scanf("%s", name);

//     if(strcmp(name, "Alice") == 0 || strcmp(name, "Bob") == 0) {
//         printf("Hello %s! \n", name);
//     }
//     else{
//         printf("Sorry,I only greet Alice and Bob.\n");
//     }

//     return 0;
// }

// Ques#4 Write a program that asks the user for a number n and prints the sum of
// the numbers 1 to n

// #include <stdio.h>

// int main() {

//     int num , sum = 0;
//     printf("Enter a Number: ");
//     scanf("%d" , &num);

//     for(int i = 1; i<=num; i++)
//     {
//         sum += i;
//     }

//     printf("The Sum of Numbers 1 to %d is  %d. \n", num, sum);

//     return 0;
// }

// QUES#5 Modify the previous program such that only multiples of three or five are
// considered in the sum, e.g. 3, 5, 6, 9, 10, 12, 15 for n=17

// #include <stdio.h>

// int main() {

//     int num , sum = 0;
//     printf("Enter a Number: ");
//     scanf("%d" , &num);

//     for(int i = 1; i<=num; i++)
//     {
//         if (i % 3 == 0 || i % 5 == 0){
//              sum += i;
//         }
//     }

//     printf("The sum of all multiples of three or five up to %d is %d.\n", num, sum);

//     return 0;
// }

// Ques#6 Write  a program that asks the user for a number n and gives them the
// possibility to choose between computing the sum and computing the
// product of 1,...,n.

// #include <stdio.h>

// int main() {
//     int n, choice, i;
//     int sum = 0, product = 1;

//     printf("Enter a number: ");
//     scanf("%d", &n);

//     printf("Enter 1 to compute the sum, 2 to compute the product: ");
//     scanf("%d", &choice);

//     if (choice == 1) {
//         for (i = 1; i <= n; i++) {
//             sum += i;
//         }
//         printf("The sum of 1 to %d is %d\n", n, sum);
//     } else if (choice == 2) {
//         for (i = 1; i <= n; i++) {
//             product *= i;
//         }
//         printf("The product of 1 to %d is %d\n", n, product);
//     } else {
//         printf("Invalid choice\n");
//     }

//     return 0;
// }

//   Ques#7 Write a program that prints a multiplication table for numbers up to 12.

// #include <stdio.h>

// int main() {
//     int num;
//       for (int i = 1; i <= 12; i++) {
//        printf("Multiplication table for %d:\n", i);
//         scanf("%d",&num);
//         for (int j = 1; j <= 12; j++) {
//             printf("%d x %d = %d\n", i, j, i*j);
//             }
//         printf("\n");
//     }
    
//     return 0;
// }


// Ques#8 Write a program that prints all prime numbers. (Note: if your programming
// language does not support arbitrary size numbers, printing all primes up
// to the largest number you can easily represent is fine too.)

// #include <stdio.h>

// int main() {
//     int num,i,j,primeNum;

//     printf("Enter a Limit");
//     scanf("%d", &num);

//     printf("Prime numbers between 1 and %d are: ", num);

//    for(i=2; i<=num;i++){
//     primeNum =1;

//     for(j =2; j<=i/2; j++){
//         if(i % j ==0){
//             primeNum = 0;
//             break;
//         }
//     }

//     if(primeNum){
//         printf("%d \n", i);

//     }
//    }

//     return 0;
// }
// Ques#9 Write a C program to guessing game where the user has to guess a secret number.
// After every guess the program tells the user whether their number was
// too large or too small. At the end the number of tries needed should be
// printed. It counts only as one try if they input the same number multiple
// times consecutively.

// #include <stdio.h>

// int main()
// {
//     int mySecretNum = 23;
//     int guessNum = 0;
//     int preGuess = 0;
//     int attemptNum = 0;

//     printf("The Guessing Game!\n");

//     while (guessNum != mySecretNum)
//     {
//         printf("Guess a Number:");
//         scanf("%d", &guessNum);

//         if (guessNum == preGuess)
//         {
//             continue;
//         }

//         attemptNum++;

//         if (guessNum < mySecretNum)
//         {
//             printf("Too small!\n");
//         }
//         else if (guessNum > mySecretNum)
//         {
//             printf("Too Large!\n");

//             preGuess = guessNum;
//         }
//     }
//     printf("Correct! You Used  %d attempts !\n", attemptNum);

//     return 0;
// }

// Ques#10 Write a program that prints the next 20 leap years.

// #include <stdio.h>

// int main()
// {
//     int timeCount, i, year;

//     printf("\nHow many Times you have to Print Leap Year:");
//     scanf("%d", &timeCount);

//     printf("\n Enter Leap Year From which you want to print");
//     scanf("%d", &year);

//     if (year % 100 == 0)
//     {
//         if (year % 400 == 0)
//         {
//             printf("%d is Leap Year\n", year);
//             printf("List of Leap Year:\n");
//             printf("1.%d\n", year);
//             for (i = 2; i <= timeCount; i++)
//             {
//                 year += 4;
//                 printf("%d. %d\n", i, year);
//             }
//         }
//         else
//         {
//             printf("%d is NOT Leap Year \n Enter Valid Leap Year", year);
//         }
//     }
//     else
//     {
//         if (year % 4 == 0)
//         {
//             printf("%d is Leap Year\n", year);
//             printf("List of Leap Year:\n");
//             printf("1. %d\n", year);
//             for (i = 2; i <= timeCount; i++)
//             {
//                 year += 4;
//                 printf("%d. %d\n", i, year);
//             }
//         }
//         else
//      {
//             printf("%d is Not Leap Year \n Enter Valid Leap Year", year);
//         }
//     }
//     return 0;
// }

// Ques#11 Write a function that returns the largest element in a list.

// #include <stdio.h>

// int main() {
//     int size, i, largest;
     
//      printf("\n Enter the size of the List:");
//      scanf("%d",&size);
//      int array[size];

//     //  input array element

//     printf("\n Enter %d element of the List \n" , size);

//     for (i = 0; i < size; i++){
//         scanf("%d", &array[i]);
//     }
   
// //    Declaring largest element as the first element

//      largest = array[0];

//     for(i =1; i< size;i++){
//     if(largest < array[i])
//     largest = array[i];
//    }
   
//   printf("\n Largest Element present in the given List is:%d",largest);

//     return 0;
// }


// Ques#12 Write function that reverses a list, preferably in place.

// #include <stdio.h>

// int main() {
//     int num,count,decr,arrayA[100],arrayB[100];

//     printf("Enter the number of elements in List \n");
//     scanf("%d",&num);

//     printf("Enter List elements\n");

//     for (count = 0; count < num; count++)
//     scanf("%d",&arrayA[count]);

//     //  Copying elements into array b starting from the end of array a

//     for (count = num -1, decr = 0; count >= 0; count--,decr++)
//     arrayB[decr] = arrayA[count];
   
//     // Copying reversed array into the original, we are modifying the original array
     
//      for (count = 0; count < num; count++)
//      arrayA[count] = arrayB[count];

//      printf("The List after reversal:\n");

//      for (count = 0; count < num; count++)
//      printf("%d\n",arrayA[count]);

//      return 0;
//      }

//Ques#13 Write a function that checks whether an element occurs in a list.

// #include <stdio.h>
//  int main(){
//     int array[100],search,count,elementNum;

//     printf("Enter number of element in array\n");
//     scanf("%d",&elementNum);

//     printf("Enter %d Integer(s)\n",elementNum);
    
//     for(count = 0; count < elementNum; count++)
//     scanf("%d",&array[count]);

//     printf("Enter a number to Search \n");
//     scanf("%d",&search);

//     for (count = 0;count < elementNum; count++){
//         if(array[count] == search)
//         {
//          printf("%d is present at Location %d.\n",search,count,count+1);
//          break;
//         }
//     }
//       if(count == elementNum)
//       printf("%d isn't present in the array.\n",search);
      
//     return 0;
//  }

// Ques#14 Write a function that returns the elements on odd positions in a list.
// #include <stdio.h>

// int main(){
//     int arraySize[100],init,storeNum,even=0,odd=0;

//     printf("Enter size of the List: ");
//     scanf("%d",&storeNum);

//     printf("Enter elements in List: ");
//     for(init = 0; init < storeNum; init++)
//     {
//         scanf("%d",&arraySize[init]);
//     }
//     for(init = 0; init < storeNum; init++)
//     {
//         if (arraySize[init]%2==0)
//         even++;
//         else
//         odd++;
//     }
//     printf("even number in List: %d",even);
//     printf("\nodd number in List: %d",odd);

//     return 0;
// }
// Ques#15 Write a function that computes the running total of a list.

// #include <stdio.h>

// void cumulative(int *arr, int n) {
//     int cum_sum[n];
//     cum_sum[0] = arr[0];
    
//     for (int i = 1; i < n; i++) {
//         cum_sum[i] = cum_sum[i-1] + arr[i];
//     }

//     printf("Cumulative Sum of the list: ");
//     for (int i = 0; i < n; i++) {
//         printf("%d ", cum_sum[i]);
//     }
// }

// int main() {
//     int arr[] = {10, 20, 30, 40, 50};
//     int n = sizeof(arr)/sizeof(arr[0]);

//     cumulative(arr, n);
//     return 0;
// }


// Ques#16 Write a function that tests whether a string is a palindrome.

// #include<stdio.h>  
//  int main()    
// {    
//    int inpNum,rightMost,totalSum = 0,temp;
//    printf("Enter the Number Here =");
//    scanf("%d",&inpNum);
//    temp = inpNum;

//     while(inpNum > 0)
//   {
//     rightMost=inpNum%10;
//     totalSum = (totalSum*10)+rightMost;
//     inpNum=inpNum/10;
//   }
//     if(temp==totalSum)
//     printf("It's a Palindrome Number");
    
//     else
//       printf("Not a Palindrome Number");     

// return 0;  
// }   


// Ques#17 Write three functions that compute the sum of the numbers in a list: using
// a for-loop, a while-loop and recursion.

// Sum of Natural Numbers Using for Loop
// #include <stdio.h>
// int main() {
//     int n, i, sum = 0;

//     printf("Enter a positive integer: ");
//     scanf("%d", &n);

//     for (i = 1; i <= n; ++i) {
//         sum += i;
//     }

//     printf("Sum = %d", sum);
//     return 0;
// }
// // Sum of Natural Numbers Using while Loop

// #include <stdio.h>
// int main() {
//     int n, i, sum = 0;
//     printf("Enter a positive integer: ");
//     scanf("%d", &n);
//     i = 1;

//     while (i <= n) {
//         sum += i;
//         ++i;
//     }

//     printf("Sum = %d", sum);
//     return 0;
// }

// // Sum of Natural Numbers Using Recursion

// #include <stdio.h>

// int addNumbers(int n);

// int main() {

//   int num;
//   printf("Enter a positive integer: ");
//   scanf("%d", &num);
//   printf("Sum = %d", addNumbers(num));
//   return 0;
// }

// int addNumbers(int n) {
//   if (n != 0)
//     return n + addNumbers(n - 1);
//   else
//     return n;
// }


// Ques#18 Write a function on_all that applies a function to every element of a list.
// Use it to print the first twenty perfect squares. The perfect squares can
// be found by multiplying each natural number with itself. The first few
// perfect squares are 1*1= 1, 2*2=4, 3*3=9, 4*4=16. Twelve for example is not a
// perfect square because there is no natural number m so that m*m=12.

// #include <stdio.h>


// int main() {
//     int i= 1;
//     int userInp;
//     printf("Please enter the range till program runs: ");
//     scanf("%d", &userInp);

//     for (int j = 1; j <= userInp; j++) {
//         while (i <= (j/2)+1) {
//             if (i*i == j) {
//                 printf("%d\n" , j);
//             }
//             i++;
//         }
//         i = 1;
//     }

//     return 0;
// }

// Ques#19 Write a function that computes the list of the first 100 Fibonacci numbers.
// The first two Fibonacci numbers are 1 and 1. The n+1-st Fibonacci number
// can be computed by adding the n-th and the n-1-th Fibonacci number. The
// first few are therefore 1, 1, 1+1=2, 1+2=3, 2+3=5, 3+5=8.

// #include <stdio.h>

// int main() {
// int userInp, term_1 = 0, term_2 = 1, nextTerm = 0;


// printf("Enter the number of terms: ");
// scanf("%d", &userInp);

// printf("Fibonacci Series: ");

// for (int i = 1; i <= userInp; ++i) {
//     // Prints the first two terms.
//     if(i == 1) {
//         printf("%d, ", term_1);
//         continue;
//     }
//     if(i == 2) {
//         printf("%d, ", term_2);
//         continue;
//     }
//     nextTerm = term_1 + term_2;
//     term_1 = term_2;
//     term_2 = nextTerm;
    
//     printf("%d, ", nextTerm);
// }
// return 0;
// }

// Ques#20 Write a function that takes a number and returns a list of its digits. So
// for 2342 it should return [2,3,4,2].
#include <stdio.h>
#include <stdlib.h>

int* NumberToDigits(int num, int* length) {
    int* digits = NULL;
    int size = 0;

    while (num > 0) {
        digits = (int*) realloc(digits, (size + 1) * sizeof(int));
       
         
        num /= 10;
    }

    for (int i = 0; i < size / 2; i++) {
        int temp = digits[i];
        digits[i] = digits[size - i - 1];
        digits[size - i - 1] = temp;
    }

    *length = size;
    return digits;
}
int main() {
    int num = 2342;
    int* digits;
    int length;

    digits = NumberToDigits(num, &length);

    printf("Output: ");
    for (int i = 0; i < length; i++) {
        printf("%d ", digits[i]);
    }
    printf("\n");

    free(digits);
    return 0;
}

// Ques#21 Write a function that takes a list of strings an prints them, one per line, in
// a rectangular frame. For example the list ["Hello", "World", "in", "a",
// "frame"] gets printed as:

// #include <stdio.h>
// #include <string.h>

// int main() {
//     char twoDarray[5][10]= {"Hello", "World","in","a","frame"};
//     int tb_row, lf_col;

//     for ( tb_row = 1; tb_row <= 7; tb_row++){
//         for(lf_col = 1; lf_col < 10; lf_col++){
//             if(tb_row == 1 || tb_row == 7){
//                 printf("*");
//             }
        
//         else
//         {
//             if ( lf_col == 1 || lf_col == 9){
//                 printf("*");
//             }
        

//         else if (lf_col == 2 || lf_col == 8){
//             printf (" ");
//         }
//         else {
//             printf("%c",twoDarray[tb_row -2][lf_col - 3]);
//             } 
         
//          }

//      }  
//         printf("\n");
// }
// return 0;
// }


// Ques#22 Given two strings, write a program that efficiently finds the longest
// common subsequence.

// #include <stdio.h>
// #include <string.h>

// void lcs(char X[], char Y[], int m, int n)
// {
//     int L[m + 1][n + 1]; // create a 2D array to store LCS lengths

//     // fill up the array L
//     for (int i = 0; i <= m; i++) {
//         for (int j = 0; j <= n; j++) {
//             if (i == 0 || j == 0)
//                 L[i][j] = 0;
//             else if (X[i - 1] == Y[j - 1])
//                 L[i][j] = L[i - 1][j - 1] + 1;
//             else
//                 L[i][j] = (L[i - 1][j] > L[i][j - 1]) ? L[i - 1][j] : L[i][j - 1];
//         }
//     }

//     // find the longest common subsequence and store it in lcs
//     int index = L[m][n];
//     char lcs[index + 1];
//     lcs[index] = '\0'; // set the terminating character
//     int i = m, j = n;
//     while (i > 0 && j > 0) {
//         if (X[i - 1] == Y[j - 1]) {
//             lcs[index - 1] = X[i - 1];
//             i--;
//             j--;
//             index--;
//         }
//         else if (L[i - 1][j] > L[i][j - 1])
//             i--;
//         else
//             j--;
//     }

//     // print the longest common subsequence
//     printf("LCS of %s and %s is %s", X, Y, lcs);
// }

// int main()
// {
//     char X[] = "AGGTAB";
//     char Y[] = "GXTXAYB";
//     int m = strlen(X);
//     int n = strlen(Y);
//     lcs(X, Y, m, n);
//     return 0;
// }



// Ques# 23. Write a program in C to read 10 numbers from the keyboard and find their
// sum and average

//  #include <stdio.h>

// int main()
// {
//   
//     int num, totalSum= 0, avgValue = 0;
    
//     for (int n = 1; n <= 10; n++)
//     {
//         printf("Enter number %d: ", n);
//         scanf("%d", &num);
//         totalSum+= num;
//     }
    
//     avgValue = totalSum/ 10;
    
//     printf("Sum of 10 numbers is equal to: %d\n", totalSum);
//     printf("Average of 10 numbers is equal to: %d\n", avgValue);

//     return 0;
// }


// Ques#24 Write a program in C to display the cube of the number up to an integer

// #include <stdio.h>

// int main()
// {
//     // cube of numbers
//     int num, cube;
//     printf("Enter the value of num: ");
//     scanf("%d", &num);

//     for (int i = 1; i <= num; i++)
//     {
//         cube = i * i * i;
//         printf("Cube of %d is %d\n", i, cube);
//     }

//     return 0;
// }


// // Ques#25 Write a program in C to display the multiplier table vertically from 1 to n
// #include <stdio.h>
// int main()
// {
//   int n,i,j;
//   printf("Enter the number of which you want an multiplication table:\n");
//   scanf("%d",&n);
//   for(i=1;i<=10;i++)
//   {
//     for(j=1;j<=n;j++)
//     {
//     printf("%d*%d =%d, \t",j,i,j*i);
//   }
//   printf("\n");
//   }
  
// }


// Ques#26 Write a C program to check whether a given number is an Armstrong
// number or not

// #include <stdio.h>

// int main()
// {
//     int n;
//     int a, b, c, d, armstrong;
//     printf("Enter a number: ");
//     scanf("%d", &n);

//     a = n % 10;
//     b = n / 10;
//     c = b % 10;
//     d = b / 10;

//     printf("The value of a: %d\n", a);
//     printf("The value of c: %d\n", c);
//     printf("The value of d: %d\n", d);

//     armstrong = (a * a * a) + (c * c * c) + (d * d * d);

//     if (armstrong == n)
//     {
//         printf("It is an Armstrong number: %d\n", armstrong);
//     }
//     else
//     {
//         printf("It is not an Armstrong number.\n");
//     }

//     return 0;
// }

// Ques#27 Write a C program to determine whether a given number is prime or not

// #include <stdio.h>

// int main() {

//   int num,temp = 0;
//     printf("\nPlease! Enter a Number:\t");
//   scanf("%d", &num);

//   if (num==0 || num==1)
//     temp = 1;

//   for (int i=2; i<=num/2; ++i) {

//     if (num % i == 0) {
//       temp = 1;
//       break;
//     }
//   }

//   if (temp==0)
//    printf("\n%d is a Prime Number\n", num);
//   else
//      printf("\n%d is Not a Prime Number\n", num);

//   return 0;
// }


// Ques#28  Write a C program to display Pascal's triangle 
  
// #include <stdio.h>

// int main()
// {
//     int rowNum,colNum=1,space;
//     printf("Input number of rows: ");
//     scanf("%d",&rowNum);
//     for(int i=0; i<rowNum; i++)
//     {
//         for(space=1; space<=rowNum-i; space++)
//         printf("  ");
//         for(int j=0; j<=i; j++)
//         {
//             if (j==0||i==0)
//                 colNum=1;
//             else
//                colNum=colNum*(i-j+1)/j;
//             printf("% 4d",colNum);
//         }
//         printf("\n");
//     }
//     return 0;
// }


//Ques#29 Write a C program to check whether a number is a Strong Number or not

// #include <stdio.h>
// int main()
// {
//     int n,digit,sum=0,fact=1;
//     printf("Enter a number: \n");
//     scanf("%d",&n);
 
//     int temp = n; 
 
//     while(temp>0){
//         digit = temp%10;
 
//         fact=1;
//         for(int i=1; i<=digit; i++){
//         fact = fact*i;
//         }
//         sum += fact;
//         temp = temp/10;
//     }
 
//     if(sum==n)
//         printf("number is strong \n");
//     else
//         printf("number is not strong \n");
 
//     return 0;
// }


// Ques#30 Write a program in C to get the largest element of an array using the
// function.

// #include <stdio.h>

// int findLarge(int[],int);

// int main()

// {

//     int a[100],arraySize,largeNum,i;

//     printf("Enter size of array: ");

//     scanf("%d",&arraySize);

//     printf("Enter the elements into array:\n");

//     for(i=0;i<arraySize;i++)

//         scanf("%d",&a[i]);

//     largeNum=findLarge(a,arraySize);

//     printf("Largest number is: %d\n",largeNum);

//     return 0;

// }

// int findLarge(int a[],int arraySize)

// {

//     int i,Large_num;

//     Large_num=a[0];

//     for(i=1;i<arraySize;i++)

//     {

//         if(Large_num<a[i])

//             Large_num=a[i];

//     }

//     return Large_num;

// }




                // End Of the Assignment 


//  Title Page for OOPs Assignment Submission

// Name: Uzair Malik

// Roll No: 50

// Section: A

// Subject: Object-Oriented Programming (OOPs)

// Professor: Sir Touseef

// Date of Submission: [insert date here]






