#pragma once
#include "common.h"

#define REG_CARDCONF  (*(vu16*)0x1000000C)
#define REG_CARDCONF2 (*(vu8*)0x10000010)

//REG_AUXSPICNT
#define CARD_ENABLE     (1<<15)
#define CARD_SPI_ENABLE (1<<13)
#define CARD_SPI_BUSY   (1<<7)
#define CARD_SPI_HOLD   (1<<6)

#define LATENCY 0x822C

u32 BSWAP32(u32 val);

void Cart_Init();
int Cart_IsInserted();
u32 Cart_GetID();
void Cart_Secure_Init(u32* buf, u32* out);