// #include <iostream>
// using namespace std;

// int main (){

// cout <<"Aniket \n"<<"chavan"<<endl ;//in it there are use a print a two statement in a two lines
// return 0;

// }

// // "\n" for use a next line
// #include<iostream>
// using namespace std;
// int main ()
// {
//     int age =58;
//     cout <<"Aniket\n"<<sizeof(age) <<endl;
//     return 0;
// }


// #include<iostream>
// using namespace std;
// int main (){
//     int value  = 97;//its a type conversion its a implicit conversion
//     char grade = value;//when you initialize a char in '' single coted

//     cout << grade << endl;
//     return 0;
// }
// typecasting is use to convert a bigdata from a smalldata type to a another type

// #include<iostream>
// using namespace std;
// int main (){
//     double value  = 97.78;//its a type conversion its a explicit conversion
//     char newvalue = (char)value;

//     cout << newvalue << endl;
//     return 0;
// }

// input in a c++

// #include<iostream>
// using namespace std;
// int main (){
//     int a;
//     int b;

//     cout<< "enter the number a:";
//     cin >> a;  // cin is use to take a input 
//     cout<< "enter the number b:";
//     cin >> b;  // cin is use to take a input 
//     int c=a>b;
//     cout << "your number is :" << c <<endl;
//     return 0;
// }
// relational operators is 
// <
// >
// <=
// .
// >=
// ==
// !=

// logical operators
// and &&
// or ||
// not ! its reverse a ans true convert it into false and false convert into true ex : !(3>5)

 //unary op unary op its required a single number un = 1
// increament ++
// a = a+1 =a++
// // decrement ++
// a = a-1 =a--


//if else statement
// #include<iostream>
// using namespace std;
// int main (){
//     int n;
    

//     cout<< "enter the n:";
//     cin >> n;  // cin is use to take a input 

//     if(n%2==0){
//         cout<<"even";
//     }
//     else{
//         cout<<"odd";
//     }
    
//     return 0;
// }

// //if- else if -else
// #include<iostream>
// using namespace std;
// int main ()
// {
//     int marks;
//     cout<<"enter marks:";
//     cin>>marks;
//     if (marks>=90){
//         cout<<"grade A";
//     }
//     else if(marks>=80){
//        cout<<"grade B";

//     }
//     else{
//        cout<<"grade c";

//     }
//     return 0;
// }


//find a char lowercase or uppercase

//ternary operator
// #include<iostream>
// using namespace std;
// int main(){
//     int n = 4;
//     cout<< (n>=0 ?"positive":"negative")<< endl;
//     return 0;
// }
//ternary operator
 //#include <iostream>
//  using namespace std;

// int main (){

//   int n = 4;
//     cout<< (n>=0 ?"positive":"negative")<< endl;
//     return 0;

// }


//loops 
//for loop
// #include <iostream>
// using namespace std;

// int main (){
//  for(int i =1;i<=5;i++)
//  {
//     cout<<i<<" ";

//  }
 
//  return 0;

// }

// //while loop
// #include <iostream>
// using namespace std;

// int main (){
//     int i=1;
//     while(i<=5){

//       cout <<i<<" " ;//in it there are use a print a two statement in a two lines
//       i++;
//     }

//  return 0;

// }
//nested loops
// #include <iostream>
// using namespace std;

// int main (){
//  for(int i =1;i<=5;i++)
//  {
//     cout<<i<<" ";

//  }
 
//  return 0;

// }

// //while loop
// #include <iostream>
// using namespace std;

// int main() {
//     int m = 5; // Number of rows
//     int n = 5; // Number of columns

//     // Outer loop for rows
//     for(int i = 1; i <= m; i++) {  
//         // Inner loop for columns
//         for(int j = 1; j <= n; j++) {  
//             cout << "* "; // Print '*' in the same line
//         }
//         cout << endl; // Move to the next line after each row
//       }

