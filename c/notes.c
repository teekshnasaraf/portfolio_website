#include <stdio.h>

// chapter 1


/*this is my first c program
which is awesome*/
//boilerplate code
{ "Print to console":{
     "prefix": "c boilerplate code",
     "body": [
         "#include<studio.h>\n",
         "int main(){",
         "\t$1",
         "\tresturn 0;",
         "}"
         ],
    "description":"This is our boilerplate code for runnin C Programs"\
    }
}

int main()
{
    //basic
    int tom;
    int Tom;
    int a=3,d=45,e=10+5;
    float b=8.5;
    char c='Y';
    // decclaring variables to store error codes
    int error_code;
    // 'A' --> a character
    printf("Hello World \n");
    printf("The value of a is %d \n", a);
    printf("The value of b is %f \n", b);
    printf("The value of c is %c \n", c);
    printf("The sum of a and d is %d \n", a + d);
    printf("The value of e is %d \n", e);
    //get value from user
    int f,g;
    printf("Enter the value of f \n");
    scanf("%d",&f);
    printf("Enter the value of g \n");
    scanf("%d",&g);
    printf("The sum of f and g is %d \n", f+g);
   
   
    return 0;
}
//practice set

#include <stdio.h>

int main()
{
    int length=10;
    int breadth=5;
    int area=length*breadth;
    printf("area of rec is %d",area);
   
    return 0;
}

#include <stdio.h>

int main()
{
    int length, breadth ;
    printf("what is length \n");
    scanf("%d",&length);
    printf("what is breadth \n");
    scanf("%d",&breadth);
    int area=length*breadth;
    printf("the area is %d \n", area);
    return 0;
}

#include <stdio.h>

int main()
{
    float pi = 3.14;
    int radius ;
    printf("what is radius \n");
    scanf("%d",&radius);
    int area= pi*radius*radius;
    printf("the area is %d \n", area);
    return 0;
}

#include <stdio.h>

int main()
{
    float pi = 3.14;
    int radius ;
    printf("what is radius \n");
    scanf("%d",&radius);
    int height;
    printf("what is height \n");
    scanf("%d",&height);
    int area= pi*radius*radius*height;
    printf("the area is %d \n", area);
    return 0;
}

#include <stdio.h>

int main()
{
    int celcius;
    printf("what is celcius \n");
    scanf("%d",&celcius);
    int farenheit=1.8*celcius + 32 ;
    printf("the degree in farenheit is %d \n", farenheit);
    return 0;
}

#include <stdio.h>

int main()
{
    int P, N, R;
    printf("what is principal \n");
    scanf("%d",&P);
    printf("what is number of years \n");
    scanf("%d",&N);
    printf("what is rate of interest \n");
    scanf("%d",&R);
    int SI = P*N*R ;
    printf("the final cost is %d \n", SI);
    return 0;
}

//chapter 2

#include <stdio.h>
#include <math.h>

int main()
{
    printf("the value of 4 ^2 is %f\n", pow(4,2));

    return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    int x = 4 ;
    int y = 9 ;
    printf("the value of 3x -8y is %d\n", 3*x - 8*y);

    return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    int x = 2 ;
    int y = 3 ;
    printf("the value of 8y/3x is %d\n",  8*y/(3*x) );

    return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    int x,y ;
    printf("value of x\n");
    scanf("%d",&x);
    printf("the value of y \n");
    scanf("%d",&y);
    printf("the value of x^y is %f\n", pow(x,y) );

    return 0;
}

// practice set

#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    printf("enter the number\n");
    scanf("%d",&a);
    printf("divisibility test return : %d\n", a%97);
    return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    int x=2, y=3, z=3, k=1;
    printf("answer is %d\n", 3*x/y-z+k);
    return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    printf("answer is %f\n", 3.0 +1);
    return 0;
}

// chapter 3

#include <stdio.h>
#include <math.h>

int main()
{
    int a,b;
    printf("enter a number\n");
    scanf("%d",&a);
   
    if (a%2==0){
        printf("%d is even\n",a);
        }
       
    else {
        printf("%d is odd \n",a);
    }
    return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    int age;
    printf("enter your age\n");
    scanf("%d",&age);
   
    if (age>=90){
        printf("you are above 90, you cannot drive\n");
        }
   
    if (age<=18){
        printf("you are underage, so u cannot drive \n");
    }    
    else {
        printf("you can drive \n");
    }    
    return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    int age;
    printf("enter your age\n");
    scanf("%d",&age);
   
    if (age<=90 && age>=18){
        printf("you can drive\n");
        }
   
    else {
        printf("you cannot drive \n");
    }    
    return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    int age;
    int vippass = 0;
    vippass=1;
    printf("enter your age\n");
    scanf("%d",&age);
   
    if ((age<=90 && age>=18)||vippass==1){
        printf("you can drive\n");
        }
   
    else {
        printf("you cannot drive \n");
    }    
    return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
   
    if (a == 1){
        printf("your number is 1\n");
        }
   
    else if(a ==2){
        printf("your number is 2\n");
    }    
    else {
        printf("your number is not 1 or 2 \n");
    }
    return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    printf("enter a number\n");
    scanf("%d",&a);
   
    (a<5)? printf("a is less than 5"):printf("a is not less than 5");
   
    return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    int rate;
    printf("enter your rate (1-5)\n");
    scanf("%d",&rate);
    switch(rate){
        case 1 :
             printf("your rate is 1\n");
             break;
        case 2 :
             printf("your rate is 2\n");
             break;
        case 3 :
             printf("your rate is 3\n");
             break;
        case 4 :
             printf("your rate is 4\n");
             break;
        case 5 :
             printf("your rate is 5\n");
             break;
        default :
             printf("invalid rating");
             break;
       
    }
   
    return 0;
}

//practice set

#include <stdio.h>
#include <math.h>

int main()
{
    int a = 10;
    if (a=11){
        printf("a is 11");
    }
    else {
        printf("a is not 11");
    }
   
    return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    int m,p,c;
    printf("enter your math marks\n");
    scanf("%d",&m);
    printf("enter you physics marks\n");
    scanf("%d",&p);
    printf("enter you chem marks\n");
    scanf("%d",&c);
    int t=(m+p+c)/3;
    if (m>=33 && p>=33 && c>=33 && t>=40){
        printf("you have passed");
    }
    else {
        printf("you have failed");
    }
   
    return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    float a;
    printf("enter your income in lakhs\n");
    scanf("%f",&a);
   
    if (a<2.5){
        printf("you have %f tax",0.0);
    }
    else if (a>=2.5 && a<5){
        printf("you have %f tax",a/20.0);
    }
    else if (a>=5 && a,10){
        printf("you have %f tax",a/5.0);
    }
    else {
        printf("you have %f tax",3*a/10.0);
    }
   
    return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    printf("enter a year\n");
    scanf("%d",&a);
    int y = a%4;
    if (y==0){
        printf("it is  leap year");
    }
    else {
        printf("it is not a leap year");
    }
   
    return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    //97 - 122 = a-z
    char letter;
    printf("enter a character\n");
    scanf("%c",&letter);
    if (letter<=122 && letter>=97){
        printf("it is in lowercase");
    }
    else {
        printf("it is not in lowercase");
    }
   
    return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,d;
    printf("enter a\n");
    scanf("%d",&a);
    printf("enter b\n");
    scanf("%d",&b);
    printf("enter c\n");
    scanf("%d",&c);
    printf("enter d\n");
    scanf("%d",&d);
    if (a>b && a>c && a>d){
        printf("%d is the greatest", a);
    }
    else if (b>a && b>c && b>d){
        printf("%d is the greatest", b);
    }
    else if (c>a && c>b && c>d){
        printf("%d is the greatest",c);
    }
    else {
        printf("%d is the greatest",d);
    }
   
    return 0;
}

