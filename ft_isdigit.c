int ft_isdigit(int c)
{
    if(c >= 48 && c <=  57)
    {
        return 1;
    }
    return 0;
}
#include <ctype.h>
#include <stdio.h>
#include <unistd.h> 
int main()
{
     int result = ft_isdigit('5');
    
    // Sonucu bir karaktere dönüştür
    char result_char = result ? '1' : '0';
    
    // Karakteri yazdır
    write(1, &result_char, 1);
}
