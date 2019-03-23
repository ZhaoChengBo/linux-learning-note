#include <mic.h>
#include <cam.h>
#include <lcd.h>
#include <stdio.h>
#include <button.h>
#include <network.h>


static void mobile_run()
{
	printf("mobile run\r\n");
}

void main(void)
{
	mic1_init();
	mic2_init();
	lcd1_init();
	lcd2_init();
	cam1_init();
	cam2_init();
	button_init();
	network_init();
	mobile_run();
	
}
