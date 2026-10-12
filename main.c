#include <stdio.h>
#include <stdbool.h>

enum Vehicle {MOTORCYCLE, CAR, VAN, TRUCK};
enum Weekday {MON, TUE, WED, THU, FRI, SAT, SUN};

int main() {
    int vehicle;
    int is_electric;
    int passengers;
    int day;
    bool has_discount;

    printf("VEHICLE (0 - MOTORCYCLE, 1 - CAR, 2 - VAN, 3 - TRUCK)?\n");
    scanf("%d", &vehicle);

    printf("IS AN ELECTRIC VEHICLE(0 - FALSE, 1 - TRUE)?\n");
    scanf("%d", &is_electric);

    printf("PASSENGERS?\n");
    scanf("%d", &passengers);

    printf("DAY (0 - MON, 1 - TUE, 2 - WED, 3 - THU, 4 - FRI, 5 - SAT, 6 - SUN)?\n");
    scanf("%d", &day);

    has_discount = 
    ((vehicle <= VAN) && (day <= TUE)) || 
    ((vehicle == TRUCK) && (day >= MON &&day <= FRI)) ||
    ((vehicle == CAR) && (passengers >= 4) && (day >=MON &&day <= SUN) || is_electric);

    printf("HAS DISCOUNT (0 - FALSE, 1 - TRUE): %d\n", has_discount);

    return 0;
}







