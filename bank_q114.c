#include <stdio.h>
#include <string.h>

struct Customer {
    int accno;
    char name[50];
    float balance;
};

static void chomp(char *s) {
    size_t len = strlen(s);
    if(len && s[len-1] == '\n') s[len-1] = '\0';
}

int main() {
    struct Customer c[10];
    char buf[100];
    int i;

    for(i = 0; i < 10; i++) {
        printf("Account No: ");
        fgets(buf, sizeof(buf), stdin);
        sscanf(buf, "%d", &c[i].accno);

        printf("Name: ");
        fgets(c[i].name, sizeof(c[i].name), stdin);
        chomp(c[i].name);

        printf("Balance: ");
        fgets(buf, sizeof(buf), stdin);
        sscanf(buf, "%f", &c[i].balance);

        printf("\n");
    }

    printf("Customers with balance < 100:\n");
    for(i = 0; i < 10; i++)
        if(c[i].balance < 100.0f)
            printf("%d  %s\n", c[i].accno, c[i].name);

    int acc, code;
    float amt;

    printf("\nEnter transaction (AccNo Amount Code): ");
    fgets(buf, sizeof(buf), stdin);
    sscanf(buf, "%d %f %d", &acc, &amt, &code);

    for(i = 0; i < 10; i++) {
        if(c[i].accno == acc) {
            if(code == 1) {
                c[i].balance += amt;
                printf("Deposit done. New Balance = %.2f\n", c[i].balance);
            } else {
                if(c[i].balance < amt)
                    printf("Insufficient balance\n");
                else {
                    c[i].balance -= amt;
                    printf("Withdrawal done. New Balance = %.2f\n", c[i].balance);
                }
            }
            return 0;
        }
    }

    printf("Account not found.\n");
    return 0;
}

