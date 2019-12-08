/* 
 * File:   oledssd1306.h
 * Author: Mohan
 *
 * Created on November 27, 2019, 6:35 PM
 */

/*HEADER GUARD----------------------------------------------------------------*/
#ifndef OLEDSSD1306_H
#define	OLEDSSD1306_H

/*HEADER FILES----------------------------------------------------------------*/

/*MACROS----------------------------------------------------------------------*/
#ifdef	__cplusplus
extern "C" {
#endif
    
#define i2c_addr 0x7A	//oled i2c address
#define BLACK 0
#define WHITE 1
//OLED SSD1306 commands as given in datasheet of ssd 1306
#define SSD1306_SETCONTRAST 0x81
#define SSD1306_DISPLAYALLON_RESUME 0xA4
#define SSD1306_DISPLAYALLON 0xA5
#define SSD1306_NORMALDISPLAY 0xA6
#define SSD1306_INVERTDISPLAY 0xA7
#define SSD1306_DISPLAYOFF 0xAE
#define SSD1306_DISPLAYON 0xAF
#define SSD1306_SETDISPLAYOFFSET 0xD3
#define SSD1306_SETCOMPINS 0xDA
#define SSD1306_SETVCOMDETECT 0xDB
#define SSD1306_SETDISPLAYCLOCKDIV 0xD5
#define SSD1306_SETPRECHARGE 0xD9
#define SSD1306_SETMULTIPLEX 0xA8
#define SSD1306_SETLOWCOLUMN 0x00
#define SSD1306_SETHIGHCOLUMN 0x10
#define SSD1306_SETSTARTLINE 0x40
#define SSD1306_MEMORYMODE 0x20
#define SSD1306_COLUMNADDR 0x21
#define SSD1306_PAGEADDR   0x22
#define SSD1306_COMSCANINC 0xC0
#define SSD1306_COMSCANDEC 0xC8
#define SSD1306_SEGREMAP 0xA0
#define SSD1306_CHARGEPUMP 0x8D
#define SSD1306_EXTERNALVCC 0x1
#define SSD1306_SWITCHCAPVCC 0x2
// Scrolling #defines
#define SSD1306_ACTIVATE_SCROLL 0x2F
#define SSD1306_DEACTIVATE_SCROLL 0x2E
#define SSD1306_SET_VERTICAL_SCROLL_AREA 0xA3
#define SSD1306_RIGHT_HORIZONTAL_SCROLL 0x26
#define SSD1306_LEFT_HORIZONTAL_SCROLL 0x27
#define SSD1306_VERTICAL_AND_RIGHT_HORIZONTAL_SCROLL 0x29
#define SSD1306_VERTICAL_AND_LEFT_HORIZONTAL_SCROLL 0x2A
    
/*GLOBAL VARIABLES------------------------------------------------------------*/
extern const unsigned char Font_6x8[];
extern const unsigned char Segment_25x40[];
extern const unsigned char Font_12x16[];

/*PUBLIC FUNCTION PROTOTYPING-------------------------------------------------*/
void oled_logo();
void oledssd1306_init();
void oled_command(uint8_t data);
void oled_data(uint8_t data);
void oled_setpointer(uint8_t seg, uint8_t pag);
void oled_fill(uint8_t color);
void oled_char(uint8_t c, uint8_t seg, uint8_t pag);
void oled_num(float Num, uint8_t seg, uint8_t pag);
void oled_string(char *buffer, uint8_t seg, uint8_t pag);
void oled_setfont(const uint8_t *_font, uint8_t _width, uint8_t _height, uint8_t _min, uint8_t _max);
#ifdef	__cplusplus
}
#endif

#endif	/* OLEDSSD1306_H */

