#include<stdio.h>
#include<string.h>
#include<ctype.h>

#define max_len 100
#define not_found -1

/*malloc kullanmadna yapılcak en iyi text ediyörü*/

int is_found(char *source , char *find){

    int i=0  ,sourcelen=strlen(source), isfound=0 ,len=strlen(find);

    while(i<=sourcelen){
        int j=0;
        while(j<len && find[j]==source[i+j]){
            j++;
        }
        if(len==j)
            isfound=1;
    i++;
}

    return isfound ;

}

char *scanline(char *output,int size){
    char ch;
    int i=0; 
    for(ch = getchar(); ch!=EOF && ch!='\n'&& i<size-1 ;ch=getchar() )
    output[i++]=ch; /* burada stringi dolduruyoruz */

    output[i]='\0';

    while(ch!=EOF && ch!='\n' ) /*fazladan giriş olursa temizle */
        ch=getchar();
    

    return output ;
}

char *shift_arr(char *str,int position , int len )
{
    int i;
    int lenofstr=strlen(str);
    for(i=position;i <= lenofstr; i++){
        str[i]=str[i+len];
    }
    return str ;

}

void delete_str(char *str ,char *delete)
{
    int lenstr=strlen(str),lendel=strlen(delete),i=0;

    while(i<=lenstr){
        int j=0;
        while(j<=lendel && str[i+j]== delete[j]){
            j++;
        }

        if(j==lendel){ /*yani bulduk birini konumu : şuan k i den j ye kadar */ 
            shift_arr(str,i,lendel);
            i=-1; /* bulduktan sonra en baştan tekrar ara*/
    
        }

    i++;}
   

}


int main() {
    char choise;
    char str[max_len]; 
    char temp[30];
    
    printf("Enter a source string: ");
    scanline(str, max_len);

    do {
        printf("\nENTER D(DELETE), I(INSERT), F(FIND) OR Q(QUIT): ");
        scanf(" %c", &choise);  // baştaki boşluk önemli
        choise=toupper(choise);

        switch (choise) {
            case 'D':
           
                printf("String to delete > ");
                scanf("%s", temp);
                delete_str(str, temp);
                printf("String after editing: %s\n", str);
                break;

            case 'I':
            
                do {
                    printf("String to insert > ");
                    scanf("%s", temp);
                    if (strlen(temp) + strlen(str) >= max_len) {
                        printf("It is too long!\n");
                    }
                } while (strlen(temp) + strlen(str) >= max_len);

                strncat(str, temp, max_len - strlen(str) - 1);
                printf("String after editing: %s\n", str);
                break;

            case 'F':
            
                printf("String to find > ");
                scanf("%s", temp);
                if (is_found(str, temp))
                    printf("Found!\n");
                else
                    printf("Not found!\n");
                break;

            case 'Q':
            
                printf("Quitting...\n");
                break;

            default:
                printf("Invalid choice!\n");
                break;
        }

    } while (choise != 'Q');

    return 0;
}
