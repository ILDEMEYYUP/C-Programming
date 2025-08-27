/*bir stringi pointer ile yazdırma yine index yerine ptr kullanıcam*/
#include<stdio.h>


int main (){    
    char *str ="bu str pointer ile karakterlere ayrılacak !"; /*bırada pointer 'b' harfini 
                                                    işaret ediyor fakat bir sonraki adres hemen sonra 
                                                    bu yüzden ona erişmem kolay*/
    
    while(*(str)!='\0'){
        printf("%c",*(str)); /*pointer ile index kullanımış giib yapım*/
        str++;

    }

}