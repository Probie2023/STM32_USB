#include "main.h"
#include "usb.h"
#include "bsp_usart.h"
#include "stm32f10x_rcc.h"


/****************************************************************
* Function Name  : Set_USBClock
* Description    : Configures USB Clock input (48MHz)
* Input          : None.
* Return         : None.
*****************************************************************/
void usb_init()
{
        RCC_USBCLKConfig(RCC_USBCLKSource_PLLCLK_1Div5);
        RCC_APB1PeriphClockCmd(RCC_APB1Periph_USB, ENABLE);
}

void devcie_test_entry()
{
        usb_init();
        //对应linux内核platform.c文件中，dwc2_driver_probe()函数；
        //dwc2_probe();
}

void usb_test_entry()
{
        printf("enter usb project \n");

#ifdef HOST_MODE
        void host_test_entry();
#endif

#ifdef DEVICE_MODE
        void devcie_test_entry();
#endif

}

