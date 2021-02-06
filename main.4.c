#include <stdio.h>

int main()
{
    float phy, chem, bio, maths, comp=0;
    float total, average, percentage;
    //phy= physics
    //chem= chemistry
    //bio= biology
    //maths= mathematics
    //comp= computer

    printf("enter the physics mark::\n");
    scanf("%f", &phy);
    printf("enter the chemistry mark::\n");
    scanf("%f", &chem);
    printf("enter the biology mark::\n");
    scanf("%f", &bio);
    printf("enter the mathematics mark::\n");
    scanf("%f", &maths);
    printf("enter the computer mark::\n");
    scanf("%f", &comp);
    /* calculation of total, average and percentage */
    total= phy+chem+bio+maths+comp;
    average= total/5.0;
    percentage= (total/500.0)*100;
    printf("total mark= %.2f \n", total);
    printf("average= %.2f \n", average);
    printf("percentage= %.2f, \n", percentage);
    /* Find grade according to the percentage */
    if(percentage>=90)
    {
        printf("grade A");
    }
     else if(percentage>=80)
    {
        printf("grade B");
    }
    else if(percentage>=70)
    {
        printf("grade C");
    }
    else if(percentage>=60)
    {
        printf("grade D");
    }
    else if(percentage>=40)
    {
        printf("grade E");
    }
    else if(percentage<40)
    {
        printf("grade F");
    }

    return 0;
}