//         return 0; 
// }
// #include <iostream>
// using namespace std;
// int main(){
//    int m=5;
//    int n=5;
//    for(int i =1;i<=m;i++){
//       for(int j =1; j<=n;j++){
//          cout<<"* ";
//       }
//       cout<<endl;
//    }
//    return 0;
// }
// output 
// *****
// *****
// *****
// *****
// *****
// patterns
// #include<iostream>
// using namespace std;
// int main(){
//    int m =4;
//    for(int i = 1; i<=m; i++){
//       for(int j =1; j<=m; j++){
//          cout<<j;
//       }
//       cout<<endl;
//    }

//   return 0;
// }
// #include <iostream>
// using namespace std;

// int main() {
//     int m = 4; // Number of rows and columns
//     int n =5;
//     for (int i = 1; i <= m; i++) { // Outer loop for rows
//         for (int j = 1; j <= n; j++) { // Inner loop for columns
//             cout << "j"; // Print numbers from 1 to m in a row
//         }
//         cout << endl; // Move to the next line after each row
//     }

//     return 0;
// }
// //output 
// 1234
// 1234
// 1234
// 1234
// #include<iostream>
// using namespace std;
// int main(){
//     int n =4;
//     int m =6;
//     for(int i=1 ; i<n; i++){
//         char ch ='A';
//         for(int j=1;j<m; j++){
//             cout<<ch;
//             ch =ch+1;

//         }
//         cout<<endl;
//     }
//     return 0;
// }
//output
// ABCDE
// ABCDE
// ABCDE

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n = 3;
//     int num =1;
//     for(int i = 1;i <=n; i++){
//         for (int j = 1; j <=n; j++){
//             cout<<num;
//             num++;
            
            
//         }
//         cout<<endl;
//     }
//     return 0;
// }
//output
// 123
// 456
// 789


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n = 3;
//     char ch='A';
//     for(int i = 1;i <=n; i++){
//         for (int j = 1; j <=n; j++){
//             cout<<ch;
//             ch++;
            
            
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// //output
// ABC
// DEF
// GHI

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n = 4;
//     for(int i = 0;i<n; i++){
//         for (int j = 0; j<i+1; j++){
//             cout<<"* ";
            
            
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// output 
// *
// **
// ***
// ****

// #include<iostream>
// using namespace std;
// int main()
// {
//     int n = 4;
    
//     for(int i = 0;i<n; i++){
//         for (int j = 0; j<i+1; j++){
//             cout<<(i+1);
            
            
            
//         }
//         cout<<endl;
//     }
//     return 0;
// }
// output
// 1
// 22
// 333
// 4444


// #include<iostream>
// using namespace std;
// int main()
// {
//     int n = 4;
//     char ch ='A';
//     for(int i = 0; i<n; i++){
//         for (int j = 0; j<i+1; j++){
//             cout<<ch;
            
            
//         }
//             ch = ch + 1;
//         cout<<endl;
//     }
//     return 0;
// }
// output
// A
// BB
// CCC
// DDDD

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 3; // Number of rows

//     for (int i = 1; i <= n; i++) { 
//         for (int j = 1; j <=i; j++) { 
//             cout << "* "; // Print character
//         }

     
//         cout << endl; // Move to next line
//     }

//     return 0;
// }
// //output
// * 
// * *
// * * *

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5; // Number of rows

//     for (int i = 1; i <= n; i++) { 
//         for (int j = n; j >=i; j--) { 
//             cout << "* "; // Print character
//         }

     
//         cout << endl; // Move to next line
//     }

//     return 0;
// }
//output
// * * * * * 
// * * * *   
// * * *     
// * *       
// *   

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 6; // Number of rows

//     for (int i = 1; i <= n; i++) { 
//         for (int j = 1; j <=i; j++) { 
//             cout << j ; // Print character
        
//         }

     
//         cout << endl; // Move to next line
//     }

//     return 0;
// }
// output
// 1
// 12    
// 123   
// 1234  
// 12345 
// 123456

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5; // Number of rows

//     for (int i = 1; i <= n; i++) { 
//         for (int j = 1; j <=n; j++) { 
//             if ( (i+j) <= n){
//                 cout<<" ";
//             }
//             else {

//             cout << "*"; // Print character
//             }

//         }

     
//         cout << endl; // Move to next line
//     }

//     return 0;
// }

// output 
//     *
//    **
//   ***
//  ****
// *****

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5; // Number of rows

