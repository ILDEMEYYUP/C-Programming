#include<stdio.h>

/*amaç Verilen bir n sayısı için, n çift parantez kullanarak oluşturulabilecek 
tüm geçerli parantez kombinasyonlarını yazdıran recursive bir fonksiyon yazınız*/


                                                        /*parametreler bunlar*/

void generateParentheses(int open, int close, char *str, int index){
        
        if(close==0 && open==0){
            str[index] = '\0';
            printf("%s\n",str);

            return ;
        }

        if(open>0){
            str[index]='(';
            generateParentheses(open-1,close,str,index+1);
            
        
        }
        if(close>open){
            str[index]=')';
            generateParentheses(open,close-1,str,index+1);
            
            
        }

} 



int main() {
    int n = 3;
    char str[2*n + 1];
    generateParentheses(n, n, str, 0);
    return 0;
}