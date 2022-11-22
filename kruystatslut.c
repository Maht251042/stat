#include <stdio.h>
#include<math.h>
int main()
{
    int i,column;
    float sum_X=0,x[50],avg_X,varient_X,sxx,sd_X;

    printf("How do you have a column ?\n");
    scanf("%d", &column);
    printf("Please Enter your column (row X)\n");
    for (i = 0; i < column; i++)
    {
        printf("Enter x[%d]: ", i+1);
        scanf(" %f", &x[i]);
    }
    for (i = 0; i < column; i++)
    {
        sum_X+=x[i];
    }
    avg_X=sum_X/column;

    for (i = 0; i < column; i++)
    {
        sxx+=pow(x[i]-avg_X,2);
    }
    varient_X=sxx/column-1;
    sd_X=sqrt(varient_X);

    float sum_Y=0,y[50],avg_Y,varient_Y,syy,sd_Y;
    printf("Please Enter your column (row Y)\n");
    for (i = 0; i < column; i++)
    {
        printf("Enter y[%d]: ", i+1);
        scanf(" %f", &y[i]);
    }
    for (i = 0; i < column; i++)
    {
        sum_Y+=y[i];
    }
    avg_Y=sum_Y/column;

    for (i = 0; i < column; i++)
    {
        syy+=pow(y[i]-avg_Y,2);
    }
    varient_Y=syy/column-1;
    sd_Y=sqrt(varient_Y);

    float sxy,xmuly,r,b0,b1;
    
    for (i = 0; i < column; i++)
    {
        xmuly+= x[i]*y[i];
    }
    sxy = xmuly - (sum_X*sum_Y)/column;
    r = sxy/sqrt(sxx*syy);
    b1 = sxy/sxx;
    b0 = avg_Y-(b1*avg_X);
    float Se_X,Se_Y,SST,SSR,SSE;
    double a,SeoEs;
    Se_X = sd_X/sqrt(column);
    Se_Y = sd_Y/sqrt(column);
    SST = syy;
    SSR = pow(sxy,2)/sxx;
    SSE = SST - SSR;
    //a = (SST-((sxy*sxy)/sxx))/column-2;
    SeoEs = sqrt((SSE/(column-2)));

    printf("\n");
    printf("X DATA\n");
    printf("sum_X is : %.4f\n",sum_X);
    printf("average(X) is : %.4f\n",avg_X);
    printf("sxx is : %.4f\n", sxx);
    printf("varient_X (s^2) is : %.4f\n",varient_X);
    printf("standard devition (s) is : %.4f\n",sd_X);
    printf("standard eror (se) is : %.4f\n",Se_X);
    printf("------------------------------------------------------------------------------\n");
    printf("\n");
    printf("Y DATA\n");
    printf("sum_Y is : %.4f\n",sum_Y);
    printf("average(Y) is : %.4f\n",avg_Y);
    printf("syy is : %.4f\n", syy);
    printf("varient_Y (s^2) is : %.4f\n",varient_Y);
    printf("standard devition (s) is : %.4f\n",sd_Y);
    printf("standard eror (se) is : %.4f\n",Se_Y);
    printf("------------------------------------------------------------------------------\n");
    printf("\n");
    printf("sum X*Y is : %.4f\n", xmuly);
    printf("sxx is : %.4f\n", sxx);
    printf("syy is : %.4f\n", syy);
    printf("sxy is : %.4f\n", sxy);
    printf("------------------------------------------------------------------------------\n");
    printf("\n");
    printf("SST is : %.4f\n", SST);
    printf("SSR is : %.4f\n", SSR);
    printf("SSE is : %.4f\n", SSE);
    printf("------------------------------------------------------------------------------\n");
    printf("\n");
    printf("standard eror of Estimation(se of estimate) is : %.4f\n",SeoEs);
    printf("coefficient of correlation(r) is : %.4f\n", r);
    printf("b0 is : %.4f\n", b0);
    printf("b1 is : %.4f\n", b1);

    return 0;
}