//     for (int i = 1; i <= n; i++) { 
//         for (int j = 1; j <=n; j++) { 
//             if ( (i+j) <= n){
//                 cout<<" ";
//             }
//             else {

//             cout << " *"; // Print character
//             }

//         }

     
//         cout << endl; // Move to next line
//     }

//     return 0;
// }

// output 
//     * 
//    * *
//   * * *
//  * * * *
// * * * * *


// #include <iostream>
// using namespace std;

// int main() {
//     int n = 5; // Number of rows

//     for (int i = 1; i <= n; i++) { 
//         for (int j = 1; j <=n; j++) { 
           
//             cout << j; // Print character
        
//         }

     
//         cout << endl; // Move to next line
//     }

//     return 0;
// }
//add a two numbers in a function
// #include <iostream>
// using namespace std;
// int sum (int a,int b){
//     int s=a+b;
//     return s ;
// }

// int main()
// {
//  cout<<sum(3,6);
//  return 0;
// }
//min of two of no
// #include <iostream>
// using namespace std;
// int sum (int n){
//     int t =0;
//  for(int i=1; i <=n;i++){
//     t+=i;
//  }
//     return t;
// }

// int main()
// {
//  cout<<sum(5);
//  return 0;
// }
//n factorial
// #include <iostream>
// using namespace std;
// int fact1 (int n){
//     int fact =1;
//  for(int i=1; i <=n;i++){
//     fact*=i;
//  }
//  return fact;
// }

// int main()
// {
//  cout<<fact1(3);
//  return 0;
// }

//pass by value
// #include <iostream>
// using namespace std;
// int sum (int a , int b){
//    return a+b;
// }

// int main(){
//    int x=5, y=4;
//    cout<<sum(x,y)<<endl;
//    return 0;

// }
//there are two values in a main function x=5 and y=4 in a memory x and y when you pass a argument then a =5 and b=4  its a copy and then it made a parameter and in memory it make a copy place in mem when it make a change in a main memory data so it does not effect in a copy value it become as it is there are both variable are a diffrent add

//Q calculate a sum of digit of a number

// #include <iostream>
// using namespace std;
// int sumdigit (int num){
//    int digsum =0;
//  while(num>0){
//   int lastdig = num%10;
//    num =num%10;
//    digsum = lastdig;
//  }
//  return digsum;
// }

// int main(){
   
//    cout<<"sum ="<<sumdigit(235)<<endl;
//    return 0;

// }
//Q check the number is a prime or not

// #include <iostream>
// #include <cmath>  // For sqrt() function
// using namespace std;

// bool isPrime(int n) {
//     if (n < 2) {
//         return false;  // Numbers less than 2 are not prime
//     }

//     for (int i = 2; i <= sqrt(n); i++) {  // Check up to sqrt(n)
//         if (n % i == 0) {
//             return false;  // If divisible, not prime
//         }
//     }

//     return true;  // If no divisors found, it's prime
// }

// int main() {
//     int num;
//     cout << "Enter a number: ";
//     cin >> num;

//     if (isPrime(num)) {
//         cout << num << " is a Prime Number." << endl;
//     } else {
//         cout << num << " is Not a Prime Number." << endl;
//     }

//     return 0;
// }

//arrays 

// #include<iostream>
// using namespace std;
// int main(){
//   int marks[3]={23,34,56};
//   cout<<marks[0]<<endl;
//   return 0;

// }

// //loops on  array
// #include<iostream>
// using namespace std;
// int main(){
//   int marks[3]={23,34,56};
//   int size = 3;
//   for(int i=0;i<size;i++){

//    cout<<marks[i]<<endl;
//   }
//   return 0;

// }

//taking input in  a array
// #include<iostream>
// using namespace std;
// int main(){
//   int size = 3;
//   int marks[size];
   
//   for(int i=0;i<size;i++){

//    cin>>marks[i];
//   }

//   for(int i=0;i<size;i++){

//    cout<<marks[i]<<endl;
//   }
//   return 0;

// }

// //taking input in  a array
// #include <iostream>
// #include <climits>  // Required for INT_MAX and INT_MIN
// using namespace std;

