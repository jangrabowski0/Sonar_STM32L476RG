#pragma once

#include <stdint.h>
#include <stdbool.h>
#include <math.h>
#include <stdlib.h>

#define LCD_WIDTH	160
#define LCD_HEIGHT	128
#define MAX_RANGE   30

//Definicje kolorów z odwróconą kolejnością bajtów
#define BLACK			0x0000
#define RED				0x00f8
#define GREEN			0xe007
#define BLUE			0x1f00
#define YELLOW			0xe0ff
#define MAGENTA			0x1ff8
#define CYAN			0xff07
#define WHITE			0xffff

void lcd_init(void); // Inicjalizacja wyświetlacza
void lcd_put_pixel(void *_surface, int16_t x, int16_t y, uint16_t color);
void lcd_copy(void); // Przesłanie zawartości bufora
void lcd_transfer_done(void);
bool lcd_is_busy(void);
void calc_disp_coordinates_math(uint8_t angle, uint8_t distance, uint8_t *x, uint8_t *y, uint8_t current_position);
