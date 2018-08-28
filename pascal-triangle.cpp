#include <stdio.h>

using namespace std;
int sum_num(int num1,int num2){
    return num1+num2;
}
void save_array(){

}
void printrow(int *nums){
    /*int nums[] = {0,1,1,0};*/
    printf("nums [4] is %i \n",nums[4]);
    int myarray[10];
    int num = 0;
    unsigned long int numlength = sizeof(nums)/sizeof(nums[0]);
    unsigned long int _numlength = sizeof(nums)/sizeof(*nums);
    /*unsigned long int numlength = nums.size();*/
    int arrayLength = (int) numlength;

    printf("num length is %i \n",arrayLength);
    int i = 0;
    while(nums[i]){
        printf("i : %i\n",nums[i]);
        i++;
    }

    for(int i=0;i<arrayLength;i++){
        if(i>0){
            num = sum_num(nums[i-1],nums[i]);
            printf("%i",num);
            myarray[i-1] = num;
            if(i<arrayLength-1){
                printf(" - ");
            }
        }
    }
    printf("\n");
}
int main(int argc, char const *argv[])
{
    int mynums[5] = {0,1,2,1,0};
    printrow(mynums);
    return 0;
}
