#include <stdio.h>
void printLove(int n);

int main() {
    int loves;
    printf("How many loves: ");
    scanf_s("%d", &loves);
    printLove(loves);

    return 0;
}

void printLove(int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("                  \n");
        printf("                                                   Love Love Love      Love Love Love\n");
        printf("                                                  Love        Love    Love        Love\n");
        printf("                                                 Love   Y      Love  Love   U      Love\n");
        printf("                                                Love              Love              Love\n");
        printf("                                                Love                                Love\n");
        printf("                                                 Love              O               Love\n");
        printf("                                                   Love                          Love\n");
        printf("                                                    Love                       Love\n");
        printf("                                                      Love                   Love\n");
        printf("                                                        Love               Love\n");
        printf("                                                          Love           Love\n");
        printf("                                                             Love      Love\n");
        printf("                                                                LoveLove\n");
        printf("                                                                  Love\n");

    }
}