//chapter 4

#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    printf("enter a\n");
    scanf("%d",&a);
    while(a<10) {
        printf("%d\n",a);
        a++;
    }
   
        return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    int a;
    scanf("%d",&a);
    while(a<10) {
        printf("%d\n",a);
        a++;
    }
   
        return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    int a=0;
    while(a<=20) {
        if (a>=10){
        printf("%d\n",a);
        }
        a++;
    }
   
        return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    int a=0;
    while(a<=50) {
        if (a>=10){
        printf("%d\n",a);
        }
        a+=5;
    }
   
        return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    int a=0;
    do {
        printf("%d\n",a);
        a++;
        }while(a<10);
       
        return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    int a=4;
    do{
        printf("%d\n",a);
        a--;
    }while(a>0);
        return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    for(int a=0;a<10;a++){
        printf("%d\n",a);
    }
    return 0;
}

#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    printf("enter n\n");
    scanf("%d\n",&n);
    for(int a=0;a<n;a++){
        printf("%d\n",a+1);
    }
    return 0;
}

#include <stdio.h>
#include <math.h>

int main(){
    int n,a;
    printf("enter n\n");
    scanf("%d", &n);
    for(a=1;a<=n;a++){
    printf("%d\n",a);
    }
}

#include <stdio.h>
#include <math.h>

int main(){
    int a,n;
    printf("enter n \n");
    scanf("%d",&n);
    for(a=n;a;a--){
    printf("%d\n",a);
    }
}

#include <stdio.h>
#include <math.h>

int main(){
    int a=0;
    do{
        printf("%d\n",a);
        if(a==4){
            break;
        }
        a++;
    }while(a<10);
    return 0;
    
}

#include <stdio.h>
#include <math.h>

int main(){
    int skip=5, a =0;
    while(a<10){
        a++;
        if(a!=skip){
            continue;
         }
         else{
             printf("%d",a);
         }
    }
    return 0;
    
}

#include <stdio.h>
#include <math.h>

int main(){
    int skip=5, a =0;
    while(a<10){
        a++;
        if(a==skip){
            continue;
         }
         else{
             printf("%d\n",a);
         }
    }
    return 0;
    
}

//practise set
//1

#include <stdio.h>
#include <math.h>

int main(){
    int a,b;
    printf("enter a number \n");
    scanf("%d",&b);
    while(a<=10){
        printf("%d\n",b*a);
        a++;
    }
    return 0;
    
}

//2
#include <stdio.h>
#include <math.h>

int main(){
    int a=10,b;
    printf("enter a number \n");
    scanf("%d",&b);
    while(a>0){
        printf("%d\n",b*a);
        a--;
    }
    return 0;
    
}

//6
#include <stdio.h>
#include <math.h>

int main(){
    int i,sum =0, n=10;
    
    for(i=0; i<=n;i++){
         sum+=i;
        printf("%d\n",sum);
    }
    return 0;
    
}

//5
#include <stdio.h>
#include <math.h>

int main(){
    int i,sum =0, n=10;
    
    while(i<=10){
        sum+=i;
        i++;
    }
        printf("%d\n",sum);
    
    return 0;
    
}

//6
#include <stdio.h>
#include <math.h>

int main(){
    int i,sum =0, n=10;
    
    do{
        sum+=i;
        i++;
    }while(i<=10);
        printf("%d\n",sum);
    
    return 0;
    
}

//7
#include <stdio.h>
#include <math.h>

int main(){
    int a,b=8,sum=0, skip=10;
    
    for(a=1;a<=10;a++){
        sum+=b*a;
        if(a!=skip){
            continue;
        }
        else{
            printf("%d\n",sum);
        }
    }
    return 0;
    
}

//8

#include <stdio.h>
#include <math.h>

int main(){
    int a,prod=1;
    
    for(a=10;a>0;a--){
            prod*=a;
            printf("%d\n",prod);
        
    }
    return 0;
    
}

//9

#include <stdio.h>
#include <math.h>

int main(){
    int a=10,prod=1;
    
    while(a>0){
            prod*=a;
            a--;
            printf("%d\n",prod);
        
    }
    return 0;
    
}

//10

#include <stdio.h>
#include <math.h>

int main(){
    int i, n;
    printf("enter n \n");
    scanf("%d",&n);
     for(i=2; i<n; i++)
     {
         if(n%i==0){
             printf("n is not prime");
             break;
         }
         else{
             printf("n is prime");
             break;
         }
    }
    return 0;
    
}

//11

#include <stdio.h>
#include <math.h>

int main(){
    int i=2, n;
    printf("enter n \n");
    scanf("%d",&n);
     while(i<n)
     {
         i++;
         if(n%i==0){
             printf("n is not prime");
             break;
         }
         else{
             printf("n is prime");
             break;
         }
    }
    return 0;
    
}

//project 1

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int a,n,b=0;
    srand(time(0));
    n = rand()%100 +1;//generates random number between 1 and 100
    printf("the number is %d",n);
    return 0;
}

#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

int main(){
    int a,n,b=0;
    srand(time(0));
    n = rand()%100 +1;//generates random number between 1 and 100
    while(a!=n){
        printf("guess the number from 1 to 100\n");
        scanf("%d",&a);
        if (a>n){
            printf("go lower \n");
        }
        else if(a<n){
            printf("go higher \n");
        }
        b++;
    }
    if(a==n){
        printf("u got it! \n");
        printf("it took u %d tries \n",b);
    }
    return 0;
}

//chapter 5

#include <stdio.h>
void display();

int main(){
    int a;
    printf("initializing display function \n");
    display();
    printf("display function finished its work\n");
    return 0;
}

void display(){
    printf("this is display \n");
}

#include <stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();

int main(){
    int a;
    goodmorning();
    goodafternoon();
    goodnight();
    return 0;
}

void goodmorning(){
    printf("good morning \n");
}
void goodafternoon(){
    printf("good afternoon \n");
}
void goodnight(){
    printf("good night \n");
}

#include <stdio.h>
void goodmorning();
void goodafternoon();
void goodnight();

int main(){
    int a;
    goodmorning();
    return 0;
}

void goodmorning(){
    printf("good morning \n");
    goodafternoon();
}
void goodafternoon(){
    printf("good afternoon \n");
    goodnight();
}
void goodnight(){
    printf("good night \n");
}

#include <stdio.h>
int sum(int a,int b);

int main(){
    int c;
    c= sum(2,5);
    printf("the vale of c is %d \n",c);
    return 0;
}

int sum(int a, int b){
    int c;
    c = a+b;
    return c;
}
void display(){
    printf("this is display \n");
}

#include <stdio.h>
void change(int a);

int main(){
    int b=5;
    printf("the value of b before is %d \n",b);
    change(b);
    printf("the value of b after is %d \n",b);
    return 0;
}

void change(int b){
    b=77;
}

#include <stdio.h>
int factorial(int x);

int main(){
    int a=3;
    printf("the value of factorial %d is %d \n",a, factorial(a));
    return 0;
}

