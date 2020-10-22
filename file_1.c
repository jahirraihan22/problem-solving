#include<stdio.h>
int main(){
    FILE *fp;
    char filename[] = "avb.c";
    fp = fopen(filename,"w");

    fprintf(fp,"abcuygfgdfkhdsvkcjchvm smahgcjhsgvcbjgc");

    fclose(fp);

    return 0;
}
