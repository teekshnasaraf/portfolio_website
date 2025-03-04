14 hr 22 min
include - stdio.h , math.h(calculation) ,string.h (string functions), stdlib.h(random generator), time.h(random generator changing)

remember asky values

priority : (!) > (*,/,%) > (+,-) > (>,<,<=,>=) > (==, !=) > (&&) > (||) > (=)

print - printf
get value from user - scanf
int - %d
float - %f
character - %c ('h')
string = %s
next line - \n
space - \t
comment - //
comment more than 1 line - /* wefeofwsn */
add - +
subtract - -
multiply - *
divide - /
assignment equal - =
modular division(remainder) - %
power - pow (%f)
give value - &
greater or equal to - >=
not equal to - !=
equality check - ==
condition - if, else if, else
loop - while, do while, for
and - &&
or - ||
not - ! (ulta)
skip, continue
types of files - 
text file (.txt, .c)
binary file (.jpg, .dat)
EOF- checks for end of file
file opening modes- 
"r" (for reading)
"rb" (for reading in binary)
"w" (for writing)
"wb" (for writing in binary)
"a" (for append)
rewind(ptr) - to pput the cursor on first char again
fopen("harry.txt","r") - used to open file- takes 2 arguments
fclose(ptr) - used to close file
fscanf(ptr,"%d",&num) - used to take input from the open file
fprintf(ptr,"%d",num) - used to write in a file
fgetc - for reading a file character by character
fputc - for writing a character in a file
rand() - random generator
srand(time(0)) - changing random value every time
gets() = receive multi word string
puts() = output multi word string
strlen()= length of string excluding null character
strcpy(target, source) =target now conatins value in source
strcat(st1, st2) = concatinates st2 in st1 (without space)
strcmp(s1,s2)= compare 2 strings 
   = returns 0 if strings are equal
   = returns negative if ascii value of s1's first mismatch character is less than s2's first mismatch char
   = returns positive if greater
fflush(stdin)= used between 2 scan functions so that second scan func gets flushed
typedef - to create an alias
increase by 1 - i++(first print then inc)
increase by 1 - ++i(first inc then print)
decrease by 1 - i--
inc by certain number - i+=5(inc by 5)
similarly - -=, *=, /=, %=
ascii value of \0 = 0
void display - function
parameter - function that acceots value
return function - function which gives output /value
&i - address of i
*(&i) - gives value at that address
*j= value of i
int*j - declare a variable j of type int pointer
j=&i - store address of i in j
%u - address of variable
value of i = i, *j, *(&j)
address of i = &i, j
j++ - inc by 4 (for a int and float and struct pointer ++ will inc 4 values)
(for a char pointer ++ will inc 1 value)
&arr[0]=arr=address of first input in array
'\0' = null character = end of string
inn defining string use null character to end string using single quotes but no need of nulll with double quotes
struct employee harry = {100, 34.438, "Harry"};
struct employee{ 
    int code;
    char name[10];
};
int main (){
    struct employee e1;
    e1.code =310;
    strcpy(e1.name,"Harry");
}
struct employee e1;
struct employee *ptr;
ptr= &e1;
(*ptr).code=101;
//or
ptr->code=101;
typedef struct employee{

}emp; // we can use emp instead of struct employee everywhere to make it simpler


diff forms

one liner - (condition)? expression if true : expression if false
switch - switch(integer- expression){
       case c1:
         printf("");
         break;
       case c2:
          printf("");
          break;
       default:
          printf("");
          break;

while - int
        while(){
         printf
         a++}
do while - int
           do {
           printf
           a++
           }while();
for - for(int; a<10; a++){
        printf}