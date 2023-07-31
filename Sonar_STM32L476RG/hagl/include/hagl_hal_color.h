#ifndef _HAGL_GD_HAL_COLOR_H
#define _HAGL_GD_HAL_COLOR_H

#ifdef __cplusplus
extern "C" {
#endif

#include <stdint.h>

/** HAL must provide typedef for colors. This HAL uses RGB565. */
typedef uint32_t hagl_color_t;

#ifdef __cplusplus
}
#endif
#endif /* _HAGL_GD_HAL_COLOR_H */
