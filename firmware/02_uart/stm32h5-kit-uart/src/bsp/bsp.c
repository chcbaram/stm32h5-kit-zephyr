#include "bsp.h"





bool bspInit(void)
{
  bool ret = true;

  return ret;
}

void delay(uint32_t ms)
{
  if (ms > 0)
  {
    k_msleep(ms);
  }
}

uint32_t millis(void)
{
  return k_uptime_get_32();
}

void Error_Handler(void)
{
  if (CoreDebug->DHCSR & CoreDebug_DHCSR_C_DEBUGEN_Msk)  
  { 
    __BKPT(0);
  }

  __disable_irq();
  while (1)
  {
  }
}

