#include"header.h"

int sequent_search(int angka, int data[], int jml_data)
{
    int x;
    bool wadah=false;

    for(x=0;x<jml_data;x++)
    {
        if(data[x]==angka)
        {
            wadah=true;
        }
    }

    if(wadah==true)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
    return(wadah);
}

int is_inverse(int list1[], int list2[], int jml_data)
{
    int x,y;
    int hitung=0;
    bool z =false;

    for(x=0,y=jml_data-1;x<jml_data;x++,y--)
    {
        if(list1[x]==list2[y])
        {
            hitung=hitung+1;
        }
    }

    if(hitung==jml_data)
    {
        z=true;
    }

    if(z==true)
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
    return(z);
}

void min_max(int data[], int jml_data, int *min, int *max)
{
    int x;
    *min=data[0];
    *max=data[0];
    for(x=0;x<jml_data;x++)
    {
        if(*min>data[x])
        {
            *min=data[x];
        }
    }

    for(x=0;x<jml_data;x++)
    {
        if(*max<data[x])
        {
            *max=data[x];
        }
    }

}



int min_max_gap(int data[], int jml_data)
{
    int x;
    int min=data[0];
    int max=data[0];
    int selisih;
    for(x=0;x<jml_data;x++)
    {
        if(min>data[x])
        {
            min=data[x];
        }
    }

    for(x=0;x<jml_data;x++)
    {
        if(max<data[x])
        {
            max=data[x];
        }
    }
    selisih=max-min;
    return(selisih);
}

int at_least(char huruf, int jml, char teks[])
{
    int panjang;
    int cari=0;
    int x;

    panjang=strlen(teks);

    for(x=0;x<panjang;x++)
    {
        if(huruf==tolower(teks[x]))
        {
            cari=cari+1;
        }
    }

    if(cari==jml)
    {
         return(1);
    }

    return(0);
}
