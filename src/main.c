#include <stdio.h>
#include <zephyr/kernel.h>

#define SLEEP_TIME_MS 1000

int main(void)
{
	while (1) {
		printf("Hello World! %s\n", CONFIG_BOARD_TARGET);
		k_msleep(SLEEP_TIME_MS);
	}
	return 0;
}