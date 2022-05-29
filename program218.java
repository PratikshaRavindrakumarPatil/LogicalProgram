/*
OUTPUT:


Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
Microsoft Windows [Version 10.0.22000.675]
(c) Microsoft Corporation. All rights reserved.

C:\Users\manem>cd LB/Home
The system cannot find the path specified.

C:\Users\manem>cd Desktop/LB/Home

C:\Users\manem\Desktop\LB\Home>javac program162.java

C:\Users\manem\Desktop\LB\Home>java program162
Enter the size of array:
5

Enter the element:
11
21
51
101
111

Elements of array are:
11      21      51      101     111

Addition of all number is:295


C:\Users\manem\Desktop\LB\Home>javac program162.java

C:\Users\manem\Desktop\LB\Home>javac program163.java
program163.java:58: error: variable iMax is already defined in method Maximum()
                int iMax=Arr[0];
                    ^
1 error

C:\Users\manem\Desktop\LB\Home>javac program163.java

C:\Users\manem\Desktop\LB\Home>java program163
Enter the size of array:
5

Enter the element:
111
21
61
80
121

Elements of array are:
111     21      61      80      121

Maximum number is:121


C:\Users\manem\Desktop\LB\Home>javac program164.java
program164.java:58: error: cannot find symbol
                iMax=Arr[0];
                ^
  symbol:   variable iMax
  location: class N_Number
program164.java:92: error: cannot find symbol
                iRet=nobj.Minimum();
                         ^
  symbol:   method Minimum()
  location: variable nobj of type N_Number
2 errors

C:\Users\manem\Desktop\LB\Home>javac program164.java

C:\Users\manem\Desktop\LB\Home>java program164
Enter the size of array:
5

Enter the element:
21
40
50
1
101

Elements of array are:
21      40      50      1       101

Minimum number is:1


C:\Users\manem\Desktop\LB\Home>javac program165.java
program165.java:92: error: cannot find symbol
                bRet=nobj.Minimum();
                         ^
  symbol:   method Minimum()
  location: variable nobj of type N_Number
1 error

C:\Users\manem\Desktop\LB\Home>javac program165.java

C:\Users\manem\Desktop\LB\Home>java program165
Enter the size of array:
4

Enter the element:
21
30
2
30

Elements of array are:
21      30      2       30

Enter the number that you want to search:
2
Given number is present.

C:\Users\manem\Desktop\LB\Home>java program165
Enter the size of array:
5

Enter the element:
23
12
11
80
342

Elements of array are:
23      12      11      80      342

Enter the number that you want to search:
11
Given number is present.

C:\Users\manem\Desktop\LB\Home>java program165
Enter the size of array:
4

Enter the element:
23
12
11
80

Elements of array are:
23      12      11      80

Enter the number that you want to search:
101
Given number is not present.

C:\Users\manem\Desktop\LB\Home>javac program166.java

C:\Users\manem\Desktop\LB\Home>java program166
Enter the size of array:
4

Enter the element:
11
21
20
60

Elements of array are:
11      21      20      60

Enter the number that you want to search:
21
Given number is present.

C:\Users\manem\Desktop\LB\Home>javac program167.java
program167.java:89: error: incompatible types: int cannot be converted to boolean
                return iCnt;
                       ^
program167.java:115: error: incompatible types: boolean cannot be converted to int
                iRet=nobj.SearchNumber();
                                      ^
program167.java:116: error: cannot find symbol
                System.out.ptintln("The number is present at index:"+iRet);
                          ^
  symbol:   method ptintln(String)
  location: variable out of type PrintStream
3 errors

C:\Users\manem\Desktop\LB\Home>javac program167.java

C:\Users\manem\Desktop\LB\Home>java program167
Enter the size of array:
5

Enter the element:
11
21
51
10
111

Elements of array are:
11      21      51      10      111

Enter the number that you want to search:
10
The number is present at index:3

C:\Users\manem\Desktop\LB\Home>javac program168.java

C:\Users\manem\Desktop\LB\Home>java program168
Enter the size of array:
5

Enter the element:
10
50
20
40
10

Elements of array are:
10      50      20      40      10

Enter the number that you want to search:
10
The number is first occured at index:0

C:\Users\manem\Desktop\LB\Home>java program168
Enter the size of array:
5

Enter the element:
10
1
70
10
40

Elements of array are:
10      1       70      10      40

Enter the number that you want to search:
10
The number is first occured at index:0

C:\Users\manem\Desktop\LB\Home>javac program169.java

C:\Users\manem\Desktop\LB\Home>java program169
Enter the size of array:
5

Enter the element:
11
20
40
20
10

Elements of array are:
11      20      40      20      10

Enter the number that you want to search:
20
Exception in thread "main" java.lang.ArrayIndexOutOfBoundsException: Index 5 out of bounds for length 5
        at N_Number.LastOccurence(program169.java:68)
        at program169.main(program169.java:99)

C:\Users\manem\Desktop\LB\Home>javac program169.java

C:\Users\manem\Desktop\LB\Home>java program169
Enter the size of array:
5

Enter the element:
11
21
20
50
21

Elements of array are:
11      21      20      50      21

Enter the number that you want to search:
21
The number is Last occured at index:4

C:\Users\manem\Desktop\LB\Home>javac program170.java

C:\Users\manem\Desktop\LB\Home>java program170
Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
@       @       @       @       @       @       @       @       @       @       @
        @       @       @       @       @       @       @       @       @       @
        @       @       @       @
C:\Users\manem\Desktop\LB\Home>javac program170.java

C:\Users\manem\Desktop\LB\Home>java program170
Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
@       @       @       @       @
@       @       @       @       @
@       @       @       @       @
@       @       @       @       @
@       @       @       @       @

C:\Users\manem\Desktop\LB\Home>javac program171.java

C:\Users\manem\Desktop\LB\Home>java program171
Enter the number of rows:
4
Enter the number of columns:

4
Rows:4
Columns:4
        1       2       3       4
        1       2       3       4
        1       2       3       4
        1       2       3       4

C:\Users\manem\Desktop\LB\Home>javac program172.java

C:\Users\manem\Desktop\LB\Home>java program172
Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
        1       1       1       1       1
        2       2       2       2       2
        3       3       3       3       3
        4       4       4       4       4
        5       5       5       5       5

C:\Users\manem\Desktop\LB\Home>javac program173.java

C:\Users\manem\Desktop\LB\Home>java program173
Enter the number:
5
Given number is:5
1
2
3
4
5

C:\Users\manem\Desktop\LB\Home>javac program173.java

C:\Users\manem\Desktop\LB\Home>java program173
Enter the number:
8
Given number is:8
1       2       3       4       5       6       7       8
C:\Users\manem\Desktop\LB\Home>java program173
Enter the number:
-8
Given number is:-8

C:\Users\manem\Desktop\LB\Home>javac program174.java

C:\Users\manem\Desktop\LB\Home>java program174
Enter the number:
-5
Given number is:-5
1       2       3       4       5
C:\Users\manem\Desktop\LB\Home>javac program175.java

C:\Users\manem\Desktop\LB\Home>java program175
Enter the number:
10
Given number is:10
10      9       8       7       6       5       4       3       2       1
C:\Users\manem\Desktop\LB\Home>java program175
Enter the number:
-4
Given number is:-4
4       3       2       1
C:\Users\manem\Desktop\LB\Home>javac program176.java

C:\Users\manem\Desktop\LB\Home>java program176
Enter the number:
5
Given number is:5
1       *       2       *       3       *       4       *       5       *
C:\Users\manem\Desktop\LB\Home>java program176
Enter the number:
-4
Given number is:-4
1       *       2       *       3       *       4       *
C:\Users\manem\Desktop\LB\Home>javac program177.java

C:\Users\manem\Desktop\LB\Home>javac program177.java

C:\Users\manem\Desktop\LB\Home>java program177
Enter the number:
4
Given number is:4
*       1       *       *       2       *       *       3       *       *       4
        *
C:\Users\manem\Desktop\LB\Home>java program177
Enter the number:
3
Given number is:3
*       1       *       *       2       *       *       3       *
C:\Users\manem\Desktop\LB\Home>javac program178.java

C:\Users\manem\Desktop\LB\Home>java program178
Enter the number:
3
Given number is:3
1       *       #       2       *       #       3       *       #
C:\Users\manem\Desktop\LB\Home>javac program180.java
program180.java:42: error: ';' expected
                for(iCnt=1,ch='A';iCnt<=iNo,ch<='Z';iCnt++,ch++)
                                           ^
program180.java:42: error: not a statement
                for(iCnt=1,ch='A';iCnt<=iNo,ch<='Z';iCnt++,ch++)
                                              ^
program180.java:42: error: ')' expected
                for(iCnt=1,ch='A';iCnt<=iNo,ch<='Z';iCnt++,ch++)
                                                   ^
program180.java:42: error: ';' expected
                for(iCnt=1,ch='A';iCnt<=iNo,ch<='Z';iCnt++,ch++)
                                                          ^
program180.java:42: error: ';' expected
                for(iCnt=1,ch='A';iCnt<=iNo,ch<='Z';iCnt++,ch++)
                                                               ^
5 errors

C:\Users\manem\Desktop\LB\Home>javac program180.java

C:\Users\manem\Desktop\LB\Home>java program180
Enter the number:
3
Given number is:3
1       2       3       3       2       1
C:\Users\manem\Desktop\LB\Home>javac program181.java

C:\Users\manem\Desktop\LB\Home>java program181
Enter the number:
3
Given number is:3
3       2       1       1       2       3
C:\Users\manem\Desktop\LB\Home>javac program182.java

C:\Users\manem\Desktop\LB\Home>java program182
Enter the number:
4
Given number is:4
-4      -3      -2      -1      0       1       2       3       4
C:\Users\manem\Desktop\LB\Home>javac program183.java

C:\Users\manem\Desktop\LB\Home>java program183
Enter the number:
6
Given number is:6
2       4       6
C:\Users\manem\Desktop\LB\Home>javac program184.java
program184.java:51: error: illegal character: '#'
                                System.out.print(#"\t");
                                                 ^
1 error

C:\Users\manem\Desktop\LB\Home>javac program184.java
program184.java:51: error: illegal character: '#'
                                System.out.print(#+"\t");
                                                 ^
1 error

C:\Users\manem\Desktop\LB\Home>javac program184.java

C:\Users\manem\Desktop\LB\Home>java program184
Enter the number:
6
Given number is:6
#       0       #       2       #       4       #       6
C:\Users\manem\Desktop\LB\Home>javac program184.java

C:\Users\manem\Desktop\LB\Home>java program184
Enter the number:
5
Given number is:5
#       2       #       4       #
C:\Users\manem\Desktop\LB\Home>javac program185.java

C:\Users\manem\Desktop\LB\Home>java program185
Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
#
#
#
#
#

C:\Users\manem\Desktop\LB\Home>javac program185.java

C:\Users\manem\Desktop\LB\Home>java program185
Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
#
        #
                #
                        #
                                #

C:\Users\manem\Desktop\LB\Home>javac program186.java

C:\Users\manem\Desktop\LB\Home>java program186
Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
2
        4
                6
                        8
                                10

C:\Users\manem\Desktop\LB\Home>javac program186.java

C:\Users\manem\Desktop\LB\Home>java program186
Enter the number of rows:
4
Enter the number of columns:
4
Rows:4
Columns:4
1 1
        2 2
                3 3
                        4 4

C:\Users\manem\Desktop\LB\Home>javac program187.java

C:\Users\manem\Desktop\LB\Home>java program187
Enter the number of rows:
6
Enter the number of columns:
6
Rows:6
Columns:6
#       #       #       #       #       #
#                                       #
#                                       #
#                                       #
#                                       #
#                                       #

C:\Users\manem\Desktop\LB\Home>javac program187.java

C:\Users\manem\Desktop\LB\Home>java program187
Enter the number of rows:
6
Enter the number of columns:
6
Rows:6
Columns:6
#       #       #       #       #       #
#                                       #
#                                       #
#                                       #
#                                       #
#       #       #       #       #       #

C:\Users\manem\Desktop\LB\Home>javac program186.java

C:\Users\manem\Desktop\LB\Home>java program186
Enter the number of rows:
3
Enter the number of columns:
4
Rows:3
Columns:4
1 1
        2 2
                3 3

C:\Users\manem\Desktop\LB\Home>javac program186.java

C:\Users\manem\Desktop\LB\Home>java program186
Enter the number of rows:
4
Enter the number of columns:
3
Rows:4
Columns:3

C:\Users\manem\Desktop\LB\Home>javac program188.java

C:\Users\manem\Desktop\LB\Home>java program188
Enter the number of rows:
4
Enter the number of columns:
5
Rows:4
Columns:5
$       $       $       $       $
$       $                       $
$               $               $
$       $       $       $       $

C:\Users\manem\Desktop\LB\Home>javac program188.java

C:\Users\manem\Desktop\LB\Home>java program188
Enter the number of rows:
6
Enter the number of columns:
6
Rows:6
Columns:6
$       $       $       $       $       $
$       $                               $
$               $                       $
$                       $               $
$                               $       $
$       $       $       $       $       $

C:\Users\manem\Desktop\LB\Home>javac program188.java

C:\Users\manem\Desktop\LB\Home>java program188
Enter the number of rows:
2
Enter the number of columns:
3
Rows:2
Columns:3
Please enter square dimensions.

C:\Users\manem\Desktop\LB\Home>javac program189.java
program189.java:67: error: cannot find symbol
                                        System.out.print(iCnt+"\t");
                                                         ^
  symbol:   variable iCnt
  location: class Pattern
1 error

C:\Users\manem\Desktop\LB\Home>javac program189.java

C:\Users\manem\Desktop\LB\Home>java program189
Enter the number of rows:
4
Enter the number of columns:
4
Rows:4
Columns:4
*       2       3       4
1       *       3       4
1       2       *       4
1       2       3       *

C:\Users\manem\Desktop\LB\Home>javac program190.java

C:\Users\manem\Desktop\LB\Home>java program190
Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
+t1     1       1       1
2       +t2     2       2
3       3       +t3     3
4       4       4       +t4
5       5       5       5       +t

C:\Users\manem\Desktop\LB\Home>javac program190.java

C:\Users\manem\Desktop\LB\Home>java program190
Enter the number of rows:
4
Enter the number of columns:
4
Rows:4
Columns:4
$       1       1       1
2       $       2       2
3       3       $       3
4       4       4       $

C:\Users\manem\Desktop\LB\Home>java program189
Enter the number of rows:
4
Enter the number of columns:
4
Rows:4
Columns:4
$       1       1       1
2       $       2       2
3       3       $       3
4       4       4       $

C:\Users\manem\Desktop\LB\Home>javac program189.java

C:\Users\manem\Desktop\LB\Home>javac program189.java

C:\Users\manem\Desktop\LB\Home>java program189
Enter the number of rows:
4
Enter the number of columns:
4
Rows:4
Columns:4
*       2       3       4
1       *       3       4
1       2       *       4
1       2       3       *

C:\Users\manem\Desktop\LB\Home>javac program190.java

C:\Users\manem\Desktop\LB\Home>javac program191.java

C:\Users\manem\Desktop\LB\Home>java program191
Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
$       *       *       *       *
#       $       *       *       *
#       #       $       *       *
#       #       #       $       *
#       #       #       #       $

C:\Users\manem\Desktop\LB\Home>javac program192.java

C:\Users\manem\Desktop\LB\Home>java program192
Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
@       @       @       @       @
@       *       *       *       @
@       *       *       *       @
@       *       *       *       @
@       @       @       @       @

C:\Users\manem\Desktop\LB\Home>javac program194.java

C:\Users\manem\Desktop\LB\Home>java program194
Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
$       $       $       $       $
$       $       *       *       $
$       *       $       *       $
$       *       *       $       $
$       $       $       $       $

C:\Users\manem\Desktop\LB\Home>java program194
Enter the number of rows:
6
Enter the number of columns:
6
Rows:6
Columns:6
$       $       $       $       $       $
$       $       *       *       *       $
$       *       $       *       *       $
$       *       *       $       *       $
$       *       *       *       $       $
$       $       $       $       $       $

C:\Users\manem\Desktop\LB\Home>javac program195.java

C:\Users\manem\Desktop\LB\Home>java program195
Enter the number of rows:
6
Enter the number of columns:
6
Rows:6
Columns:6
$       $       $       $       $       $
$       $       #       #       #       $
$       *       $       #       #       $
$       *       *       $       #       $
$       *       *       *       $       $
$       $       $       $       $       $

C:\Users\manem\Desktop\LB\Home>javac program196.java

C:\Users\manem\Desktop\LB\Home>java program196
Enter the number of rows:
6
Enter the number of columns:
6
Rows:6
Columns:6
*

*
*

*
*
*

*
*
*
*

*
*
*
*
*

*
*
*
*
*
*


C:\Users\manem\Desktop\LB\Home>javac program196.java

C:\Users\manem\Desktop\LB\Home>java program196
Enter the number of rows:
6
Enter the number of columns:
6
Rows:6
Columns:6
*
*       *
*       *       *
*       *       *       *
*       *       *       *       *
*       *       *       *       *       *

C:\Users\manem\Desktop\LB\Home>javac program197.java

C:\Users\manem\Desktop\LB\Home>java program197
Enter the number of rows:
6
Enter the number of columns:
6
Rows:6
Columns:6
*
*       *
*       *       *
*       *       *       *
*       *       *       *       *
*       *       *       *       *       *

C:\Users\manem\Desktop\LB\Home>javac program198.java

C:\Users\manem\Desktop\LB\Home>java program198
Enter the number of rows:
6
Enter the number of columns:
6
Rows:6
Columns:6
*
*
*
*
*
*

C:\Users\manem\Desktop\LB\Home>javac program198.java

C:\Users\manem\Desktop\LB\Home>java program198
Enter the number of rows:
6
Enter the number of columns:
6
Rows:6
Columns:6
a       a       a       a       a       a
a       a       a       a       a       a
a       a       a       a       a       a
a       a       a       a       a       a
a       a       a       a       a       a
a       a       a       a       a       a

C:\Users\manem\Desktop\LB\Home>javac program198.java

C:\Users\manem\Desktop\LB\Home>java program198
Enter the number of rows:
4
Enter the number of columns:
4
Rows:4
Columns:4
a       b       c       d
a       b       c       d
a       b       c       d
a       b       c       d

C:\Users\manem\Desktop\LB\Home>javac program199.java

C:\Users\manem\Desktop\LB\Home>java program199
Enter the number of rows:
6
Enter the number of columns:
6
Rows:6
Columns:6
A       B       C       D       E       F
A       B       C       D       E       F
A       B       C       D       E       F
A       B       C       D       E       F
A       B       C       D       E       F
A       B       C       D       E       F

C:\Users\manem\Desktop\LB\Home>javac program200.java

C:\Users\manem\Desktop\LB\Home>java program200
Enter the number:
6
Given number is:6
A       B       C       D       E       F
C:\Users\manem\Desktop\LB\Home>javac program201.java

C:\Users\manem\Desktop\LB\Home>java program201
Enter the number:
5
Given number is:5
A       *       B       *       C       *       D       *       E       *
C:\Users\manem\Desktop\LB\Home>javac program202.java

C:\Users\manem\Desktop\LB\Home>java program202
Enter the number:
5
Given number is:5
1       B       3       D       5
C:\Users\manem\Desktop\LB\Home>javac program203.java

C:\Users\manem\Desktop\LB\Home>java program203
Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
A       A       A       A       A
B       B       B       B       B
C       C       C       C       C
D       D       D       D       D
E       E       E       E       E

C:\Users\manem\Desktop\LB\Home>javac program204.java

C:\Users\manem\Desktop\LB\Home>java program204
Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
A
A       B
A       B       C
A       B       C       D
A       B       C       D       E

C:\Users\manem\Desktop\LB\Home>javac program205.java

C:\Users\manem\Desktop\LB\Home>java program205
Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
A
B       B
C       C       C
D       D       D       D
E       E       E       E       E

C:\Users\manem\Desktop\LB\Home>javac program206.java

C:\Users\manem\Desktop\LB\Home>java program206
Enter the number of rows:
6
Enter the number of columns:
6
Rows:6
Columns:6
1
1       2
1       2       3
1       2       3       4
1       2       3       4       5
1       2       3       4       5       6

C:\Users\manem\Desktop\LB\Home>javac program207.java

C:\Users\manem\Desktop\LB\Home>java program207
Enter the number of rows:
6
Enter the number of columns:
6
Rows:6
Columns:6
1
2       2
3       3       3
4       4       4       4
5       5       5       5       5
6       6       6       6       6       6

C:\Users\manem\Desktop\LB\Home>javac program208.java

C:\Users\manem\Desktop\LB\Home>java program208
Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
*       *       *       *       *
*       *       *       *       *
*       *       *       *       *
*       *       *       *       *
*       *       *       *       *

C:\Users\manem\Desktop\LB\Home>javac program208.java

C:\Users\manem\Desktop\LB\Home>java program208
Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
*
*
*
*
*

C:\Users\manem\Desktop\LB\Home>javac program208.java

C:\Users\manem\Desktop\LB\Home>java program208
Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
*
*
*
*
*

C:\Users\manem\Desktop\LB\Home>javac program208.java

C:\Users\manem\Desktop\LB\Home>java program208
Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
                                *
                        *
                *
        *
*

C:\Users\manem\Desktop\LB\Home>javac program209.java

C:\Users\manem\Desktop\LB\Home>java program209
Enter the number of rows:
6
Enter the number of columns:
6
Rows:6
Columns:6
                                        *
                                *
                        *
                *
        *
*

C:\Users\manem\Desktop\LB\Home>java program209
Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
                                *
                        *
                *
        *
*

C:\Users\manem\Desktop\LB\Home>javac program210.java

C:\Users\manem\Desktop\LB\Home>java program210
Error: Could not find or load main class program210
Caused by: java.lang.ClassNotFoundException: program210

C:\Users\manem\Desktop\LB\Home>javac program210.java

C:\Users\manem\Desktop\LB\Home>java program210
Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
*       *       *       *       *
*       *       *       *
*       *       *
*       *
*

C:\Users\manem\Desktop\LB\Home>javac program211.java

C:\Users\manem\Desktop\LB\Home>java program211
Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
A       B       C       D       E
A       B       C       D
A       B       C
A       B
A

C:\Users\manem\Desktop\LB\Home>javac program212.java

C:\Users\manem\Desktop\LB\Home>java program212
Error: Could not find or load main class program212
Caused by: java.lang.ClassNotFoundException: program212

C:\Users\manem\Desktop\LB\Home>javac program212.java

C:\Users\manem\Desktop\LB\Home>java program212
Enter the number of rows:
6
Enter the number of columns:
6
Rows:6
Columns:6
6       5       4       3       2       1
6       5       4       3       2
6       5       4       3
6       5       4
6       5
6

C:\Users\manem\Desktop\LB\Home>javac program213.java

C:\Users\manem\Desktop\LB\Home>java program213
Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
1       1       1       1       1
2       2       2       2
3       3       3
4       4
5

C:\Users\manem\Desktop\LB\Home>javac program214.java

C:\Users\manem\Desktop\LB\Home>java program214
Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
*       *       *       *       *
*
*       *
*       *       *
*       *       *       *
*       *       *       *       *

C:\Users\manem\Desktop\LB\Home>javac program214.java
program214.java:80: error: class, interface, enum, or record expected
}
^
1 error

C:\Users\manem\Desktop\LB\Home>javac program214.java

C:\Users\manem\Desktop\LB\Home>java program214
Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
*       *       *       *       *
*       *       *       *
*       *       *
*       *
*
*
*       *
*       *       *
*       *       *       *
*       *       *       *       *

C:\Users\manem\Desktop\LB\Home>javac program215.java

C:\Users\manem\Desktop\LB\Home>java program215
Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
*       *       *       *       *
*       *       *       *
*       *       *
*       *
*
*       *
*       *       *
*       *       *       *
*       *       *       *       *

C:\Users\manem\Desktop\LB\Home>javac program216.java

C:\Users\manem\Desktop\LB\Home>java program216
Enter the number of rows:
6
Enter the number of columns:
6
Rows:6
Columns:6
*       *
*       *       *
*       *       *       *
*       *       *       *       *
*       *       *       *       *       *
*       *       *       *       *       *
*       *       *       *       *
*       *       *       *
*       *       *
*       *
*

C:\Users\manem\Desktop\LB\Home>javac program217.java

C:\Users\manem\Desktop\LB\Home>java program217
Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
*       *
*       *       *
*       *       *       *
*       *       *       *       *
*       *       *       *
*       *       *       *
*       *       *
*       *

C:\Users\manem\Desktop\LB\Home>javac program217.java

C:\Users\manem\Desktop\LB\Home>java program217
Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
*       *
*       *       *
*       *       *       *
*       *       *       *       *
*       *       *       *       *
*       *       *       *
*       *       *
*       *

C:\Users\manem\Desktop\LB\Home>javac program217.java

C:\Users\manem\Desktop\LB\Home>java program217
Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
*       *
*       *       *
*       *       *       *
*       *       *       *       *
*       *       *       *       *
*       *       *       *
*       *       *
*       *

C:\Users\manem\Desktop\LB\Home>javac program217.java

C:\Users\manem\Desktop\LB\Home>java program217
Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
*       *
*       *       *
*       *       *       *
*       *       *       *       *
*       *       *       *
*       *       *
*       *

C:\Users\manem\Desktop\LB\Home>javac program217.java

C:\Users\manem\Desktop\LB\Home>java program217
Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
*       *
*       *       *
*       *       *       *
*       *       *       *       *
*       *       *       *       *
*       *       *       *
*       *       *
*       *

C:\Users\manem\Desktop\LB\Home>javac program217.java

C:\Users\manem\Desktop\LB\Home>java program217
Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
*       *
*       *       *
*       *       *       *
*       *       *       *       *
*       *       *       *       *
*       *       *       *
*       *       *
*       *
*

C:\Users\manem\Desktop\LB\Home>javac program217.java

C:\Users\manem\Desktop\LB\Home>java program217
Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
*
*       *
*       *       *
*       *       *       *
*       *       *       *       *
*       *       *       *       *
*       *       *       *
*       *       *
*       *
*

C:\Users\manem\Desktop\LB\Home>javac program218.java

C:\Users\manem\Desktop\LB\Home>java program218
Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
*
*       *
*       *       *
*       *       *       *
*       *       *       *       *
*       *       *       *       *
*       *       *       *
*       *       *
*       *

C:\Users\manem\Desktop\LB\Home>javac program218.java

C:\Users\manem\Desktop\LB\Home>java program218
Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
*
*       *
*       *       *
*       *       *       *
*       *       *       *       *
*       *       *       *
*       *       *       *
*       *       *
*       *
*

C:\Users\manem\Desktop\LB\Home>javac program218.java

C:\Users\manem\Desktop\LB\Home>java program218
Enter the number of rows:
5
Enter the number of columns:
5
Rows:5
Columns:5
*
*       *
*       *       *
*       *       *       *
*       *       *       *       *
*       *       *       *
*       *       *
*       *
*

C:\Users\manem\Desktop\LB\Home>




*/

