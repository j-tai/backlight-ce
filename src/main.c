#include <stdbool.h>
#include <stdint.h>
#include <stdio.h>

#include <tice.h>

void main(void) {
    char buf[3];

    os_ClrHomeFull();
    os_SetCursorPos(3, 6);
    os_PutStrFull("SET BRIGHTNESS");
    while (true) {
        sk_key_t key;

        /* Draw text */
        sprintf(buf, "%02X", (int)(0xFF - lcd_BacklightLevel));
        os_SetCursorPos(5, 12);
        os_PutStrFull(buf);

        key = os_GetCSC();
        switch (key) {
        case sk_Up: /* Up = increase brightness = decrease level */
            if (lcd_BacklightLevel >= 0x10) {
                lcd_BacklightLevel -= 0x10;
            } else {
                lcd_BacklightLevel = 0;
            }
            break;
        case sk_Down: /* Down = decrease brightness = increase level */
            if (lcd_BacklightLevel <= 0xEF) {
                lcd_BacklightLevel += 0x10;
            } else {
                lcd_BacklightLevel = 0xFF;
            }
            break;
        case sk_Left:
            if (lcd_BacklightLevel != 0xFF)
                lcd_BacklightLevel++;
            break;
        case sk_Right:
            if (lcd_BacklightLevel != 0)
                lcd_BacklightLevel--;
            break;
        case sk_Clear:
        case sk_Del:
            return;
        }
    }
}
