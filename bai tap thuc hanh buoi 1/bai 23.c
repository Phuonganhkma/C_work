
//23: Nhập vào tháng và năm. Cho biết tháng đó có bao nhiêu ngày.
#include<stdio.h>
int main ()
{
    int mm,yy;
    printf("nhap thang va nam: ");
    scanf("%d%d",&mm,&yy);
    switch(mm)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf(" thang %d co 31 ngay",mm);
        break;
    case 4: case 6: case 9: case 11:
        printf("thang %d co 30 ngay",mm);
        break;
    case 2:
        if((yy%4==0&&yy%100!=0)||yy%400==0)
            printf("thanf %d co 29 ngay",mm);
        else
            printf("thanf %d co 28 ngay",mm);
            break;
    }
    return 0;
}
