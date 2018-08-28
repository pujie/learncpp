#include <stdio.h>

int count_length(int arr[]){
    int i = 0;
    while(arr[i]){
        printf("i : %i => %i\n",i,arr[i]);
        i++;
    }
    return i;
}
int main(int argc, char const *argv[])
{
    /* code */
    int myarray[] = {1,1};
    int arrlength = count_length(myarray);
    printf("The length is %i\n",arrlength);
    return 0;
}