import java.lang.*;
import java.util.*;

class Pattern
{
	private int iRow,iCol;
	
	public void Accept()
	{
		Scanner sobj=new Scanner(System.in);
		
		System.out.println("Enter the number of rows:");
		iRow=sobj.nextInt();
		
		System.out.println("Enter the number of columns:");
		iCol=sobj.nextInt();
	}
	
	public void Display()
	{
		System.out.println("Rows:"+iRow);
		System.out.println("Columns:"+iCol);
	}
	
	public void DisplayPattern()
	{
		int i=0,j=0;
		
		if(iRow!=iCol)
		{
			System.out.println("Please enter square dimensions.");
			return;
		}
		
		
		for(i=1;i<iRow;i++)
		{
			for(j=1;j<=i;j++)
			{
					System.out.print("*\t");

			}
			System.out.println();
		}
		for(i=1;i<=iRow;i++)
		{
			for(j=iCol;j>=1;j--)
			{
					
					if((j>=i))
					{
						
						System.out.print("*\t");
					}
					else
					{
						System.out.print("\t");
					}
			}
			System.out.println();
		}	
		
		
	}
	
}

class program218
{
	public static void main(String arg[])
	{
		Pattern pobj=new Pattern();
		
		pobj.Accept();
		pobj.Display();
		pobj.DisplayPattern();
		
	}
}
