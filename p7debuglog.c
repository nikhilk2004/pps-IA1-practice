(gdb) b main
Breakpoint 1 at 0x828: file p7original.c, line 30.
(gdb) r
Starting program: /home/runner/pps-IA1-practice/a.out 
warning: Error disabling address space randomization: Operation not permitted

Breakpoint 1, main () at p7original.c:30
30    c1=input();
(gdb) s
input () at p7original.c:8
8   {
(gdb) n
10    printf("enter the real part :");
(gdb) n
11    scanf("%f",&c.real);
(gdb) n
enter the real part :6
12    printf("enter the imaginary part:");
(gdb) n
13    scanf("%f",&c.imaginary);
(gdb) n
enter the imaginary part:3
14    return c;
(gdb) n
15  }
(gdb) n
main () at p7original.c:31
31    c2=input();
(gdb) s
input () at p7original.c:8
8   {
(gdb) n
10    printf("enter the real part :");
(gdb) n
11    scanf("%f",&c.real);
(gdb) n
enter the real part :4
12    printf("enter the imaginary part:");
(gdb) n
13    scanf("%f",&c.imaginary);
(gdb) n
enter the imaginary part:8
14    return c;
(gdb) n
15  }
(gdb) n
main () at p7original.c:32
32    sum=add(c1,c2);
(gdb) s
add (a=..., b=...) at p7original.c:19
19    sum.real=a.real+b.real;
(gdb) n
20    sum.imaginary=a.imaginary+b.imaginary;
(gdb) n
21    return sum;
(gdb) n
22  }
(gdb) n
main () at p7original.c:33
33    output(sum);
(gdb) s
output (sum=...) at p7original.c:25
25    printf("the sum is:%0.1f+%0.1fi ",sum.real,sum.imaginary);
(gdb) n
26  }
(gdb) n
main () at p7original.c:34
34    return 0;
(gdb) n
35  }(gdb) c
Continuing.
the sum is:10.0+11.0i [Inferior 1 (process 553) exited normally]
(gdb) q
 