int factorial(int x){
    if(x==1 || x==0){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}

//PRACTICE PROBLEM 5

//1

#include <stdio.h>

int average(int x, int y, int z);
int main(){
    int a= 0,b=10,c=5;
    printf("the average of a, b and c is %d\n",average(a,b,c));
    return 0;
}

int average(int x , int y, int z){
    return (x+y+z)/3;
}

#include <stdio.h>

float average(float x, float y, float z);
int main(){
    float a= 4,b=10,c=5;
    printf("the average of a, b and c is %f\n",average(a,b,c));
    return 0;
}

float average(float x , float y, float z){
    return (x+y+z)/3;
}

//2

#include <stdio.h>

float celcius(float x);
int main(){
    float f;
    printf("give a temp in farenheit\n");
    scanf("%f\n",&f);
    printf("the temp in cecius is %f",celcius(f));
    return 0;
}

float celcius(float x){
    return (x - 32)*5/9;
}

//3

#include <stdio.h>

float force(float x);
int main(){
    float m;
    printf("give a mass\n");
    scanf("%f\n",&m);
    printf("the force is %f",force(m));
    return 0;
}

float force(float x){
    return x*9.8;
}

#include <stdio.h>

float force(float x);
int main(){
    float m;
    printf("give a mass\n");
    scanf("%f\n",&m);
    printf("the force is %f",force(m));
    return 0;
}

float force(float x){
    return x*9.8;
}

#include <stdio.h>

float force(float x);
int main(){
    float m;
    printf("give a mass\n");
    scanf("%f",&m);
    printf("the force is %.2f",force(m));
    return 0;
}

float force(float x){
    return x*9.8;
}

//4

#include <stdio.h>

int series(int x);
int main(){
    int n;
    printf("give the number of term\n");
    scanf("%d",&n);
    printf("the %dth term in fibonacci series is %d",n, series(n));
    return 0;
}

int series(int x){
    
    if(x==1){
        return 0;
    }
    else if(x==2){
        return 1;
    }
    else{
        return series(x-1) +series(x-2);;
    }
}

//5

#include <stdio.h>

int main(){
    int a;
    printf("enter a\n");
    scanf("%d",&a);
    printf("%d %d %d \n", a, ++a, a++);
    return 0;
}

//6

#include <stdio.h>

int sum(int x);

int main(){
    int n;
    printf("enter n\n");
    scanf("%d",&n);
    printf("sum of first n natural numbers is %d \n", sum(n));
    return 0;
}

int sum(int x){
    if(x==1){
        return 1;
    }
    else{
        return x +sum(x-1);
    }
}

//7

#include <stdio.h>

void pattern(int n);

int main(){
    int n=4;
    pattern(n);
    return 0;
}

void pattern(int n){
    if(n==1){
        printf("*\n");
        return;
    }
    pattern(n-1);
    for(int i=1;i<=(2*n-1);i++){
        printf("*");
    }
    printf("\n");
}

//CHAPTER 6

#include <stdio.h>

int main(){
    int i=34;
    int*j=&i;
    printf("the value of i is %d\n",i);
    printf("the value of i is %d\n",*j);
    printf("the value of i is %d\n",*(&i));
    printf("the address of i is %u\n",j);
    printf("the address of i is %u\n",&i);
    printf("the value of j is %d\n",j);
    printf("the value of j is %d\n",*(&j));
    return 0;
}

#include <stdio.h>
int sum(int a, int b);

int main(){
    int a=4,b=7;
    printf("the value of 4 + 7 is %d\n",sum(a,b));
    return 0;
}

int sum(int a, int b){
    return a+b;
}

#include <stdio.h>
int sum(int a, int b);

int main(){
    int a=4,b=7;
    printf("the value of a and b is %d and %d\n",a,b);
    printf("the value of 4 + 7 is %d\n",sum(a,b));
    printf("the value of a and b after function call is %d and %d\n",a,b);
    return 0;
}

int sum(int a, int b){
    int c= a+b;
    b=3434;
    a=2345;
    return c;
}

#include <stdio.h>
int sum(int a, int b);

int main(){
    printf("the value of 4 + 7 is %d\n",sum(4,7));
    return 0;
}

int sum(int a, int b){
    return a+b;
}

#include <stdio.h>
void swap(int *a, int *b);
void wrong(int a, int b);
int main(){
    int x=3, y=4;
    printf("the value of x and y is %d and %d\n",x,y);
    wrong(x,y);//will not swap values
    printf("the value of x and y is %d and %d\n",x,y);
    swap(&x,&y);//will swap values
    printf("the value of x and y is %d and %d\n",x,y);
    return 0;
}

void swap(int *a, int *b){
    int c=*a;
    *a=*b;
    *b=c;
}

void wrong(int a, int b){
    int c=a;
    a=b;
    b=c;
}

//PRACTICE SET 6

//1

#include <stdio.h>

int main(){
    int a =5;
    int *j=&a;
    printf("the address of a is %d or %d\n",&a,j);
    printf("the vlaue of a is %d or %d or %d\n",a,*j,*(&a));
    return 0;
}

//2

#include <stdio.h>
void func(int x);

int main(){
    int i =5;
    int *j=&i;
    printf("the value of i is %u\n",i);
    func(i);
    printf("the address of i is %u\n",&i);
    return 0;
}

void func(int x){
    printf("the address of variable i is %u\n",&x);
}

//3

#include <stdio.h>
int times(int *i);

int main(){
    int i =5;
    int *j=&i;
    printf("the value of i is %u\n",i);
    times(&i) ;
    printf("the value is %u\n", i);
    return 0;
}

int times(int *i){
    return *i *=10;
}

//4

#include <stdio.h>
void func(int a, int b, int *sum, float *avg);

int main(){
    int sum;
    int i =5, j=10;
    float avg;
    func(i,j, &sum, &avg);
    printf("the value of sum is %u\n", sum);
    printf("the value of avg is %f\n", avg);
    return 0;
}

void func(int a, int b, int *sum, float *avg){
    *sum = a+b;
    *avg = (float)*sum/2;
}

//5

#include <stdio.h>

int main(){
    int i=5;
    int *j=&i;
    int **k=&j;
    printf("the value of i is %u\n", **k);
    return 0;
}

//6

#include <stdio.h>
int times(int i);

int main(){
    int i =5;
    int *j=&i;
    printf("the value of i is %u\n",i);
    times(i) ;
    printf("the value is %u\n", i);
    return 0;
}

int times(int i){
    return i *=10;
}


//CHAPTER 7

#include <stdio.h>

int main(){
    int marks[4];
    printf("enter value of marks of student 1\n");
    scanf("%d", &marks[0]);
    printf("enter value of marks of student 2\n");
    scanf("%d", &marks[1]);
    printf("enter value of marks of student 3\n");
    scanf("%d", &marks[2]);
    printf("enter value of marks of student 4\n");
    scanf("%d", &marks[3]);
    printf("u have entered %d, %d, %d and %d",marks[0],marks[1],marks[2],marks[3]);
    return 0;
}

#include <stdio.h>

int main(){
    int marks[4];
    printf("enter value of marks of student 1\n");
    scanf("%d", &marks[0]);
    printf("enter value of marks of student 2\n");
    scanf("%d", &marks[1]);
    printf("enter value of marks of student 3\n");
    scanf("%d", &marks[2]);
    printf("enter value of marks of student 4\n");
    scanf("%d", &marks[3]);
    printf("u have entered %d, %d, %d and %d",marks[0]
        ,marks[1],marks[2],marks[3]);
    return 0;
}

#include <stdio.h>

int main(){
    int marks[5];
    
    for(int i=0; i<5; i++){
    printf("enter value of marks of student %d\n", i+1);
    scanf("%d", &marks[i]);
    }
    
    for(int i=0; i<5;i++){
    printf("the marks of student %d is %d \n",i+1, marks[i]);
    }
    return 0;
}

#include <stdio.h>

int main(){
    // method 1
    int a[3]={8,9,7};
    printf("the value of a[0] is %d\n", a[0]);
    printf("the value of a[1] is %d\n", a[1]);
    printf("the value of a[2] is %d\n", a[2]);
    // method 2
    for(int i=0; i<3; i++){
        printf("the value of a[%d] is %d\n", i, a[i]);
    }
    return 0;
}

#include <stdio.h>

int main(){
    int i = 34;
    int *j = &i;
    printf("the value of j is %u\n",j);
    j=j+1;
    j++;
    j=j-1;
    j--;
    printf("the value of j is %u\n",j);
    return 0;
}

#include <stdio.h>

int main(){
    char i = 34;
    char *j = &i;
    printf("the value of j is %u\n",j);
    j=j+1;
    //j++;
    //j=j-1;
    //j--;
    printf("the value of j is %u\n",j);
    return 0;
}

#include <stdio.h>

int main(){
    char i = 34;
    char *j = &i;
    printf("the value of j is %u\n",j);
    j=j+1;
    //j++;
    //j=j-1;
    //j--;
    printf("the value of j is %u\n",j);
    return 0;
}

#include <stdio.h>

int main(){
    int i = 34;
    int *j = &i;
    int *b=&i;
    printf("the value of j is %u\n",j);
    printf("the value of b is %u\n",b);
    if(j==b){
        printf("true");
    }
   
    return 0;
}

#include <stdio.h>

int main(){
    int i = 34;
    int *j = &i;
    int *b=&i;
    printf("the value of j is %u\n",j);
    printf("the value of b is %u\n",b);
    j=j-b;
    printf("the value of j is %u\n",j);
    if(j==b){
        printf("true");
    }
    else{
        printf("false");
    }
    return 0;
}

#include <stdio.h>

int main(){
    int marks[4];
    int *j=&marks[0];
    for(int i=0;i<4;i++){
        printf("enter the value of marks of student %d\n", i+1);
        scanf("%d",&marks[i]);
        j++;
    }
    
    for(int i=0;i<4;i++){
        printf("the marks of student %d is %d\n", i+1, marks[i]);
    }
    return 0;
}

#include <stdio.h>

int main(){
    int marks[4];
    int *j;
    //j=&marks[0];
    j=marks;//both work the same
    for(int i=0;i<4;i++){
        printf("enter the value of marks of student %d\n", i+1);
        scanf("%d",j);
        j++;
    }
    
    for(int i=0;i<4;i++){
        printf("the marks of student %d is %d\n", i+1, marks[i]);
    }
    return 0;
}

#include <stdio.h>

int array(int *j, int n){
    for(int i=0;i<n;i++){
        printf("the value of element %d is %d\n", i+1, *(j+i));
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    array(arr, 7);
    return 0;
}

#include <stdio.h>

//int array(int *j, int n){
//    for(int i=0;i<n;i++){
//        printf("the value of element %d is %d\n", i+1, *(j+i));
//    }
//}
int array(int j[], int n){
    for(int i=0;i<n;i++){
        printf("the value of element %d is %d\n", i+1, j[i]);
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    array(arr, 7);
    return 0;
}

#include <stdio.h>

//int array(int *j, int n){
//    for(int i=0;i<n;i++){
//        printf("the value of element %d is %d\n", i+1, *(j+i));
//    }
//}
int array(int j[], int n){
    for(int i=0;i<n;i++){
        printf("the value of element %d is %d\n", i+1, *(j+i));
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    array(arr, 7);
    return 0;
}

#include <stdio.h>

int array(int j[], int n){
    for(int i=0;i<n;i++){
        printf("the value of element %d is %d\n", i+1, j[i]);
    }
    j[2]=555;// this will change value in main as well
}
int main(){
    int arr[]={1,2,3,4,5,6,7};
    array(arr, 7);
    printf("%d", arr[2]);
    return 0;
}

#include <stdio.h>

int main(){
    int n_students = 3;
    int n_subjects = 5;
    
    int marks[3][5];
    for (int i=0; i<n_students; i++){
        for (int j=0; j<n_subjects; j++){
            printf("enter the marks of student %d in subject %d\n", i+1, j+1);
            scanf("%d", &marks[i][j]);
         }
    }
    
    for (int i=0; i<n_students; i++){
        for (int j=0; j<n_subjects; j++){
            printf("The marks of student %d in subject %d is: %d\n", i+1, j+1, marks[i][j]);
         }
    }
    return 0;
}

//quick quiz


#include <stdio.h>

int main(){
    int n_student;
    printf("enter number of students\n");
    scanf("%d",&n_student);
    int n_sub;
    printf("enter number of subjects\n");
    scanf("%d",&n_sub);
    int marks[n_student][n_sub];
    for(int i=0;i<n_student;i++){
        for (int j=0;j<n_sub;j++){
            printf("enter marks of student %d in subject %d\n",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }
    }
    for (int i=0; i<n_student; i++){
        for (int j=0; j<n_sub; j++){
            printf("%d ",marks[i][j]);
         }
         printf("\n");
    }
    return 0;
}

//practice set 7

//ques 1

#include <stdio.h>

int main(){
    int arr[10];
    int *ptr=arr;
    ptr=ptr+2;
    if(ptr==&arr[2]){
        printf("yes\n");
    }
    else{
        printf("no\n");
    }
    return 0;
}

//ques 2

#include <stdio.h>

int main(){
    int s[4]={1,2,3,4};
    printf("%d\n",s[2]);
    printf("%d\n",*(s+2));
    printf("%d\n",*(s+3));
    return 0;
}

//ques 3

#include <stdio.h>

int main(){
    int mul[10];
    for(int i=0;i<10;i++){
        mul[i]=5*(i+1);
    }
    for(int i=0;i<10;i++){
        printf("5 x %d = %d\n",i+1, mul[i]);
    }
    return 0;
}

//ques 4

#include <stdio.h>

int main(){
    int mul[10];
    int n;
    printf("enter number\n");
    scanf("%d",&n);
    for(int i=0;i<10;i++){
        mul[i]=n*(i+1);
    }
    for(int i=0;i<10;i++){
        printf("%d x %d = %d\n",n,i+1, mul[i]);
    }
    return 0;
}

//ques 5 

#include <stdio.h>

void reverse(int *user){
    int reverse[5];
    for(int i=0; i<5;i++){
        reverse[i]=user[4-i];
        printf("%d",reverse[i]);
    }
}

int main(){
    int user[5]={1,2,3,4,5};
    reverse(user);
    return 0;
}

//ques 6

#include <stdio.h>

int positive(int *user , int n){
    int p;
    for(int i=0; i<n;i++){
        if(user[i]>0){
            p++;
        }
    }
    return p;
}

int main(){
    int user[5]={1,-2,3,-4,5};
    printf("%d",positive(user , 5));
    return 0;
}

//ques 7

#include <stdio.h>

int main(){
    int mul[3][10];
    int p;
    for(int i=0;i<3;i++){
        if (i==0){
            p=2;
        }
        if (i==1){
            p=7;
        }
        if (i==2){
            p=9;
        }
        for (int j=0;j<10;j++){
            mul[i][j]=p*(j+1);
        }
    }
    
    for(int i=0;i<3;i++){
        for(int j=0;j<10;j++){
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}

//ques 8

#include <stdio.h>
void func(int mul[][10],int k,int p){
    int i=k;
    for (int j=0;j<10;j++){
        mul[i][j]=p*(j+1);
        printf("%d ",mul[i][j]);
    }
}

int main(){
    int n;
    printf("enter number of tables\n");
    scanf("%d",&n);
    int mul[n][10];
    int p;
    for (int i=0;i<n;i++){
        printf("\nenter number\n");
        scanf("%d",&p);
        func(mul,i,p);
    }
    return 0;
}

//ques 9

#include <stdio.h>

int main(){
    int arr[3][3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            for (int k=0;k<3;k++){
                int *p=&arr[i][j][k];
                printf("%d ",p);
            }
            printf("\n");
        }
        printf("\n");
    }
    return 0;
}

//chapter 8

#include <stdio.h>

int main(){
    //char str[]="harry";
    char str[]={'h','a','r','r','y','\0'};
    char *ptr = str;
    while(*ptr!='\0'){
        printf("%c",*ptr);
        ptr++;
    }
    return 0;
}

#include <stdio.h>

int main(){
    char *ptr="harry bhai";
    printf("%s",ptr);
    return 0;
}

#include <stdio.h>

int main(){
    char s[34];
    printf("enter name: ");
    scanf("%s",s);
    printf("your name is  : %s",s);
    return 0;
}

#include <stdio.h>

int main(){
    char s[34];
    printf("enter name: ");
    gets(s);
    printf("your name is  : %s",s);
    return 0;
}

#include <stdio.h>

int main(){
    char s[34];
    printf("enter name: ");
    gets(s);
    puts(s);
    return 0;
}

#include <stdio.h>
#include <string.h>

int main(){
    char *ptr = "harry";
    int l=strlen(ptr);
    printf("length of string is %d",l);
    return 0;
}

#include <stdio.h>
#include <string.h>

int main(){
    char *st="This";
    char st2[45];
    strcpy(st2,st);
    printf("now the st2 is %s", st2);
    return 0;
}

#include <stdio.h>
#include <string.h>

int main(){
    char *st="Harry";
    char st2[45] = "Hello";
    strcat(st2,st);
    printf("final string is %s", st2);
    return 0;
}

#include <stdio.h>
#include <string.h>

int main(){
    char st1[45] = "Hello";
    char *st2 = "Hello";
    int val = strcmp(st1,st2);
    printf("the val is %d", val);
    return 0;
}

//practice set

//ques 1

gets()

//ques 2

#include <stdio.h>
#include <string.h>

int main(){
    char st1[34];
    char st2[34];
    char c;
    int i=0;
    printf("enter a string\n");
    scanf("%s",st1);
    printf("enter same string character by character\n");
    while(c!='\n'){
        fflush(stdin);
        scanf("%c",&c);
        printf("%c",c);
        st2[i]=c;
        i++;
    }
    st2[i-1]='\0';
    printf("The value of st1 is %s\n",st1);
    printf("The value of st2 is %s\n",st2);
    printf("strcmp for these strings returns %d", strcmp(st1,st2));
    return 0;
}

//ques 3

#include <stdio.h>
#include <string.h>

int main(){
    char *st = "harry";
    int i=0;
    int count =0;
    while (st[i]!='\0'){
        count++;
        i++;
    }
    printf("%d",count);
    return 0;
}

#include <stdio.h>
int strlen(char *ptr){
    int i=0;
    int count =0;
    while (ptr[i]!='\0'){
        count++;
        i++;
    }
    return count;
}

int main(){
    char *st = "harry";
    int l=strlen(st);
    printf("%d",l);
    return 0;
}

//ques 4

#include <stdio.h>
void slice(char *ptr,int m, int n){
    char ptr1[100];
    int i=m;
    while(i<=n){
        ptr1[i-m]=ptr[i];
        i++;
    }
    ptr1[n-m+1]='\0';
    printf("sliced string is %s",ptr1);
}

int main(){
    char *st = "codewithharry";
    slice(st,1,4);
    return 0;
}

//ques 5

#include <stdio.h>
void strcpy( char * st1, char * st2){
    for(int i=0;i<45;i++){
        st1[i]=st2[i];
    }
    printf("final string is %s",st1);
}

int main(){
    char st1[45] = "codewith";
    char st2[10]="harry";
    strcpy(st1,st2);
    return 0;
}

//ques 6

#include <stdio.h>
void encrypt( char * c){
    char * st =c;
    while(*st!='\0'){
        *st=*st+1;
        st++;
    }
    printf("encrypted string is %s\n",c);
}
int main(){
    char c[]="harry";
    encrypt(c);
    return 0;
}

//or

#include <stdio.h>
void encrypt( char * c){
    char * st =c;
    while(*st!='\0'){
        *st=*st+1;
        st++;
    }
    printf("encrypted string is %s\n",st-5);
}
int main(){
    char c[]="harry";
    encrypt(c);
    return 0;
}

//ques 7

#include <stdio.h>
void encrypt( char * c){
    char * st =c;
    while(*st!='\0'){
        *st=*st+1;
        st++;
    }
    printf("encrypted string is %s\n",c);
}
void decrypt(char *c){
    char *st =c;
    while (*st!='\0'){
        *st=*st-1;
        st++;
    }
    printf("The decrypted string is : %s\n", c);
}
int main(){
    char c[]="harry";
    encrypt(c);
    decrypt(c);
    return 0;
}

//ques 8

#include <stdio.h>
#include <string.h>

int count( char * c, char a){
    int n =0;
    for(int i=0; i<strlen(c);i++){
        if (c[i]==a){
            n++;
        }
    }
    return n;
}
int main(){
    char c[]="teekshnasaraf";
    char x='e';
    int n= count(c,x);
    printf("The number of times '%c' has been repeated is %d",x, n);
    return 0;
}

//ques 9

#include <stdio.h>
#include <string.h>

void present( char * c, char a){
    char *s="False";
    for(int i=0; i<strlen(c);i++){
        if (c[i]==a){
            s="True";
        }
    }
    printf("Presence of %c : %s",a,s);
}
int main(){
    char c[]="teekshnasaraf";
    char x='z';
    present(c,x);
    return 0;
}

//chapter 9

//structures

#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[10];
};

int main(){
    struct employee e1;
    e1.code = 100;
    e1.salary = 34.234;
    //e1.name= "Harry"; --> does not work
    strcpy(e1.name,"Harry");
    printf("%d\n",e1.code);
    printf("%.3f\n",e1.salary);
    printf("%s",e1.name);
    return 0;
}

#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[30];
};

int main(){
    struct employee e1,e2,e3;
    printf("enter code of e1 : ");
    scanf("%d",&e1.code);
    printf("enter salary of e1 : ");
    scanf("%f",&e1.salary);
    printf("enter name of e1 : ");
    scanf("%s",e1.name);

    printf("enter code of e2 : ");
    scanf("%d",&e2.code);
    printf("enter salary of e2 : ");
    scanf("%f",&e2.salary);
    printf("enter name of e2 : ");
    scanf("%s",e2.name);

    printf("enter code of e3 : ");
    scanf("%d",&e3.code);
    printf("enter salary of e3 : ");
    scanf("%f",&e3.salary);
    printf("enter name of e3 : ");
    scanf("%s",e3.name);
    return 0;
}

#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[30];
};

int main(){
    struct employee facebook[100];
    facebook[0].code = 100;
    facebook[0].salary = 100;
    strcpy(facebook[0].name,"Harry");

    facebook[1].code = 101;
    facebook[1].salary = 100;
    strcpy(facebook[1].name,"Rohan");

    facebook[2].code = 103;
    facebook[2].salary = 100;
    strcpy(facebook[2].name,"Khilad");

    printf("%d",facebook[0].code);
    return 0;
}

#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[30];
};

int main(){
    struct employee harry = {100, 34.438, "Harry"};
    printf("Code is : %d \n", harry.code);
    printf("Salary is : %.3f \n", harry.salary);
    printf("Name is : %s \n", harry.name);
    return 0;
}

#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[30];
};

int main(){
    struct employee e1;
    struct employee *ptr;
    ptr= &e1;
    (*ptr).code=101;
    printf("%d",e1.code);
    return 0;
}

#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[30];
};

