#include <stdio.h>
int main()
{
    char nama[20] = "";
    printf("my friend name is : ");
    fgets(nama, sizeof(nama), stdin);
    printf("Hello %s! \n", nama);
    return 0;
}