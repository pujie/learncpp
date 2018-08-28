#include <stdio.h>

int main(int argc, char const *argv[])
{
    int angka1;
    int angka2;
    /* code */
    scanf("%i %i",&angka1,&angka2);
    if (angka1%angka2==0){
        printf("%i habis dibagi %i\n",angka1,angka2);
    }else{
        printf("%i tidak habis dibagi %i\n",angka1,angka2);
    }
    return 0;
}
