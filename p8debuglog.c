(gdb) b main
Breakpoint 1 at 0xa03: file p8original.c, line 63.
(gdb) r
Starting program: /home/runner/pps-IA1-practice/a.out 
warning: Error disabling address space randomization: Operation not permitted

Breakpoint 1, main () at p8original.c:63
63  {
(gdb) n
64    int n=get_n();
(gdb) s
get_n () at p8original.c:8
8   {
(gdb) n
10    printf("enter the number of complex numbers :");
(gdb) n
11    scanf("%d",&n);
(gdb) 
enter the number of complex numbers :4
12    return n;
(gdb) n
13  }
(gdb) n
main () at p8original.c:65
65    complex c[n],res;
(gdb) s
66    input_n_complex(n,c);
(gdb) n
enter the real part:4
enter any imaginary part :3
enter the real part:6
enter any imaginary part :9
enter the real part:8
enter any imaginary part :5
enter the real part:2
enter any imaginary part :4
67    res=add_n_complex(n,c);
(gdb) s
add_n_complex (n=4, c=0x7ffcda1339e0) at p8original.c:40
40    res.img=0;
(gdb) n
41    res.real=0;
(gdb) n
42    for(int i=0;i<n;i++)
(gdb) n
44      res=add(res,c[i]);
(gdb) n
42    for(int i=0;i<n;i++)
(gdb) n
44      res=add(res,c[i]);
(gdb) n
42    for(int i=0;i<n;i++)
(gdb) n
44      res=add(res,c[i]);
(gdb) n
42    for(int i=0;i<n;i++)
(gdb) n
44      res=add(res,c[i]);
(gdb) n
42    for(int i=0;i<n;i++)
(gdb) n
46    return res;
(gdb) n
47  }
(gdb) n
main () at p8original.c:68
68    output(n,c,res);
(gdb) s
output (n=4, c=0x7ffcda1339e0, result=...) at p8original.c:50
50    if(n==1)
(gdb) n
55      for(int i=0;i<n;i++)
(gdb) n
57        printf("%0.2f+%0.2fi",c[i].real,c[i].img);
(gdb) n
55      for(int i=0;i<n;i++)
(gdb) n
57        printf("%0.2f+%0.2fi",c[i].real,c[i].img);
(gdb) n
55      for(int i=0;i<n;i++)
(gdb) n
57        printf("%0.2f+%0.2fi",c[i].real,c[i].img);
(gdb) n
55      for(int i=0;i<n;i++)
(gdb) n
57        printf("%0.2f+%0.2fi",c[i].real,c[i].img);
(gdb) n
55      for(int i=0;i<n;i++)
(gdb) n
59      printf("is   %0.2f+%0.2fi",result.real,result.img);
(gdb) n
61  }
(gdb) n
main () at p8original.c:69
69    return 0;
(gdb) n
70  }(gdb) c
Continuing.
4.00+3.00i+6.00+9.00i8.00+5.00i2.00+4.00iis   20.00+21.00i[Inferior 1 (process 149) exited normally]
(gdb) q
 