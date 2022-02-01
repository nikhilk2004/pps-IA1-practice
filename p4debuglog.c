(gdb) b main
Breakpoint 1 at 0x844: file p4original.c, line 32.
(gdb) r
Starting program: /home/runner/pps-IA1-practice/a.out 
warning: Error disabling address space randomization: Operation not permitted

Breakpoint 1, main () at p4original.c:32
32  {
(gdb) n
34    n=input();
(gdb) s
input () at p4original.c:3
3   {
(gdb) n
5     printf("enter any number :");
(gdb) n
6     scanf("%d",&n);
(gdb) n
enter any number :4
7     return n;
(gdb) n
8   }
(gdb) n
main () at p4original.c:35
35    aray(n,a);
(gdb) s
aray (n=4, a=0x7fffb0862770) at p4original.c:12
12    for(i=0;i<n;i++)
(gdb) n
14      printf("enter any aray number :");
(gdb) n
15      scanf("%d",&a[i]);
(gdb) n
enter any aray number :1
12    for(i=0;i<n;i++)
(gdb) n
14      printf("enter any aray number :");
(gdb) n
15      scanf("%d",&a[i]);
(gdb) n
enter any aray number :2
12    for(i=0;i<n;i++)
(gdb) n
14      printf("enter any aray number :");
(gdb) n
15      scanf("%d",&a[i]);
(gdb) n
enter any aray number :3
12    for(i=0;i<n;i++)
(gdb) n
14      printf("enter any aray number :");
(gdb) n
15      scanf("%d",&a[i]);
(gdb) n
enter any aray number :5
12    for(i=0;i<n;i++)
(gdb) n
17  }
(gdb) n
main () at p4original.c:36
36    sum=add(n,a);
(gdb) s
add (n=4, a=0x7fffb0862770) at p4original.c:20
20    int i,sum=0;
(gdb) n
21    for(i=0;i<n;i++)
(gdb) n
23      sum=sum+a[i];
(gdb) n
21    for(i=0;i<n;i++)
(gdb) n
23      sum=sum+a[i];
(gdb) n
21    for(i=0;i<n;i++)
(gdb) n
23      sum=sum+a[i];
(gdb) n
21    for(i=0;i<n;i++)
(gdb) n
23      sum=sum+a[i];
(gdb) n
21    for(i=0;i<n;i++)
(gdb) n
25    return sum;
(gdb) n
26  }
(gdb) n
main () at p4original.c:37
37    output(sum);
(gdb) s
output (sum=11) at p4original.c:29
29    printf("sum is %d",sum);
(gdb) n
30  }
(gdb) n
main () at p4original.c:38
38    return 0;
(gdb) n
39  }(gdb) c
Continuing.
sum is 11[Inferior 1 (process 313) exited normally]
(gdb) q
 