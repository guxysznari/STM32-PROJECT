// ============================================================================
// Copyright (C) 2017-2018  All Rights Reserved
// 模块描述: IIC软件实现组件
// 模块版本: V1.00
// 创建人员: GuXY
// 创建时间: 2017-04-18
// ============================================================================
// 程序修改记录(最新的放在最前面):
// <版本号> <修改日期>, <修改人员>: <修改功能概述>
// ============================================================================
#ifndef __SOFTIIC_H__
#define __SOFTIIC_H__

#include "mySys.h"

// ============================================================================
//IO方向设置
#define MACRO_SDA_IN()  {GPIOB->MODER&=~(3<<(9*2));GPIOB->MODER|=0<<9*2;}	//PB9输入模式
#define MACRO_SDA_OUT() {GPIOB->MODER&=~(3<<(9*2));GPIOB->MODER|=1<<9*2;}   //PB9输出模式
//IO操作
#define MACRO_IIC_SCL   MACRO_PB_Out(6) //SCL
#define MACRO_IIC_SDA   MACRO_PB_Out(9) //SDA
#define MACRO_READ_SDA  MACRO_PB_In(9)  //输入SDA

// ============================================================================
//接口函数
extern void  SoftIIC_Send_Byte(UINT8);			   //IIC发送字节
extern UINT8 SoftIIC_Read_Byte(UINT8);             //IIC读取字节
// ============================================================================

#endif  //__SOFTIIC_H__

