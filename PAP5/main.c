#include"header.h"
///Nama : Tri Waluyo
///NIM : A11.2017.10097
///Kelas : A11.4203
int main()
{
    printf("===========================================\n");
    printf("\t\t Tugas 1 \n");
    printf("===========================================\n");

    int data[9] = {12, 14, 20, 15, 22,25, 18, 10, 27};
    sequent_search(15, data, 9);
    sequent_search(25, data, 9);
    sequent_search(39, data, 9);
    sequent_search(17, data, 9);

    printf("===========================================\n");
    printf("\t\t Tugas 2 \n");
    printf("===========================================\n");

    int list1[5]={1,2,3,4,5};
    int list2[5]={5,4,3,2,1};
    int list3[5]={6,7,8,9,10};
    int list4[5]={10,9,8,7,6};

    is_inverse(list1,list2,5);
    is_inverse(list2,list3,5);
    is_inverse(list1,list3,5);
    is_inverse(list2,list2,5);

    printf("===========================================\n");
    printf("\t\t Tugas 3 \n");
    printf("===========================================\n");

    int list5[5] = {9, 12, 43, 13, 15};
    int list6[6] = {12, 4, 19, 9, 22, 1};
    int list7[6] = {8, 21, 29, 17, 20, 13};
    int list8[6] = {18, 11, 19, 25, 31, 15};


    min_max(list5,5,&minim,&maxi);
    printf("Minimal = %d\n",minim);
    printf("Maximal = %d\n",maxi);
    printf("\n");
    min_max(list6,6,&minim,&maxi);
    printf("Minimal = %d\n",minim);
    printf("Maximal = %d\n",maxi);
    printf("\n");
    min_max(list7,6,&minim,&maxi);
    printf("Minimal = %d\n",minim);
    printf("Maximal = %d\n",maxi);
    printf("\n");
    min_max(list8,6,&minim,&maxi);
    printf("Minimal = %d\n",minim);
    printf("Maximal = %d\n",maxi);
    printf("\n");

    printf("===========================================\n");
    printf("\t\t Tugas 4 \n");
    printf("===========================================\n");

    int list9[5] = {9, 12, 43, 13, 15};
    int list10[6] = {12, 4, 19, 9, 22, 1};
    int list11[6] = {8, 21, 29, 17, 20, 13};
    int list12[6] = {18, 11, 19, 25, 31, 15};
    int slsh;

    slsh=min_max_gap(list9,5);
    printf("Selisih = %d\n",slsh);
    slsh=min_max_gap(list10,10);
    printf("Selisih = %d\n",slsh);
    slsh=min_max_gap(list11,11);
    printf("Selisih = %d\n",slsh);
    slsh=min_max_gap(list12,12);
    printf("Selisih = %d\n",slsh);

    printf("===========================================\n");
    printf("\t\t Tugas 5 \n");
    printf("===========================================\n");

    ngecek=at_least('r', 3, "Larry Page");

    if(ngecek==true)
    {
        printf("Benar \n");
    }
    else
        {
            printf("Salah \n");
        }

    ngecek=at_least('m', 2, "Matt Mullenweg");
    if(ngecek==true)
    {
        printf("Benar \n");
    }
    else
        {
            printf("Salah \n");
        }
    return 0;

}
