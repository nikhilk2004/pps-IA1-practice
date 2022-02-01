(gdb) b main
Breakpoint 1 at 0x7ab: file p1original.c, line 16.
(gdb) r
Starting program: /home/runner/pps-IA1-practice/a.out 
warning: Error disabling address space randomization: Operation not permitted

Breakpoint 1, main () at p1original.c:16
16  {
(gdb) n
18    input(&x,&y);
(gdb) s
input (a=0x7ffe50f9d3bc, b=0x7ffe50f9d3c0) at p1original.c:4
4     printf("enter any two numbers :");
(gdb) n
5     scanf("%d%d",a,b);
(gdb) n
enter any two numbers :9 33
6   }
(gdb) n
main () at p1original.c:19
19    add(x,y,&z);
(gdb) s
add (a=9, b=33, sum=0x7ffe50f9d3c4) at p1original.c:9
9     *sum=a+b;
(gdb) n
10  }
(gdb) n
main () at p1original.c:20
20    output(x,y,z);
(gdb) s
output (a=9, b=33, sum=42) at p1original.c:13
13    printf("sum of two numbers :%d",sum);
(gdb) n
14  }
(gdb) n
main () at p1original.c:21
21    return 0;
(gdb) n
22  }(gdb) c
Continuing.
sum of two numbers :42[Inferior 1 (process 265) exited normally]
(gdb) q