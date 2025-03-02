#include "stm32f4xx_hal.h"

#define PIN_RS                 (1 << 0)
#define PIN_EN                 (1 << 2)
#define BACKLIGHT              (1 << 3)

/* I2C Module Address, this is Hardware dependent */
#define I2C_SLAVE_ADDRESS      0x4E

/*LCD Commands*/
#define LCD_FUNCTION_SET1      0x33
#define LCD_FUNCTION_SET2      0x32
#define LCD_4BIT_2LINE_MODE    0x28
#define LCD_DISP_CURS_ON       0x0E
#define LCD_DISP_ON_CURS_OFF   0x0C  //Display on, cursor off
#define LCD_DISPLAY_OFF        0x08
#define LCD_DISPLAY_ON         0x04
#define LCD_CLEAR_DISPLAY      0x01
#define LCD_ENTRY_MODE_SET     0x04
#define LCD_INCREMENT_CURSER   0x06
#define LCD_SET_ROW1_COL1      0x80  //Force cursor to beginning ( 1st line)
#define LCD_SET_ROW2_COL1      0xC0  //Force cursor to beginning ( 2nd line)
#define LCD_MOVE_DISPLAY_LEFT  0x18
#define LCD_MOVE_DISPLAY_RIGHT 0x1C


void lcd_init (void);   // initialize lcd

void lcd_send_cmd (char cmd);  // send command to the lcd

void lcd_send_data (char data);  // send data to the lcd

void lcd_send_string (char *str);  // send string to the lcd

void lcd_put_cur(int row, int col);  // put cursor at the entered position row (0 or 1), col (0-15);

void LCD_Display_Long_Message(char *str); //running LCD display


void lcd_clear (void);
