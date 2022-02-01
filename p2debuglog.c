(gdb) b main
Breakpoint 1 at 0x7dd: file p2original.c, line 26.
(gdb) r
Starting program: /home/runner/pps-IA1-practice/a.out 
warning: Error disabling address space randomization: Operation not permitted

Breakpoint 1, main () at p2original.c:26
26    a=input();
(gdb) s
input () at p2original.c:3
3   {
(gdb) n
5     printf("enter any number :");
(gdb) n
6     scanf("%d",&a);
(gdb) n
enter any number :99
7     return a;
(gdb) n
8   }
(gdb) n
main () at p2original.c:27
27    b=input();
(gdb) s
input () at p2original.c:3
3   {
(gdb) n
5     printf("enter any number :");
(gdb) n
6     scanf("%d",&a);
(gdb) n
enter any number :55
7     return a;
(gdb) n
8   }
(gdb) n
main () at p2original.c:28
28    c=input();
(gdb) s
input () at p2original.c:3
3   {
(gdb) n
5     printf("enter any number :");
(gdb) n
6     scanf("%d",&a);
(gdb) n
enter any number :150
7     return a;
(gdb) n
8   }
(gdb) n
main () at p2original.c:29
29    big=com(a,b,c);
(gdb) s
com (a=99, b=55, c=150) at p2original.c:11
11    if(a>b && a>c)
(gdb) n
13    else if(b>a && b>c)
(gdb) n
16          return c;
(gdb) n
17  }
(gdb) n
main () at p2original.c:30
30    output(big);
(gdb) s
output (max=150) at p2original.c:20
20    printf("biggest number is:%d",max);
(gdb) n
21    return max;
(gdb) n
22  }
(gdb) n
main () at p2original.c:31
31    return 0;
(gdb) n
32  }(gdb) c
Continuing.
biggest number is:150[Inferior 1 (process 670) exited normally]
(gdb) q