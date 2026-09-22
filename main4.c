#include <stdio.h>

int main(void)
{
    int batteryLevel;

    printf("Enter battery level: ");
    scanf("%d", &batteryLevel);

    if (batteryLevel < 0 || batteryLevel > 100)
    {
        printf("Invalid battery level\n");
    }
    else if (batteryLevel >= 80)
    {
        printf("Battery full\n");
    }
    else if (batteryLevel >= 30)
    {
        printf("Battery normal\n");
    }
    else if (batteryLevel >= 1)
    {
        printf("Battery low\n");
    }
    else
    {
        printf("Battery empty\n");
    }

    return 0;
}