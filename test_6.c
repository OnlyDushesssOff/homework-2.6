#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_ALL, "Russian");

    int x, y, z, n;
    scanf_s("%d %d %d %d", &x, &y, &z, &n);
    int array[4] = { 0,0,0,0 };
    array[0] = x;
    array[1] = y;
    array[2] = z;
    array[3] = n;
    int flag1, flag2;
    for (int i = 0; i < 3; i++) {
        if (array[i] != array[i + 1]) {
            flag1 = i;
            flag2 = i + 1;
            break;
        }
    }
    int count1= 0, count2=0;
    for (int i = 0; i < 4; i++) {
        if (array[i] == array[flag1]) {
            count1 += 1;
        }
        if (array[i] == array[flag2]) {
            count2 += 1;
        }
    }
    if (count1 == 1) {
        printf("лишний элемент на %d месте", flag1 + 1);
    }
    if (count2 == 1) {
        printf("лишний элемент на %d месте", flag2 + 1);
    }
}
