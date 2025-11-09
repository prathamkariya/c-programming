#include <stdio.h>
#include <stdlib.h>

#define MAX 5

int index_ = -1;     // last filled index in array
int a[MAX] = {0};

// Function declarations
void Getvalues(int);
void traverse(void);
void Insertatbeginning(int, int);
void insertinbetween(int, int, int);
void insertatend(int, int);
void deletefromstart(void);
void deletefrominbetweenpos(int);
void deletefromlast(void);
void deletebyvalue(int);
void searchval(int);
void searchpos(int, int);
void reversearray(void);
void sortarray(void);
void freq(void);

int main() {
    int ch = 0;
    int ub = MAX - 1;
    int val, pos;

    while (1) {
        printf("\n==============================\n");
        printf("        ARRAY OPERATIONS       \n");
        printf("==============================\n");
        printf("1.  Get Values (fill the array)\n");
        printf("2.  Traverse (display)\n");
        printf("3.  Insert -> at beginning\n");
        printf("4.  Insert -> in between\n");
        printf("5.  Insert -> at end\n");
        printf("6.  Delete from beginning\n");
        printf("7.  Delete from a position\n");
        printf("8.  Delete from last\n");
        printf("9.  Delete by value\n");
        printf("10. Search -> by value\n");
        printf("11. Search -> by position\n");
        printf("12. Reverse the array\n");
        printf("13. Sort the array\n");
        printf("14. Frequency of values\n");
        printf("15. Exit\n");
        printf("------------------------------\n");
        printf("Enter your choice [1...15]: ");
        scanf("%d", &ch);
        printf("\n");

        switch (ch) {
            case 1: Getvalues(ub); break;
            case 2: traverse(); break;
            case 3:
                printf("Enter value to insert: ");
                scanf("%d", &val);
                Insertatbeginning(ub, val);
                break;
            case 4:
                printf("Enter value to insert: ");
                scanf("%d", &val);
                printf("Enter position: ");
                scanf("%d", &pos);
                insertinbetween(ub, pos, val);
                break;
            case 5:
                printf("Enter value to insert: ");
                scanf("%d", &val);
                insertatend(ub, val);
                break;
            case 6: deletefromstart(); break;
            case 7:
                printf("Enter position: ");
                scanf("%d", &pos);
                deletefrominbetweenpos(pos);
                break;
            case 8: deletefromlast(); break;
            case 9:
                printf("Enter value to delete: ");
                scanf("%d", &val);
                deletebyvalue(val);
                break;
            case 10:
                printf("Enter value to search: ");
                scanf("%d", &val);
                searchval(val);
                break;
            case 11:
                printf("Enter position: ");
                scanf("%d", &pos);
                searchpos(pos, ub);
                break;
            case 12: reversearray(); break;
            case 13: sortarray(); break;
            case 14: freq(); break;
            case 15: exit(0);
            default: printf("Invalid choice!\n");
        }
    }
    return 0;
}

void Getvalues(int UB) {
    index_ = -1;
    printf("Enter %d values:\n", MAX);
    while (index_ < UB) {
        index_++;
        printf("a[%d] = ", index_);
        scanf("%d", &a[index_]);
    }
    printf("Array filled. index = %d\n", index_);
}

void traverse() {
    if (index_ == -1) {
        printf("Array is empty.\n");
        return;
    }
    printf("Array elements: ");
    for (int i = 0; i <= index_; i++)
        printf("%d ", a[i]);
    printf("\n");
}

void Insertatbeginning(int UB, int val) {
    if (index_ >= UB) {
        printf("Array is full.\n");
        return;
    }
    if (index_ == -1) {
        index_++;
        a[index_] = val;
    } else {
        for (int i = index_; i >= 0; i--)
            a[i + 1] = a[i];
        a[0] = val;
        index_++;
    }
    printf("%d inserted at beginning.\n", val);
}

void insertinbetween(int UB, int pos, int val) {
    if (index_ == UB) {
        printf("Array is full.\n");
        return;
    }
    if (pos < 0 || pos > index_ + 1) {
        printf("Invalid position.\n");
        return;
    }
    for (int i = index_; i >= pos; i--)
        a[i + 1] = a[i];
    a[pos] = val;
    index_++;
    printf("%d inserted at position %d.\n", val, pos);
}

void insertatend(int UB, int val) {
    if (index_ == UB) {
        printf("Array is full.\n");
        return;
    }
    index_++;
    a[index_] = val;
    printf("%d inserted at end.\n", val);
}

void deletefromstart() {
    if (index_ == -1) {
        printf("Array is empty.\n");
        return;
    }
    int tmp = a[0];
    for (int i = 1; i <= index_; i++)
        a[i - 1] = a[i];
    index_--;
    printf("%d deleted from beginning.\n", tmp);
}

void deletefrominbetweenpos(int pos) {
    if (index_ == -1) {
        printf("Array is empty.\n");
        return;
    }
    if (pos < 0 || pos > index_) {
        printf("Invalid position.\n");
        return;
    }
    int tmp = a[pos];
    for (int i = pos + 1; i <= index_; i++)
        a[i - 1] = a[i];
    index_--;
    printf("%d deleted from position %d.\n", tmp, pos);
}

void deletefromlast() {
    if (index_ == -1) {
        printf("Array is empty.\n");
        return;
    }
    printf("%d deleted from end.\n", a[index_]);
    index_--;
}

void deletebyvalue(int val) {
    if (index_ == -1) {
        printf("Array is empty.\n");
        return;
    }
    int found = 0;
    for (int i = 0; i <= index_; i++) {
        if (a[i] == val) {
            for (int j = i + 1; j <= index_; j++)
                a[j - 1] = a[j];
            index_--;
            i--;  // recheck new value at same position
            found = 1;
            printf("%d deleted.\n", val);
        }
    }
    if (!found)
        printf("%d not found.\n", val);
}

void searchval(int val) {
    int found = 0;
    for (int i = 0; i <= index_; i++) {
        if (a[i] == val) {
            printf("%d found at position %d.\n", val, i);
            found = 1;
        }
    }
    if (!found)
        printf("%d not found.\n", val);
}

void searchpos(int pos, int ub) {
    if (pos < 0 || pos > index_)
        printf("Invalid position.\n");
    else
        printf("Value at position %d = %d\n", pos, a[pos]);
}

void reversearray() {
    int i = 0, j = index_, tmp;
    while (i < j) {
        tmp = a[i];
        a[i] = a[j];
        a[j] = tmp;
        i++;
        j--;
    }
    printf("Array reversed.\n");
}

void sortarray() {
    for (int i = 0; i < index_; i++) {
        for (int j = i + 1; j <= index_; j++) {
            if (a[i] > a[j]) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
    printf("Array sorted in ascending order.\n");
}

void freq() {
    if (index_ == -1) {
        printf("Array is empty.\n");
        return;
    }
    int counted[MAX] = {0};
    printf("Value\tFrequency\n");
    for (int i = 0; i <= index_; i++) {
        if (counted[i]) continue;
        int count = 1;
        for (int j = i + 1; j <= index_; j++) {
            if (a[i] == a[j]) {
                count++;
                counted[j] = 1;
            }
        }
        printf("%d\t%d\n", a[i], count);
    }
}
