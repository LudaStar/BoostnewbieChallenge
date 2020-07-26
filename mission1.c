#include <stdio.h>
#include <cs50.h>

void control_total_stock(int total_stock);

int main(void)
{
    control_total_stock(5);
}

void control_total_stock(int total_stock)
{

    int order = get_int("How many? ");
    int price = get_int("How much is it? ");
    int remained_stock = 0;

    remained_stock = total_stock-order;
    price = price*order;

    printf("주문건수 : %d개\n", order);
    printf("기존 재고량 : %d개\n", total_stock);
    printf("남은 재고량 : %d개\n", remained_stock);
    printf("매출액(부가세포함) : %d원\n", price + (price*10/100) );
}