// int main() {
//     int num[] = {5, 15, 20, 4, 55}; // Array of numbers
//     int size = 5;
    
//     int small = INT_MAX; // Initialize smallest number with a large value
//     int large = INT_MIN; // Initialize largest number with a small value

//     int smallIndex = -1; // To store the index of the smallest number
//     int largeIndex = -1; // To store the index of the largest number

//     // Loop through the array
//     for (int i = 0; i < size; i++) {
//         if (num[i] < small) {  
//             small = num[i];  // Update smallest value
//             smallIndex = i;  // Store index of smallest number
//         }
//         if (num[i] > large) {  
//             large = num[i];  // Update largest value
//             largeIndex = i;  // Store index of largest number
//         }
//     }

//     // Printing results
//     cout << "Smallest number: " << small << " at index " << smallIndex << endl;
//     cout << "Largest number: " << large << " at index " << largeIndex << endl;

//     return 0;
// }

//vectors
//lib stl
// vector<int>vec;
// vector<int>vec ={1,2,3}
// vector<int>vec(3,0)


//char in a vector

// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<char>vec={'a','b','c'};
//     for(char val :vec){//for each loop

//     cout<<val<<endl;
//     }
//     return 0;
// }

//push and pop in a vector
// #include <iostream>
// #include <vector>
// using namespace std;
// int main(){
//     vector<int>vec;
//     vec.push_back(25);
//     vec.push_back(5);
//     vec.push_back(29);
//    cout<<"after push size:"<<vec.size()<<endl;
//     vec.pop_back();
//  for(int val :vec){

//     cout<<val<<endl;
//  }
//     return 0;
// }

//there are two types of a memory static and a dynamic allocation
//static are run in a compile time 
//dynamic allocation in a run time
//vector is a dynamic alloction its a allocate n a heap memory '
//array is allocate in a stack
//there are a two decalre function in a vec {vec.size and vec.capacity}

//single number
//subarray
//to find a max subarray formula = n*(n+1)/2

//  #include<iostream>
//  #include <vector>
//  using namespace std;
//  int main(){
//    int n =7;
//     int arr[7]={3,-4,5,4,-1,7,-8};
//      for(int start = 0; start<n; start++){
//          for(int end= start; end<n;end++){
//              for(int i=start;i<=end;i++){
//                  cout<<arr[i];

//              }
//              cout<<" ";

//          }
//          cout<<endl;

//      }

//      return 0;

//  }
//  //sub array
//  3 3-4 3-45 3-454 3-454-1 3-454-17 3-454-17-8 
// -4 -45 -454 -454-1 -454-17 -454-17-8 
// 5 54 54-1 54-17 54-17-8
// 4 4-1 4-17 4-17-8
// -1 -17 -17-8 
// 7 7-8
// -8

//max subarray sum using brute force approacch
//we use a brute force approach in it there are we at start to find a all subarray and then sum of every sub array and then print a max sum sub arr


// #include<iostream>
// #include <vector>
// #include <climits>  // Required for INT_MAX and INT_MIN
// using namespace std;
// int main(){
//     int n =7;
//     int arr[7]={3,-4,5,4,-1,7,-8};                      
//     int maxsum= INT_MIN;
//     for(int start = 0; start<n; start++){
//         int  currsum =0;
//         for(int end= start; end<n;end++){
//             currsum= currsum+arr[end];
//            maxsum=max(currsum,maxsum);//(maxsum) is a int max start value is 0

//         }

//     }
//         cout<<"max sum of subarray = " << maxsum << endl;

//     return 0;

// }

//kadanes algorithm

//+ve + +ve = +
//-ve + -ve = +
//+ve + -ve = - this approach is not allowed in a kadanes algo at this situation we restart our current sum = 0 
// and not consider a previous value sum



// #include<iostream>
// #include <vector>
// #include <climits>  // Required for INT_MAX and INT_MIN
// using namespace std;
// int main(){
//     int n =7;
//     int arr[7]={3,-4,5,4,-1,7,-8};                      
//     int maxsum= INT_MIN;
//         int  currsum =0;
//     for(int i= 0; i<n; i++){
        
