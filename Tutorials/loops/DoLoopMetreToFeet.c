int main(void)
{
    double initial = 0,step = 0 , stop = 0;

    do{
        printf("Initial (m):");
        scanf("lf",&initial);

        if(initial<0)printf("Must be >=0! \n");

    }while(initial<0);


    do{
        printf("Step (m):");
        scanf("lf",&step);

        if(step<=0) printf("Must be >0! \n");

    }while(step<=0);

    return 0;



}