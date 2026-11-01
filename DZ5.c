/* 5.81 1
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main() {
    int x, y;
    int p = 0;

    printf("x: ");
    scanf("%d", &x);

    printf("y: ");
    scanf("%d", &y);

    for (int i = 0; i < y; i++) {
        p += x;
    }

    printf("p = %d\n", product);
    return 0;
}
*/
/*5.81 2
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int x, y;
    int p = 0;
    int counter = 0;

    printf("x: ");
    scanf("%d", &x);

    printf("y: ");
    scanf("%d", &y);

    while (counter < x) {
        p += y;
        counter++;
    }

    printf("p = %d\n", p);
    return 0;
}*/
/*5.82
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    int fact=1;

    printf("n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        fact *= i;
    }
    printf("%d", fact);
}
*/
/*5.83
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    int power = 1;
    int stepen;

    printf("n: ");
    scanf("%d", &n);
    printf("stepen: ");
    scanf("%d", &stepen);

    for (int i = 1; i <= stepen; i++) {
        power *= n;
    }
    printf("%d", power);
} */
/*5.85
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    int rev = 0;
    printf("n: ");
    scanf("%d", &n);

    while (n>0) {
        rev = rev*10 +(n%10);
        n /= 10;
    }
    printf("%d", rev);
} */
/*5.86
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    int kvadrat = 0;
    int pred = 1;
    printf("n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        kvadrat += pred;
        pred += 2;
        printf("%d ", kvadrat);
    }
    
}*/
/*5.87
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n = 10;
    int kvadrat = 0;
    int pred = 1;
    int sum = 0;

    for (int i = 1; i <= n; i++) {
        kvadrat += pred;
        sum += kvadrat;
        pred += 2;
        
    }
    printf("%d ", sum);
}*/
/*5.88
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    printf("n: ");
    scanf("%d", &n);
    int kub = 0;
    int pred = n * (n - 1) + 1;;

    for (int i = 1; i <= n; i++) {
        kub += pred;
        pred += 2;

    }
    printf("%d ", kub);
}
*/
/*5.89
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    printf(" n: ");
    scanf("%d", &n);
    // Считываем значение n с клавиатуры
    if (n <= 1 || n > 10) {
        return 1;
    }

    long long sum = 0;
    long long fact = 1;
    int i = 1;

    while (i <= n) {
        fact *= i;
        sum += fact;
        i++;
    }

    printf("%lld", sum);

    return 0;
}*/
/*5.90
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    printf(" n: ");
    scanf("%d", &n);
    // Считываем значение n с клавиатуры
    if (n <= 1 || n > 10) {
        return 1;
    }

    double sum = 1.0;
    long long fact = 1;
    int i = 1;

    while (i <= n) {
        fact *= i;
        sum += 1.0/fact;
        i++;
    }

    printf("%lf", sum);

    return 0;
}*/
/*6.80
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    int count0 = 0;
    int count9 = 0;

    printf("n: ");
    scanf("%d", &n);

    if (n == 0) {
        count0 = 1;
    }
    else {
        while (n > 0) {
            int digit = n % 10;
            if (digit == 0) {
                count0++;
            }
            else if (digit == 9) {
                count9++;
            }
            n /= 10;
        }
    }

    if (count0 > count9) {
        printf(" 0 more often (%d against %d).\n", count0, count9);
    }
    else if (count9 > count0) {
        printf(" 9 more often (%d against %d).\n", count9, count0);
    }
    else {
        printf(" 0 and 9 are same (%d).\n", count0);
    }

    return 0;
}*/
/*6.81
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n,a,b;
    int counta = 0;
    int countb = 0;

    printf("n: a: b: ");
    scanf("%d %d %d", &n, &a, &b);

    if (n == a) {
        counta = 1;
    }
    else if (n == b) {
        countb = 1;
    }
    else{
        while (n > 0) {
            int digit = n % 10;
            if (digit == a) {
                counta++;
            }
            else if (digit == b) {
                countb++;
            }
            n /= 10;
        }
    }

    if (counta > countb) {
        printf(" a more often (%d against %d).\n", counta, countb);
    }
    else if (countb > counta) {
        printf(" b more often (%d against %d).\n", countb, counta);
    }
    else {
        printf(" a and b are same (%d).\n", counta);
    }

    return 0;
}*/

/*7.20 a
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    printf(" n: ");
    scanf("%d", &n);

    int sum = 0;
    int sign = 1;

    printf("Input %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        int a;
        scanf("%d", &a);
        sum += sign * a;
        sign = -sign; // меняем знак на противоположный
    }

    printf("sum: %d\n", sum);
    return 0;
}*/
/*7.20в
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;
    printf("n: ");
    scanf("%d", &n);


    int a1, an, current;

    for (int i = 1; i <= n; i++) {
        printf("Input number a%d: ", i);
        scanf("%d", &current);

        if (i == 1) {
            a1 = current;
        }
        else if (i == n) {
            an = current;
        }
    }

    printf("a1 + an = %d\n", a1 + an);

    return 0;
}*/
/*7.21
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double price;
    double totalSum = 0;

    printf("Введите стоимость товаров (для завершения введите 0 или отрицательное число):\n");

    while (1) {
        printf("Цена товара: ");
        scanf("%lf", &price); 
        

        if (price <= 0) {
            break;
        }

        if (price > 1000) {
            totalSum += price;
        }
    }

    printf("Общая стоимость товаров дороже 1000 рублей: %.2f руб.\n", totalSum);

    return 0;
}*/

