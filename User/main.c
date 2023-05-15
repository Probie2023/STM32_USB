#include "main.h"
#include "stm32f10x.h"
//#include "./flash/fatfs_flash_spi.h"
#include "bsp_usart.h"
//#include "./led/bsp_led.h"  
//#include "hw_config.h" 
//#include "usb_lib.h"
//#include "usb_pwr.h"

int main(void)
{

	/* USART config */
	USART_Config();

	/*USB1.1 project Entry function*/
	usb_test_entry();
}

