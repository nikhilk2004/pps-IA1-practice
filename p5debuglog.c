(gdb) b main
Breakpoint 1 at 0x837: file p5original.c, line 31.
(gdb) r
Starting program: /home/runner/pps-IA1-practice/a.out 
warning: Error disabling address space randomization: Operation not permitted

Breakpoint 1, main () at p5original.c:31
31    a=input();
(gdb) s
input () at p5original.c:3
3   {
(gdb) n
5     printf("enter any number :");
(gdb) n
6     scanf("%d",&n);
(gdb) n
enter any number :36
7     return n;
(gdb) n
8   }
(gdb) n
main () at p5original.c:32
32    b=my_sqrt(a);
(gdb) s
my_sqrt (n=36) at p5original.c:12
12    start=0,end=n;
(gdb) n
13    while((end-start)>=0.00001)
(gdb) n
15      mid=(start+end)/2;
(gdb) n
16      if(mid*mid<n)
(gdb) n
18      if (mid*mid>=n)
(gdb) n
19      end=mid;
(gdb) n
13    while((end-start)>=0.00001)
(gdb) finish
Run till exit from #0  my_sqrt (n=36) at p5original.c:13
0x000055ece340084e in main () at p5original.c:32
32    b=my_sqrt(a);
Value returned is $1 = 6.00000286
(gdb) n
33    output(b);
(gdb) s
output (sqrt_result=6.00000286) at p5original.c:25
25    printf("sq root is %f",sqrt_result);
(gdb) n
26  }
(gdb) n
main () at p5original.c:34
34    return 0;
(gdb) n
35  }(gdb) c
Continuing.
sq root is 6.000003[Inferior 1 (process 362) exited normally]
(gdb) q