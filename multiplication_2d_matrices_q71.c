#include <stdio.h>

int main() {
    int i,j,r,c;

    printf("Enter number of rows: ");
    scanf("%d", &r);
    printf("Enter number of columns: ");
    scanf("%d", &c);

    int a[r][c], b[r][c], mult[r][c];

    printf("\nEnter elements of first matrix:\n");
    for (i=0;i<r;i++) {
        for (j=0;j<c;j++) {
            scanf("%d",&a[i][j]);
        }
    }

    printf("\nEnter elements of second matrix:\n");
    for (i=0;i<r;i++) {
        for (j=0;j<c;j++) {
            scanf("%d",&b[i][j]);
        }
    }

    for (i=0;i<r;i++) {
        for (j=0;j<c;j++) {
            mult[i][j]=a[i][j]*b[i][j];
        }
    }


    printf("\nResultant Matrix after Multiplication:\n");
    for (i=0;i<r;i++) {
        for (j=0;j<c;j++) {
            printf("%d ", mult[i][j]);
        }
        printf("\n");
    }

    return 0;
}