//             currsum= currsum+arr[i];
//            maxsum=max(currsum,maxsum);//(maxsum) is a int max start value is 0

//         if(currsum<0){
//             currsum=0;
//         }
//     }
//         cout<<"max sum of subarray = " << maxsum << endl;

//       return 0;

// }
 //pair sum
//first in it there are a pair sum are in sorting condition 
 //if it is a sorting condition 
//then the apply  a pair sum approach
//ps>tar j--
//ps<tar i++
//ps=tar ans (i,j)

// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int n = 5;
//     int arr[5] = {2, 3, 4, 5, 6};   
//     int i = 0;
//     int j = n - 1;    
//     int tar = 9;     
//     int pairsum;    

//     while (i < j) { // i should not cross j or be at the same place
//         pairsum = arr[i] + arr[j];

//         if (pairsum > tar) {
//             j--;
//         }      
//         else if (pairsum < tar) {
//             i++;
//         }
//         else {
//             cout << "Pair found at indices: " << i << ", " << j << endl;
//             return 0; // Exit the program after finding a pair
//         }
//     }

//     cout << "No pair found" << endl;
//     return 0;
// }

//majority element
// mj >n/2 times n is a size of an array 
// its a brutt force approach in it 1st we check the each element are appears how many times 
 // and then we calculate a mj >n/2 mj is a the element ocuurs a no of times 

// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//     int n = 5;
//     int arr[5] = {2, 2, 4, 4, 2};   
//     for(int i=0;i<n;i++){ // it means similar to a for ( int i = 0; i < n ; i++)// this loop is use to a travell a array 
//         int frequency=0;
//         for(int j=0;j<n;j++){// its a updated loop after for add a frequency
//             if(arr[j]==arr[i]){
//                 frequency++;
//             }
//         }
//         if(frequency > n/2){
//             cout<< arr[i]<<endl;
//         }
//     }
//     return 0;
// }

//compute xpower n
//binary exponention
// #include<iostream>
// using namespace std;
// int main(){
//    long binom = 3 ;
//     double ans =1;
//     int x;
//     while(binom>0){
//         if(binom%2==1){
//             ans*=x;

//         }
//         x*=x;//x sqr
//         cout<<ans<<endl;
//     }
//     return 0;

// }
// pow (x,n)

// //class Solution {
// public:
//     double myPow(double x, int n){
//         if(n ==0) return 1.0;
//         if(x==0) return 0.0; 
//         if(x==1) return 1.0;
//         if (x ==-1 && n%2 ==0)return 1.0;
//         if (x == -1 && n%2 !=0) return -1.0;

//         long binom = n ;
//         if(n<0){
//             x=1/x;
//             binom =-binom;
//         }
//     double ans =1;
//     while(binom>0){ // in there are we use a binary form number 
//         if(binom%2==1){// we find a binary form we want a binary form number last digit is equal to 1
//             ans*=x;
//         }
//         x*=x;//x sqr
//         binom/=2;
//     }
//         return ans;
//     }
// };

// #include<iostream>
// using namespace std;
// int main(){
//     int maxprofit = 0;//[7,5,8,4,1,2]
//    int  bestbuy = price[0];
//     for(int i =1; i<5;i++){
//         if(price[i]>bestbuy){
//             maxprofit = max(maxprofit,price[i]-bestbuy);

//         }
//         bestbuy= min(bestbuy,price[i]);
//
// }
//     return maxprofit;
// }

//container with most water using brutt force approach

// #include <iostream>
// using namespace std;
// int main(){
//     int maxwater =0;
//     for(int i = 0; i<n; i++){//it s a for a left bar side
//         for(int j = i+1; j<n; j++){//its a right bar side
    
//             int width = j-i;
//           int height= min(height[i],height[j]);
//             int area = width*height;
//             maxwater= max(maxwater,area);
//         }
//         cout<<maxwater<<endl;


//     }
//     return 0;

// }
// // cointainr with most  water using a two pointer approach its a optimal solution

