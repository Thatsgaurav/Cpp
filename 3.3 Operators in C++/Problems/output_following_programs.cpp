// #include <stdio.h>
// int main()
// {
//     int a = 5;
//     a = 1, 2, 3;
//     printf("%d", a);
//     return 0;
// }
// output 1

// #include <stdio.h>
// int main()
// {
//     int a;
//     a = (1, 2, 3);
//     printf("%d", a);
//     return 0;
// }
// output 3

// #include <stdio.h>
// int main()
// {
//     int x = 2;
//     (x & 1) ? printf("true") : printf("false");
//     return 0;
// }
// output false

// #include <stdio.h>
// int main()
// {
//     printf("%d", 3 * 2 --);
// }
// output (2 --stands meaningless)

// #include <stdio.h>

// int main()
// {
//     int i = 10;
//     i++;
//     i *i;
//     printf("%d\n", i);
//     return 0;
// }
// output 11

// #include <stdio.h>
// int main()
// {
//     int a = 1, b = 3, c;
//     c = b << a;
//     b = c * (b * (++a)--);
//     a = a >> b;
//     printf("%d", b);
//     return 0;
// }
// output 36