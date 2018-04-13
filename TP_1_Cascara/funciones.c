


float sumar(float x,float y)
{
    return x+y;
}
float restar(float x,float y)
{
    return x-y;
}
float dividir(float x,float y)
{
    if(y!=0)
    {
        return x/y;
    }
}

float multiplicar(float x,float y)
{
    return x*y;
}
int factorial(float x)
{
    int a=(int)x;
    int fact=1;
    if(a-x==0 && x>=0)
    {

        while(x>=1)
        {
            fact=fact*x;
            x--;
        }
    }
    else
    {
        fact=0;
        printf("Error, el factorial no puede calcularse en numeros decimales, ");
    }
    return fact;
}