int main(){
    struct employee e1;
    struct employee *ptr;
    ptr= &e1;
    ptr->code=101;
    printf("%d",e1.code);
    //printf("%d",ptr->code);
    //printf("%d",(*ptr).code);
    return 0;
}

#include <stdio.h>
#include <string.h>

struct employee{
    int code;
    float salary;
    char name[30];
};

void show(struct employee emp){
    printf("The code of employee is: %d\n",emp.code);
    printf("The salary of employee is: %f\n",emp.salary);
    printf("The name of employee is: %s\n",emp.name);
    emp.code=34;
}

int main(){
    struct employee e1;
    struct employee *ptr;
    ptr= &e1;
    ptr->code=101;
    ptr->salary=11.01;
    strcpy(ptr->name,"Harry");
    show(e1);
    printf("The code of employee is: %d\n",e1.code);
    return 0;
}

#include <stdio.h>
#include <string.h>

typedef struct employee{
    int code;
    float salary;
    char name[30];
}emp;

int main(){
    emp e1;
    emp *ptr;
    ptr= &e1;
    ptr->code=101;
    ptr->salary=11.01;
    strcpy(ptr->name,"Harry");
    printf("The code of employee is: %d\n",e1.code);
    printf("The salary of employee is: %f\n",e1.salary);
    printf("The name of employee is: %s\n",e1.name);
    return 0;
}

