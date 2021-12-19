
#include <stdio.h>
#include <math.h>

int main()

{ 
   double e, limiteIn, limiteFin, incremento, icont, i;
    e = 2.718282;
    
     scanf_s("%lf %lf %lf", &limiteIn, &limiteFin, &incremento);
    double precision, ans = 1, temp = 1, j;
    precision = (limiteFin - limiteIn) / incremento;
    
    

    

    for (icont = 0.9; icont <= limiteFin; icont+=incremento) {    //PRIMERA COLUMNA
        
        
        
        
       
        //printf_s("%f ", limiteIn);

        
        
        for (j = 1; j <= precision; j++)
        {
            //printf_s("aaaaa1   %.6f %.6f %f    1aaaaa \n", temp, potencia, ans);
            temp *= limiteIn / j;
            
            ans += temp;
          //printf_s("aaaaa    %.6f %.6f %f    aaaaa \n", temp, potencia, ans);
          
        }
        //printf_s("%f ", ans);


        /*for (j = limiteIn; j == limiteIn; j+=0.1)
        {
            
            fact = fact * k;
            temp = limiteIn;
            temp = exp(k) / fact;
            k++;
            resultado2 += temp;
            printf_s("%.6f ", temp);
        }*/
        
        for (i = 1; i <= limiteFin; i += 0.1)
        {
            e = exp(limiteIn);                                     //TERCERA COLUMNA


            

        }
        //printf_s("%.6f \n", e);

        printf_s("%f %f %f\n", limiteIn, ans, e);

        limiteIn += incremento;
        temp = 1;
        ans = 1;
       // printf_s("%.6f %.6f %.6f \n", limiteIn, e);

    }

    return 0;

   /*
       if (i <= limiteFin)
       {
           printf_s("%f \n", e);
           i += 0.1;
           e = exp(i);
       }

       printf_s("\n");
   */
}

