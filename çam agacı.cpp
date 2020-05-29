#include <stdio.h>
int main() {
    for(int i=0;i<3;i++) {
    for(int k=0;k<2-i;k++)
    printf(" ");
    for(int j=1;j<=2*i+1;j++) {
    printf("*");
}
    printf("\n");
}
}
