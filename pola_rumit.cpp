#include <stdio.h>

void cetak_pola(int x,int y,int z){
    int middle = z/2;
    bool z_is_ganjil = false;
    if(z%2==1){
        z_is_ganjil = true;
    }else{
        z_is_ganjil = false;
    }
    for(int j=0;j<y;j++){
        for(int i=0;i<x;i++){
            printf("+");
            for(int dindingkecilh=0;dindingkecilh<z;dindingkecilh++){
                printf("-");
            }
        }
        printf("+\n");
        for(int dindingkecilv=0;dindingkecilv<z;dindingkecilv++){
            for(int i=0;i<x;i++){
                printf("|");
                for(int dindingkecilh=0;dindingkecilh<z;dindingkecilh++){
                    if(dindingkecilh==dindingkecilv){
                        if(dindingkecilh==middle){
                            if(z_is_ganjil){
                                printf("X");
                            }else{
                                printf("\\");
                            }
                        }else{
                            printf("\\");
                        }
                    }else{
                        if(dindingkecilh+dindingkecilv==z-1){
                            printf("/");
                        }else{
                            printf(" ");
                        }
                    }
                }
            }
            printf("|\n");
        }
    }
    for(int i=0;i<x;i++){
        printf("+");
        for(int dindingkecilh=0;dindingkecilh<z;dindingkecilh++){
            printf("-");
        }
    }
    printf("+\n");
}
int main(int argc, char const *argv[])
{
    /* code */
    int feedBack = 1,X,Y,P;
    while(feedBack>0){
        printf("Masukkan dimensi:\n");
        printf("X:");
        scanf("%i",&X);
        printf("Y:");
        scanf("%i",&Y);
        printf("P:");
        scanf("%i",&P);
        cetak_pola(X,Y,P);
        printf("\nTekan 0 untuk keluar:");
        scanf("%i",&feedBack);
    }
    return 0;
}
