#include <stdlib.h>
#include "libft.h"
void *ft_calloc(size_t nmemb, size_t size)
{
    void *address;
    if(nmemb == 0 || size == 0)
        return NULL;
    address = malloc(nmemb*size);
    if (address == NULL)
        return NULL;
    ft_memset(address,0,nmemb*size);
    return address;
}
/*
int main() {
    size_t nmemb = 5;
    size_t size = sizeof(int);
    int *array = ft_calloc(nmemb, size);

    if (array == NULL) {
        printf("Bellek ayıramadık!\n");
        return 1;
    }

    // Array elemanlarını kontrol et
    for (size_t i = 0; i < nmemb; i++) {
        printf("array[%zu] = %d\n", i, array[i]);
    }

    // Belleği serbest bırak
    free(array);

    return 0;
}
*/