// #include<iostream>
// using namespace std;
// int main(){
//     int leftptr = 0;
//     int rightptr = n-1;
//     int maxwater =0;
//     while(leftptr<rightptr){
//         int width = leftptr-rightptr;
//         int height = min(height[leftptr],height[rightptr]);
//         int area = width * height;
//         maxwater = max(maxwater,area);
//         height[leftptr]<height[rightptr]?leftptr++:rightptr--;
//     }
//     cout<<maxwater<<endl;
//     return 0;
// }

//product of array except self  using a bruut force approach
// #include<iostream>
// using namespace std;
// int main (){
//     vector<int>ans;
//      for(int i = 0; i<n;i++){
//         int product = 1;
//         for( int j =0; j<n;j++){// this loop is used when i holding any index number than j comes and  travel a whole vector again and product of a vector number accept i is not equal to j mean the holding number of i and j is  same
//             if(i!==j){
//                 product*=num[j];
//             }
//         }
//      }
//      ans[i]=product;
// }
//product of an array except  self
 // ex 
// nums = [1,2,3,4] ans [24 ,12,8,6]
// means when you drop i =0 and multiply a remainig number in nums then the ans is 24 of j=0 of ans array
// // product of self array using a optimal approach
// #include<iostream>
// using namespace std;
// int main(){
// vector<int>ans(n,1);
// vector<int>prefix(n,1);
// vector<int>suffix(n,1);
// int nums,n;
// for(int i = 1 ; i<n ; i++){
//     prefix[i]=prefix[i-1]*nums[i-1];

// }
// for(int i= n-2;i>=0;i--){//there are i value is a i = n-2 because are a first suffix and prefix value is initialize =1 thats why we n-2;
//     suffix[i]=suffix[i+1]*nums[i+1];
// }
// for(int i = n; i<n;i++){
//     ans[i]=prefix[i]*suffix[i];
// }
// return 0;
// }

//pointers
// #include<iostream>
// using namespace std;
// int main(){
//     int a = 5;
//     cout<<&a<<endl;
//     return 0;
// }
//pointer to pointer 
// #include<iostream>
// using namespace std;
// int main(){
//     int a = 5;
//     int* ptr = &a;
//     int**  parptr = &ptr;

//     cout<<&ptr<<endl;
//     cout<<parptr<<endl;

//     return 0;
// }
//in pointer use a * as a derefrence it means refrence means add and derefrence means a value store on a add
// #include<iostream>
// using namespace std;
// int main(){
//     int a = 5;
//     int* ptr = &a;
//     cout<<(*&a)<<endl;

//     cout<<*ptr<<endl;
   

//     return 0;
// }
//null pointer 
//A null pointer that doesn't point to any location
//pass by refrence in it we changes a pass by value to a pass by refrence
// #include<iostream>
// using namespace std;
// void change(int* ptr ){
//     *ptr= 3;
// }
// int main(){
//     int a = 5;
//     change(&a);
//     cout<<"inside a main function"<<a<<endl;
 
//     return 0;
// }

// #include<iostream>
// using namespace std;
// void change(int &b ){//pass by refrence using a alias in it there are a alias means a we can call a same variable with a diffrent name
//     b= 3;
// }
// int main(){
//     int a = 5;
//     change(a);
//     cout<<"inside a main function:"<<a<<endl;
 
//     return 0;
// }
//array ptr
//binary search algo
// binary search are always apply a sorted order
//algo of binary search
// 1]find a mid value with the help of start and mid val
// perform a mid operation (st+end)/2;
// 2)compare a mid value to your target value is big or small 
// 3)if its small then move a lhs side 
// else move rhs side

#include<iostream>
#include<vector>
using namespace std;

int binarysearch(vector<int> arr,int tar){

int start=0 ,end = arr.size()-1;

while(start<=end){
    int mid =(start+end)/2;
    if(tar<arr[mid]){
        end=mid-1;
    }
    else if(tar>arr[mid]){
        start=mid+1;
    }
    else{
        return mid;
    }
}

}

int main() {
    vector<int> arr1={1,2,3,4,5,6,7};//odd 

     int tar1= 6;
     cout<<binarysearch(arr1, tar1)<<endl;
     vector<int> arr2={-1,0,2,4,5,6};//even
     int tar2 = 4;
     cout<<binarysearch(arr2, tar2)<<endl;

     int start,end;
return 0;
}

