#include <stdio.h>


int main()
{
    unsigned int time  = 10325;
    int sec = time % 60; // если делится на 60 -  это уже минута
    int min = time / 60 % 60; // целочисленно делим тк отсекаем секунды и берем остаток от 60 тк считаем минуты, а не часы
    int hours = time / 3600;
    int k = 1280 % 11;
    printf("%d", k);
    printf("hours = %d, min = %d, seconds = %d\n", hours, min, sec);
    return 0;
}