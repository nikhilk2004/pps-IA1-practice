(gdb) b main
Breakpoint 1 at 0x90c: file p6original.c, line 58.
(gdb) r
Starting program: /home/runner/pps-IA1-practice/a.out 
warning: Error disabling address space randomization: Operation not permitted

Breakpoint 1, main () at p6original.c:58
58  {
(gdb) n
61      input_two_string(a,b);
(gdb) s
input_two_string (a=0x7ffc46c95930 "\001", b=0x7ffc46c95950 "\200\t@.\265U")
    at p6original.c:4
4       printf("enter any word:");
(gdb) n
5       scanf("%s",a);
(gdb) n
enter any word:nikhil
6       printf("enter any word:");
(gdb) n
7       scanf("%s",b);
(gdb) n
enter any word:manju
8   }
(gdb) n
main () at p6original.c:62
62      ans=cmp(a,b);
(gdb) s
cmp (a=0x7ffc46c95930 "nikhil", b=0x7ffc46c95950 "manju") at p6original.c:11
11      int i=0,result;
(gdb) n
12      while(a[i] !='\0' && b[i] !='\0')
(gdb) n
14          if(a[i]>b[i])
(gdb) n
16              result=-1;
(gdb) n
17              break;
(gdb) n
28      if(a[i] == '\0')
(gdb) n
32      else if(b[i] == '\0')
(gdb) n
36      if(a[i] == '\0' && b[i] == '\0')
(gdb) n
40      return result;
(gdb) n
41  }
(gdb) n
main () at p6original.c:63
63      output(a,b,ans);
(gdb) s
output (a=0x7ffc46c95930 "nikhil", b=0x7ffc46c95950 "manju", ans=-1)
    at p6original.c:44
44      if(ans == -1)
(gdb) n
46          printf("%s is greater than %s\n",a,b);
(gdb) n
nikhil is greater than manju
56  }
(gdb) n
main () at p6original.c:64
64      return 0;
(gdb) n
65  } (gdb) c
Continuing.
[Inferior 1 (process 342) exited normally]
(gdb) q