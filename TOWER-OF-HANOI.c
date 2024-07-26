#include <stdio.h>
void TOH(int n, char Source, char Destination, char Auxillary)
{
    if (n == 1)
    {
        printf("Move From : %c---->%c\n", Source, Destination);
        return;
    }
    TOH(n - 1, Source, Auxillary, Destination);
    printf("Move From : %c---->%c\n", Source, Destination);
    TOH(n - 1, Auxillary, Destination, Source);
}
int main()
{

    int n;
    printf("Enter The Numbers Of Disks: ");
    scanf("%d", &n);
    TOH(n, 'A', 'C', 'B'); // Move n disk From Source To Destination Via Auxillary

    return 0;
    //A------>Source
    //B------>Auxillary
    //C------>Destination
}