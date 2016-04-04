#ifndef RASTER_H
#define RASTER_H

#include "../ttf.h"

void free_segment(TTF_Segment *segment);
void free_contour(TTF_Contour *contour);
void free_outline(TTF_Outline *outline);

TTF_Outline *glyph_to_outline(TTF_Glyph *glyph);

TTF_Bitmap *render_glyph(TTF_Glyph *glyph);
int render_outline(TTF_Bitmap *bitmap, TTF_Outline *outline, uint32_t c);
int render_line(TTF_Bitmap *bitmap, TTF_Line *line, uint32_t c);
int render_curve(TTF_Bitmap *bitmap, TTF_Curve *curve, uint32_t c);

#include "bitmap.h"

#endif /* RASTER_H */
