#include <gb/gb.h>
#include <gb/cgb.h>
#include "gbdk-rocks-colored.h"

void main(void)
{
    DISPLAY_ON;
    SHOW_BKG;

    // Populate VRAM with our tile data
    set_bkg_data(0,gbdk_rocks_colored_TILE_COUNT,gbdk_rocks_colored_tiles);

    // The "gbdk_rocks_colored_palettes" color palettes is defined in gbdk_rocks_colored.c
    set_bkg_palette(0,gbdk_rocks_colored_PALETTE_COUNT,gbdk_rocks_colored_palettes);

    // Set the attributes using VRAM bank 1
    // Specifically, which color palette to use
    VBK_REG=1;
    set_bkg_tiles(0,0,20,18,gbdk_rocks_colored_map_attributes);

    // Switch back to bank 0 to prevent accidentally writing to bank 1
    VBK_REG=0;
    set_bkg_tiles(0,0,20,18,gbdk_rocks_colored_map);
}