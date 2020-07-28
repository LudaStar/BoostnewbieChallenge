#include <stdio.h>
#include <cs50.h>

void manageStock(void);

int main(void)
{
    manageStock();
    return 0;
}


void manageStock(void)
{
    int stock = get_int("현재 재고량을 입력해주세요.");
    int price = get_int("오늘의 수박 가격을 입력해주세요.");
    int totalSales = 0;
    int vat = price/10;

    while(stock > 0)
    {
        int order = get_int("주문량: ");

        if(order - stock > 0)

            printf("수박의 최대 수량은 %i개 입니다. \n", stock);

        else if(order < 1)

            printf("선택 가능한 주문 수량은 1개 이상입니다.");

        else
        {
            int sales = (price + vat) * order;
            totalSales += sales;

            printf("주문건수 : %i\n", order);
            printf("기존 재고량 : %i\n", stock);
            printf("남은 재고량 : %i\n", stock-order);
            printf("매출액 : %i\n", sales);
            printf("오늘의 총 매출액 : %i\n", totalSales);

            stock -= order;
        }

    }
    printf("sold out\n");
    return;

}