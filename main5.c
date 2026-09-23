#include <stdio.h>

int main(void)
{
    int levelBattery = 100;

    for (int i = 0; i <= 10; i++)
    {
        printf("Battery: %d%%\n", levelBattery);

        if (levelBattery == 0)
        {
            printf("Battery empty!\n");
            break;
        }
        else if (levelBattery <= 20)
        {
            printf("WARNING: Low battery!\n");
        }

        levelBattery -= 10;
    }

    return 0;
}