#include <stdio.h>
#include <string.h>

typedef struct employee{
    int code;
    float salary;
    char name[30];
}emp;

void show(emp emp1){
    printf("The code of employee is: %d\n",emp1.code);
    printf("The salary of employee is: %f\n",emp1.salary);
    printf("The name of employee is: %s\n",emp1.name);
}

int main(){
    emp e1;
    emp *ptr;
    ptr= &e1;
    ptr->code=101;
    ptr->salary=11.01;
    strcpy(ptr->name,"Harry");
    show(e1);
    return 0;
}

#include <stdio.h>
#include <string.h>

typedef struct complex{
    float real;
    float img;
}comp;

void show(comp e1){
    printf("The real part is: %f\n",e1.real);
    printf("The img part is: %f\n",e1.img);
}

int main(){
    comp e1;
    comp *ptr;
    ptr= &e1;
    ptr->real=101;
    ptr->img=11.01;
    show(e1);
    return 0;
}

//practice set
//chapter 9
//ques 1

#include <stdio.h>
#include <string.h>

typedef struct vector{
    int i;
    int j;
}vec;

int main(){
    vec v;
    v.i=10;
    v.j=15;
    printf("The 2 dimentional vector is %d i + %d j",v.i,v.j);
    return 0;
}

#include <stdio.h>
#include <string.h>

