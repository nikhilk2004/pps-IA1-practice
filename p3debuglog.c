(gdb) b main
Breakpoint 1 at 0x7cd: file p3original.c, line 25.
(gdb) r
Starting program: /home/runner/pps-IA1-practice/a.out 
warning: Error disabling address space randomization: Operation not permitted

Breakpoint 1, main () at p3original.c:25
25    n=input();
(gdb) s
input () at p3original.c:3
3   {
(gdb) n
5     printf("enter any number :");
(gdb) n
6     scanf("%d",&n);
(gdb) n
enter any number :6
7     return n;
(gdb) n
8   }
(gdb) n
main () at p3original.c:26
26    sum=add(n);
(gdb) s
add (n=6) at p3original.c:11
11    int i,sum=0;
(gdb) n
12    for(i=0;i<=n;i++)
(gdb) n
14      sum=sum+i;
(gdb) n
12    for(i=0;i<=n;i++)
(gdb) n
14      sum=sum+i;
(gdb) n
12    for(i=0;i<=n;i++)
(gdb) n
14      sum=sum+i;
(gdb) n
12    for(i=0;i<=n;i++)
(gdb) n
14      sum=sum+i;
(gdb) n
12    for(i=0;i<=n;i++)
(gdb) n
14      sum=sum+i;
(gdb) n
12    for(i=0;i<=n;i++)
(gdb) n
14      sum=sum+i;
(gdb) n
12    for(i=0;i<=n;i++)
(gdb) n
14      sum=sum+i;
(gdb) n
12    for(i=0;i<=n;i++)
(gdb) n
16    return sum;
(gdb) n
17  }
(gdb) n
main () at p3original.c:27
27    output(sum);
(gdb) s
output (sum=21) at p3original.c:20
20    printf("sum is :%d",sum);
(gdb) n
21  }  
(gdb) n
main () at p3original.c:28
28    return 0;
(gdb) n
29  }(gdb) c
Continuing.
sum is :21[Inferior 1 (process 991) exited normally]
(gdb) q