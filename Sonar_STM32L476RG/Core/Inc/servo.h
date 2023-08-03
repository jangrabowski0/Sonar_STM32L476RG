#pragma once
#include <stdint.h>
#include <stdbool.h>

#define STEP 100

bool is_max_angle_180(uint8_t i, volatile int pulse_width, volatile bool *state);
void adjust_rotation_direction(uint8_t i, volatile int *pulse_width, volatile bool state);
void calc_current_position(volatile int pulse_width, volatile uint8_t *current_position);

