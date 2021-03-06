/*
 * com.h
 *
 *  Created on: 2012-9-20
 *      Author: zhangbo
 */

#ifndef COM_H_
#define COM_H_

#include "comapi.h"

#ifdef  __cplusplus
extern "C" {
#endif

int current_com_setup(COMPARAM* comPtr);

int current_com_open();

int current_com_close();

int current_com_write(unsigned char *data, long len);

unsigned long current_com_read(unsigned char *data, unsigned long len);

#ifdef  __cplusplus
}
#endif

#endif /* COM_H_ */
