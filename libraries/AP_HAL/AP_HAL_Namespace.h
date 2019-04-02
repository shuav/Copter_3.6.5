#pragma once

#include "string.h"
#include "utility/functor.h"

namespace AP_HAL
{

    /*顶级纯虚拟类HAL---------Toplevel pure virtual class Hal.*/
    class HAL;

    /*驱动程序的顶级类名:-------Toplevel class names for drivers: */
    class UARTDriver;              //串口驱动类
    class I2CDevice;               //I2C设备类
    class I2CDeviceManager;        //I2C设备类管理
    class Device;                  //设备类

    class SPIDevice;               //SPI设备类
    class SPIDeviceDriver;         //SPI设备驱动类
    class SPIDeviceManager;        //SPI设备管理类

    class AnalogSource;            //模拟资源类
    class AnalogIn;                //模拟输入类
    class Storage;                 //存储类
    class DigitalSource;           //数字资源类
    class GPIO;                    //GPIO类
    class RCInput;                 //遥控器输入类
    class RCOutput;                //电机输出类
    class Scheduler;               //任务调度类
    class Semaphore;               //信号量类
    class OpticalFlow;             //光流传感器类

    class CANManager;              //CAN管理类
    class CAN;                     //CAN类

    class Util;                   //公用类

    /*实用类--------Utility Classes */
    class Print;
    class Stream;
    class BetterStream;

/********************************************************************************************************************************
* 定义指针函数的（过程、成员过程）------Typdefs for function pointers (Procedure, Member Procedure)
*  对于成员函数，我们使用FastDelegate委托类，它允许我们将成员函数封装为一个类型
*  For member functions we use the FastDelegate delegates class which allows us to encapculate a member function as a type
*******************************************************************************************************************************/
    typedef void(*Proc)(void);
    FUNCTOR_TYPEDEF(MemberProc, void);

 /************************************************************************************************************************************
 * 所有平台上所有现有SPI设备的全局名称。--------Global names for all of the existing SPI devices on all platforms.
 *************************************************************************************************************************************/

    enum SPIDeviceType
	{
        //设备使用AP_HAL:SPIDevice抽象类--------Devices using AP_HAL::SPIDevice abstraction
        SPIDevice_Type              = -1,
    };

    //必须有HALs具体实现-------------------- Must be implemented by the concrete HALs.
    const HAL& get_HAL();
}