typedef struct vector{
    int i;
    int j;
}vec;

int main(){
    vec v;
    printf("Enter i coordinate\n");
    scanf("%d",&v.i);
    printf("Enter j coordinate\n");
    scanf("%d",&v.j);
    printf("The 2 dimentional vector is %d i + %d j",v.i,v.j);
    return 0;
}

//ques 2

#include <stdio.h>
#include <string.h>

typedef struct vector{
    int i;
    int j;
}vec;

int main(){
    vec v1,v2;
    printf("Enter i coordinate of vector 1\n");
    scanf("%d",&v1.i);
    printf("Enter j coordinate of vector 1\n");
    scanf("%d",&v1.j);
    printf("Enter i coordinate of vector 2\n");
    scanf("%d",&v2.i);
    printf("Enter j coordinate of vector 2\n");
    scanf("%d",&v2.j);
    printf("The 2 dimentional vector is %d i + %d j",v1.i+v2.i,v1.j+v2.j);
    return 0;
}

#include <stdio.h>
#include <string.h>

typedef struct vector{
    int i;
    int j;
}vec;

void sum(vec v1, vec v2){
    printf("The 2 dimentional vector is %d i + %d j",v1.i+v2.i,v1.j+v2.j);
}

int main(){
    vec v1,v2;
    printf("Enter i coordinate of vector 1\n");
    scanf("%d",&v1.i);
    printf("Enter j coordinate of vector 1\n");
    scanf("%d",&v1.j);
    printf("Enter i coordinate of vector 2\n");
    scanf("%d",&v2.i);
    printf("Enter j coordinate of vector 2\n");
    scanf("%d",&v2.j);
    sum(v1,v2);
    return 0;
}

//ques 3

i prefer array for 20 int cause its similar datatypes(structures hold dissimilar datatype)

//ques 4

#include <stdio.h>
#include <string.h>

typedef struct vector{
    int i;
    int j;
}vec;

void sum(vec v1, vec v2){
    vec *p1=&v1;
    vec *p2=&v2;
    printf("The 2 dimentional vector is %d i + %d j",((*p1).i)+(p2->i),((*p1).j)+(p2->j));
}

int main(){
    vec v1,v2;
    vec *p1,*p2;
    p1=&v1;
    p2=&v2;
    printf("Enter i coordinate of vector 1\n");
    scanf("%d",&v1.i);
    printf("Enter j coordinate of vector 1\n");
    scanf("%d",&v1.j);
    printf("Enter i coordinate of vector 2\n");
    scanf("%d",&v2.i);
    printf("Enter j coordinate of vector 2\n");
    scanf("%d",&v2.j);
    sum(v1,v2);
    return 0;
}

//ques 5

#include <stdio.h>
#include <string.h>

typedef struct complex{
    float real;
    float img;
}comp;

void show(comp e1){
    printf("The real part is: %f\n",e1.real);
    printf("The img part is: %f\n",e1.img);
}

int main(){
    comp e1;
    comp *ptr;
    ptr= &e1;
    ptr->real=101;
    ptr->img=11.01;
    show(e1);
    return 0;
}

//ques 6

#include <stdio.h>
#include <string.h>

typedef struct complex{
    int real;
    int img;
}comp;

void display(comp c){
    printf("The real and img part is: %d and %d\n",c.real,c.img);
}

int main(){
    comp c[5];
    for(int i=0; i<5;i++){
        printf("Enter real part of complex number %d\n",i+1);
        scanf("%d",&c[i].real);
        printf("Enter complex part of complex number %d\n",i+1);
        scanf("%d",&c[i].img);
    }
    for (int i=0;i<5;i++){
        display(c[i]);
    }
    return 0;
}

//ques 7

same as ques 5

//ques 8

#include <stdio.h>
#include <string.h>

typedef struct account{
    int amount;
    char name[50];
    int age;
}bank;


int main(){
    bank b1;
    printf("Enter amount of person in bank\n");
    scanf("%d",&b1.amount);
    printf("Enter name of person in bank\n");
    scanf("%s",&b1.name);
    printf("Enter age of person in bank\n");
    scanf("%d",&b1.age);
    printf("%d\n",b1.amount);
    printf("%s\n",b1.name);
    printf("%d\n",b1.age);
    return 0;
}

//ques 9

#include <stdio.h>
#include <string.h>

typedef struct day{
    int date;
    int month;
    int year;
}date;

void compare(date d1, date d2){
    if (d1.year >d2.year){
        printf("day 1 comes after day 2");
    }
    if (d1.year <d2.year){
        printf("day 2 comes after day 1");
    }
    if (d1.year==d2.year){
        if(d1.month>d2.month){
            printf("day 1 comes after day 2");
        }
        if(d1.month<d2.month){
            printf("day 2 comes after day 1");
        }
        if(d1.month==d2.month){
            if(d1.date>d2.date){
                printf("day 1 comes after day 2");
            }
            if(d1.date<d2.date){
                printf("day 2 comes after day 1");
            }
            if(d1.date==d2.date){
                printf("day 1 is the same day as day 2");
            }
        }
    }
}

