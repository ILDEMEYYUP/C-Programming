#include<stdio.h>
#include<math.h>

typedef struct {
    double a;
    double b;
    double c;
}coff;

/*yaklaşarak bulalacz*/
double f(double x , coff fx){
    double result= fx.a * pow(x,2)+ fx.b * x + fx.c ;
                    /*fx = ax^2 + bx + c */
    return  result ;

}

void fidn_root_btwen_rage(double *xk ,double *xb, coff fx)
{
    double current_x;
    int maxiter=1000000;
    int iter=0;
    while(iter<maxiter){
        current_x =(*xk+*xb)/2 ;
        if ( f(*xk,fx) * f(current_x,fx)<0 )
            *xb=current_x;
        else 
            *xk=current_x;
        
        if (fabs(f(current_x, fx)) < 0.0000001)  // yaklaşık kök bulundu
            break;
        iter++;
    }
     printf("The root is approximately: %.4lf\n", current_x);

}

int main()
{
    /*derecesi bir oalnlara tam doğru sonucu verityor iki dereceli ise biraz şans lazım */
    coff fx ;
    fx.a=1;
    fx.b=2;
    fx.c=1;
    double xb=0;
    double xk=-2;
    fidn_root_btwen_rage(&xk ,&xb,fx);
}