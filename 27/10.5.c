    #include<stdio.h>
    #include<stdlib.h>
    #include<string.h>

    //execution of main
    int main()
    {
        //declaration of string and initialization

        char a[]="0";
        char b[]="3.14159";

        char c[]="21 PGECHS";
        char *cptr;

        char d[]="PGECHS 21";
        char dptr[5];

        char e[]="PGECHS21";
        char eptr[5];

        char f[]=".987";

        char g[]="124z3yu87";
        char gptr[7];

        char h[]="-34";
        char i[]="24.5";
        int j,jj;
        //declaration to store the conversion in sebsequent data type

        int x,p;
        long int l;
        unsigned long int o,m;
        double k,n,q,y;

        //conversion functions of string

        x = atoi(a);
        l = strtol(c,&cptr,0);
        k = atof(b);

        strncpy(dptr,&d[7],3);
        m=atoi(dptr);
        n = atof(f);
        //o = strtoul(e,&eptr,0);
        strncpy(eptr,&e[6],3);
        o=atoi(eptr);
            p = atol(h);
        q = atof(i);

        for(j=0,jj=0;g[j]!='\0';j++)
            if(isdigit(g[j]))
                  gptr[jj++] = g[j];
        gptr[jj] = '\0';
        y = atof(gptr);

        //output of the conversion

        printf("String %s to int : %d\n",a,x);
        printf("String %s to double : %f\n",b,k);
        printf("String %s to long int : %u\n",c,l);
        printf("String %s to unsigned long int : %u\n",d,m);
        printf("String %s to unsigned long int : %u\n",e,o);
        printf("String %s to double : %f\n",f,n);
        printf("String %s to  long int : %d\n",h,p);
        printf("String %s to double : %f\n",i,q);
        printf("String %s to unsigned long int : %.0f\n",g,y);

        return 0;
}