int main(){
    date d1,d2;
    printf("Enter date 1\n");
    scanf("%d",&d1.date);
    printf("Enter numer of month 1\n");
    scanf("%d",&d1.month);
    printf("Enter year 1\n");
    scanf("%d",&d1.year);
    printf("Enter date 2\n");
    scanf("%d",&d2.date);
    printf("Enter numer of month 2\n");
    scanf("%d",&d2.month);
    printf("Enter year 2\n");
    scanf("%d",&d2.year);
    compare(d1,d2);
    return 0;
}

//ques 10

same as ques 9

//chapter 10
//file I/O

#include <stdio.h>
#include <string.h>

int main(){
    FILE *ptr;
    ptr=fopen("filename.ext","mode");
    return 0;
}

#include <stdio.h>
#include <string.h>

int main(){
    FILE *ptr;
    //ptr=fopen("sample.txt","r");
    ptr=fopen("sample.txt","w");
    return 0;
}

#include <stdio.h>
#include <string.h>

int main(){
    FILE *ptr;
    int num, num1;
    ptr=fopen("harry.txt","r");
    fscanf(ptr,"%d",&num);
    fscanf(ptr,"%d",&num1);
    printf("The value of num is %d\n",num);
    printf("The value of num1 is %d\n",num1);
    return 0;
}

#include <stdio.h>
#include <string.h>

int main(){
    FILE *ptr;
    int num, num1;
    ptr=fopen("harry.txt","r");
    fscanf(ptr,"%d",&num);
    fscanf(ptr,"%d",&num1);
    fclose(ptr);
    printf("The value of num is %d\n",num);
    printf("The value of num1 is %d\n",num1);
    return 0;
}

#include <stdio.h>
#include <string.h>

int main(){
    FILE *ptr;
    int num, num1;
    ptr=fopen("harry3.txt","r");
    if (ptr== NULL){
        printf("This file does not exist\n");
    }
    else{
        fscanf(ptr,"%d",&num);
    fscanf(ptr,"%d",&num1);
    fclose(ptr);
    printf("The value of num is %d\n",num);
    printf("The value of num1 is %d\n",num1);
    }
    return 0;
}

#include <stdio.h>
#include <string.h>

int main(){
    FILE *ptr;
    int num=45;
    ptr=fopen("generated.txt","w");
    fprintf(ptr,"The number is %d",num);
    return 0;
}

#include <stdio.h>
#include <string.h>

int main(){
    FILE *ptr;
    int num=45;
    ptr=fopen("generated.txt","w");
    fprintf(ptr,"The number is %d\n",num);
    fprintf(ptr,"Thanks for using fprintf\n");
    return 0;
}

#include <stdio.h>
#include <string.h>

int main(){
    FILE *ptr;
    int num=45;
    ptr=fopen("generated.txt","r");
    printf("The value of my char is %c\n",fgetc(ptr));
    printf("The value of my char is %c\n",fgetc(ptr));
    printf("The value of my char is %c\n",fgetc(ptr));
    printf("The value of my char is %c\n",fgetc(ptr));
    printf("The value of my char is %c\n",fgetc(ptr));
    printf("The value of my char is %c\n",fgetc(ptr));
    printf("The value of my char is %c\n",fgetc(ptr));
    return 0;
}

#include <stdio.h>
#include <string.h>

int main(){
    FILE *ptr;
    int num=45;
    ptr=fopen("generated.txt","w");
    fputc('c',ptr);
    return 0;
}

#include <stdio.h>
#include <string.h>

int main(){
    FILE *ptr;
    FILE *ptr1;
    char c;
    ptr=fopen("generated.txt","w");
    fprintf(ptr,"hello my name is teekshna\n");
    fclose(ptr);
    ptr1=fopen("generated.txt","r");
    c=fgetc(ptr1);
    while(c!=EOF){
        printf("%c",c);
        c=fgetc(ptr1);
    }
    return 0;
}

//practice set
//chapter 10

//ques 1

#include <stdio.h>
#include <string.h>


int main(){
     FILE *ptr;
     ptr=fopen("sample.txt","w");
     for(int i=0;i<3;i++){
        char c=fgetc(ptr);
        printf("%c\n",c);
     }
    return 0;
}

//ques 2

#include <stdio.h>
#include <string.h>

int main(){
     FILE *ptr;
     int n;
     printf("Enter n\n");
     scanf("%d",&n);
     ptr=fopen("sample.txt","w");
     for(int i=0;i<=10;i++){
        fprintf(ptr," %d x %d = %d\n",n,i, n*i);
     }
    return 0;
}

//ques 3

#include <stdio.h>
#include <string.h>

int main(){
     FILE *ptr;
     FILE *ptr1;
     ptr=fopen("sample.txt","r");
     ptr1=fopen("sample1.txt","w");
     char c=fgetc(ptr);
     while(c!=EOF){
        fprintf(ptr1,"%c",c);
        c=fgetc(ptr);
     }
     fseek(ptr,0,SEEK_SET);
     char d=fgetc(ptr);
     while(d!=EOF){
        fprintf(ptr1,"%c",d);
        d=fgetc(ptr);
     }
    return 0;
}
#include <stdio.h>
#include <string.h>

int main(){
     FILE *ptr;
     FILE *ptr1;
     ptr=fopen("sample.txt","r");
     ptr1=fopen("sample1.txt","w");
     char c=fgetc(ptr);
     while(c!=EOF){
        fprintf(ptr1,"%c",c);
        c=fgetc(ptr);
     }
     rewind(ptr);
     char d=fgetc(ptr);
     while(d!=EOF){
        fprintf(ptr1,"%c",d);
        d=fgetc(ptr);
     }
    return 0;
}

//ques 4

#include <stdio.h>
#include <string.h>

int main(){
     FILE *ptr;
     ptr=fopen("sample.txt","w");
     char name1[50], name2[50];
     int salary1, salary2;
     printf("Enter name 1\n");
     scanf("%s",name1);
     printf("Enter name 2\n");
     scanf("%s",name2);
     printf("Enter salary 1\n");
     scanf("%d",&salary1);
     printf("Enter salary 2\n");
     scanf("%d",&salary2);
     for(int i=0;i<50;i++){
      if(name1[i]!='\0'){
         fprintf(ptr,"%c",name1[i]);
      }
      else{
         break;
      }
     }
     fprintf(ptr, ", %d \n",salary1);
     for(int i=0;i<50;i++){
      if(name2[i]!='\0'){
         fprintf(ptr,"%c",name2[i]);
     }
     else{
      break;
     }
     }
     fprintf(ptr, ", %d \n",salary1);
    return 0;
}


//ques 5

#include <stdio.h>
#include <string.h>

int main(){
   FILE *ptr;
   ptr=fopen("sample.txt","r");
   int n;
   fscanf(ptr,"%d",&n);
   fclose(ptr);
   ptr=fopen("sample.txt","w");
   fprintf(ptr,"%d",2*n);
   fclose(ptr);
   return 0;
}

//project 2

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

int main(){
   char a[10]="1";
   int b=4;
   int n;
   int robot=0;
   int human=0;
   int cmp,cmp1,cmp2;
   srand(time(0));
   printf("To exit the game and check final score enter 0\n");
   while(strcmp(a,"0")!=0){
      printf("Enter your choice - rock, paper, scissors\n");
      scanf("%s",a);
      cmp=strcmp("rock",a);
      cmp1=strcmp("paper",a);
      cmp2=strcmp("scissors",a);
      if (cmp==0){
         b=1;
      }
      else if(cmp1==0){
         b=2;
      }
      else if(cmp2==0){
         b=3;
      }
      else{
         printf("Invalid input\n");
         continue;
      }
      //robots choice
      n=rand()%3 +1;
      printf("Robot's choice: ");
      if (n == 1) {
         printf("rock\n");
      }
      else if (n == 2) {
         printf("paper\n");
      } 
      else {
         printf("scissors\n");
      }
      //outcome
      if (n == b){
         printf("Draw - Please Try Again\n");
      } 
      else if ((n == 1 && b == 2) || (n == 2 && b == 3) || (n == 3 && b == 1)) {
         printf("You win!\n");
         human++;
      } 
      else{
         printf("You lose!\n");
         robot++;
      }
   }
   //scores
   if (human>robot){
      printf("You won by %d - %d",human, robot);
   }
   else if (robot >human){
      printf("You lost by %d - %d",robot,human);
   }
   else{
      printf("Oh no its a draw!\n");
   }
   return 0;
}

//random ques of class

#include <stdio.h>
#include <string.h>
void printdigit(int num){
   switch(num){
      case 0: printf("zero "); break;
      case 1: printf("one "); break;
      case 2: printf("two "); break;
      case 3: printf("three "); break;
      case 4: printf("four "); break;
      case 5: printf("five "); break;
      case 6: printf("six "); break;
      case 7: printf("seven "); break;
      case 8: printf("eight "); break;
      case 9: printf("nine "); break;
   }
}
void numtowords(long long n){
   if (n==0){
      printf("zero ");
      return;
   }
   long long rev=0;
   while(n>0){
      rev=rev*10+(n%10);
      n=n/10;
   }
   while(rev>0){
      printdigit(rev%10);
      rev=rev/10;
   }
}
int main(){
   long long n;
   scanf("%lld",&n);
   if (n<0){
      printf("Bla bla\n");
      return 0;
   }
   numtowords(n);
   return 0;
}

//DA1 5a
#include <stdio.h>
#include <string.h>
struct Member {
   char id[50];
   char name[50];
   char status[10];
};
int main() {
   struct Member gym[100];
   int menu, people = 0;
   do {
      printf("\nPick a function to perform (1-5, or 0 to exit):\n");
      scanf("%d", &menu);
      switch (menu) {
         case 1: //add new member
            printf("Input ID and name separated by a space\n");
            scanf("%s %s", gym[people].id, gym[people].name);
            strcpy(gym[people].status, "Active");
            people++;
            printf("Member added successfully.\n");
            break;

         case 2: // Search for a member by ID
            {
               char check[50];
               printf("Enter your ID\n");
               scanf("%s", check);
               int found = 0;
               for (int i = 0; i < people; i++) {
                  if (strcmp(gym[i].id, check) == 0) {
                     printf("Your ID is: %s\nYour name is: %s\nYour status is: %s\n", gym[i].id, gym[i].name, gym[i].status);
                     found = 1;
                     break;
                  }
               }
               if (!found) {
                  printf("Your data does not exist\n");
               }
            }
            break;

         case 3: // Update status to "Inactive"
            {
               char stat[50];
               printf("Enter the ID whose status you would like to change to Inactive\n");
               scanf("%s", stat);
               int found = 0;
               for (int i = 0; i < people; i++) {
                  if (strcmp(gym[i].id, stat) == 0) {
                     strcpy(gym[i].status, "Inactive");
                     printf("Status updated successfully.\n");
                     found = 1;
                     break;
                  }
               }
               if (!found) {
                  printf("ID not found. No status updated.\n");
               }
            }
            break;
            
         case 4: // Display active/inactive members
            {
               int active = 0, inactive = 0;
               for (int i = 0; i < people; i++) {
                  if (strcmp(gym[i].status, "Active") == 0) {
                     active++;
                  } else if (strcmp(gym[i].status, "Inactive") == 0) {
                     inactive++;
                  }
               }
               printf("Active members: %d\nInactive members: %d\n", active, inactive);
            }
            break;

         case 5: // Display all members
            if (people == 0) {
               printf("No members found.\n");
            } else {
               for (int i = 0; i < people; i++) {
                  printf("S.No.: %d, ID: %s, Name: %s, Status: %s\n", i + 1, gym[i].id, gym[i].name, gym[i].status);
               }
            }
            break;

         case 0: // Exit the program
            printf("Exiting program. Goodbye!\n");
            break;

         default:
            printf("Invalid choice. Please enter a number between 0-5.\n");
      }

   } while (menu != 0);

   return 0;
}
//DA1 5b
#include <stdio.h>
#include <string.h>
int main() {
   int m, n, p;
   printf("Enter rows and columns for the first matrix (m n): ");
   scanf("%d %d", &m, &n);
   printf("Enter columns for the second matrix (p): ");
   scanf("%d", &p);
   int a[m][n], b[n][p], result[m][p];
   printf("Enter elements of matrix a (%dx%d):\n", m, n);
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
         scanf("%d", &a[i][j]);
      }
   }
   printf("Enter elements of matrix b (%dx%d):\n", n, p);
   for (int i = 0; i < n; i++) {
      for (int j = 0; j < p; j++) {
         scanf("%d", &b[i][j]);
      }
   }
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < p; j++) {
         result[i][j] = 0;
      }
   }
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < p; j++) {
         for (int k = 0; k < n; k++) {
            result[i][j] += a[i][k] * b[k][j];
         }
      }
   }
   printf("The resultant matrix is :\n");
   for (int i = 0; i < m; i++) {
      for (int j = 0; j < p; j++) {
         printf("%d ", result[i][j]);
      }
      printf("\n");
   }
   return 0;
}
// class ques

#include<stdio.h>
void result (int, int, int, int *, float *);
int main(){

   float avg=0.0;
   int m1, m2, m3,tot=0;
   printf ("Enter marks in three subjects: ");
   scanf ("%d %d %d", &m1, &m2, &m3);
   result (m1, m2, m3, &tot, &avg);
   printf ("Sum = %d \nAverage = %f\n", tot, avg);
   return 0;
}
void result (int m1, int m2, int m3, int *a, float *p){
   *a=(m1+m2+m3);
   *p = *a/ 3.0;
}

//class ques

#include<stdio.h> 
int divide(int a[100],int x,int count){
   int b[100];
   for(int i=0;i<x;i++){
      b[i]=a[i];
   }
   if (x==1){
      return count;
   }
   else{
      count=count+1;
      int y=x/2;
      return (divide(b,y,count));
   }
}
int main()
{
   int a[100]={1,2,3,4,5,6,7,8,9,10};
   int i=0,n=0;
   while (a[i]!='\0'){
      n++;
      i++;
   }
   int x=n/2;
   int count=divide(a,x,1);
   printf("%d",count);
   return 0;
}
//class ques
#include<stdio.h> 
int fact(int n){
   if(n==1){
      return 1;
   }
   else{
      return n*fact(n-1);
   }
}
float series(int n){
   if(n==1){
      return 1;
   }
   else{
      return fact(n)/n + series(n-1);
   }
}
int main()
{
   int a=3;
   float result=series(a);
   printf("%f",result);
   return 0;
}

//class ques

#include<stdio.h> 
#include <ctype.h>

int main()
{
   char a[10]="ram";
   a[0] = toupper(a[0]);
   printf("%c",a[0]);
   return 0;
}
//chapter 11
//dynamic memory allocation

