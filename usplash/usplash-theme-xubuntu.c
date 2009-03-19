/* usplash
 *
 * eft-theme.c - definition of eft theme
 *
 * Copyright © 2006 Dennis Kaarsemaker <dennis@kaarsemaker.net>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301 USA
 */

#include <usplash-theme.h>
/* Needed for the custom drawing functions */
#include <usplash_backend.h>
extern struct usplash_pixmap pixmap_usplash_640_400, pixmap_usplash_640_480;
extern struct usplash_pixmap pixmap_usplash_800_600, pixmap_usplash_1024_768, pixmap_usplash_1365_768_scaled;
extern struct usplash_pixmap pixmap_throbber_back;
extern struct usplash_pixmap pixmap_throbber_back_16;
extern struct usplash_pixmap pixmap_throbber_fore;
extern struct usplash_pixmap pixmap_throbber_fore_16;

void t_init(struct usplash_theme* theme);
void t_clear_progressbar(struct usplash_theme* theme);
void t_clear_progressbar_16(struct usplash_theme* theme);
void t_draw_progressbar(struct usplash_theme* theme, int percentage);
void t_draw_progressbar_16(struct usplash_theme* theme, int percentage);
void t_animate_step(struct usplash_theme* theme, int pulsating);
void t_animate_step_16(struct usplash_theme* theme, int pulsating);

struct usplash_theme usplash_theme_640_480;
struct usplash_theme usplash_theme_800_600;
struct usplash_theme usplash_theme_1024_768;
struct usplash_theme usplash_theme_1365_768_scaled;

/* Theme definition */
/* Theme definition */
struct usplash_theme usplash_theme = {
	.version = THEME_VERSION, /* ALWAYS set this to THEME_VERSION, 
                                 it's a compatibility check */
    .next = &usplash_theme_640_480,
    .ratio = USPLASH_16_9,

	/* Background and font */
	.pixmap = &pixmap_usplash_640_400,

        /* theme resolution; if 0, use width/height of pixmap */
        .theme_width = 0,
        .theme_height = 0,

        /* position of pixmap */
        .pixmap_x = 0,
        .pixmap_y = 0,

	/* Palette indexes */
	.background             = 0,
  	.progressbar_background = 73,
  	.progressbar_foreground = 168,
	.text_background        = 0,
	.text_foreground        = 168,
	.text_success           = 128,
	.text_failure           = 227,

	/* Progress bar position and size in pixels */
  	.progressbar_x      = 212,
  	.progressbar_y      = 196,
  	.progressbar_width  = 216,
  	.progressbar_height = 8,

	/* Text box position and size in pixels */
  	.text_x      = 96,
  	.text_y      = 246,
  	.text_width  = 360,
  	.text_height = 100,

	/* Text details */
  	.line_height  = 15,
  	.line_length  = 32,
  	.status_width = 35,

    /* Functions */
    .init = t_init,
    .clear_progressbar = t_clear_progressbar_16,
    .draw_progressbar = t_draw_progressbar_16,
    .animate_step = t_animate_step_16,
};

struct usplash_theme usplash_theme_640_480 = {
	.version = THEME_VERSION, /* ALWAYS set this to THEME_VERSION, 
                                 it's a compatibility check */
    .next = &usplash_theme_800_600,
    .ratio = USPLASH_4_3,

	/* Background and font */
	.pixmap = &pixmap_usplash_640_480,

        /* theme resolution; if 0, use width/height of pixmap */
        .theme_width = 0,
        .theme_height = 0,

        /* position of pixmap */
        .pixmap_x = 0,
        .pixmap_y = 0,

	/* Palette indexes */
	.background             = 0,
  	.progressbar_background = 73,
  	.progressbar_foreground = 168,
	.text_background        = 0,
	.text_foreground        = 168,
	.text_success           = 128,
	.text_failure           = 227,

	/* Progress bar position and size in pixels */
  	.progressbar_x      = 160,
  	.progressbar_y      = 251,
  	.progressbar_width  = 320,
  	.progressbar_height = 18,

	/* Text box position and size in pixels */
  	.text_x      = 120,
  	.text_y      = 307,
  	.text_width  = 360,
  	.text_height = 100,

	/* Text details */
  	.line_height  = 15,
  	.line_length  = 32,
  	.status_width = 35,

    /* Functions */
    .init = t_init,
    .clear_progressbar = t_clear_progressbar,
    .draw_progressbar = t_draw_progressbar,
    .animate_step = t_animate_step,
};

struct usplash_theme usplash_theme_800_600 = {
	.version = THEME_VERSION, /* ALWAYS set this to THEME_VERSION, 
                                 it's a compatibility check */
    .next = &usplash_theme_1024_768,
    .ratio = USPLASH_4_3,

	/* Background and font */
	.pixmap = &pixmap_usplash_800_600,

        /* theme resolution; if 0, use width/height of pixmap */
        .theme_width = 0,
        .theme_height = 0,

        /* position of pixmap */
        .pixmap_x = 0,
        .pixmap_y = 0,

	/* Palette indexes */
	.background             = 0,
  	.progressbar_background = 73,
  	.progressbar_foreground = 168,
	.text_background        = 0,
	.text_foreground        = 168,
	.text_success           = 128,
	.text_failure           = 227,

	/* Progress bar position and size in pixels */
  	.progressbar_x      = 240,
  	.progressbar_y      = 321,
  	.progressbar_width  = 320,
  	.progressbar_height = 18,

	/* Text box position and size in pixels */
  	.text_x      = 220,
  	.text_y      = 407,
  	.text_width  = 360,
  	.text_height = 150,

	/* Text details */
  	.line_height  = 15,
  	.line_length  = 32,
  	.status_width = 35,

    /* Functions */
    .init = t_init,
    .clear_progressbar = t_clear_progressbar,
    .draw_progressbar = t_draw_progressbar,
    .animate_step = t_animate_step,
};

struct usplash_theme usplash_theme_1024_768 = {
	.version = THEME_VERSION,
    .next = &usplash_theme_1365_768_scaled,
    .ratio = USPLASH_4_3,

	/* Background and font */
	.pixmap = &pixmap_usplash_1024_768,

        /* theme resolution; if 0, use width/height of pixmap */
        .theme_width = 0,
        .theme_height = 0,

        /* position of pixmap */
        .pixmap_x = 0,
        .pixmap_y = 0,

	/* Palette indexes */
	.background             = 0,
  	.progressbar_background = 73,
  	.progressbar_foreground = 168,
	.text_background        = 0,
	.text_foreground        = 168,
	.text_success           = 128,
	.text_failure           = 227,

	/* Progress bar position and size in pixels */
  	.progressbar_x      = 352,
  	.progressbar_y      = 400,
  	.progressbar_width  = 320,
  	.progressbar_height = 18,

	/* Text box position and size in pixels */
  	.text_x      = 322,
  	.text_y      = 475,
  	.text_width  = 380,
  	.text_height = 200,

	/* Text details */
  	.line_height  = 15,
  	.line_length  = 32,
  	.status_width = 35,

    /* Functions */
    .init = t_init,
    .clear_progressbar = t_clear_progressbar,
    .draw_progressbar = t_draw_progressbar,
    .animate_step = t_animate_step,
};

struct usplash_theme usplash_theme_1365_768_scaled = {
	.version = THEME_VERSION,
    .next = NULL,
    .ratio = USPLASH_16_9,

	/* Background and font */
	.pixmap = &pixmap_usplash_1365_768_scaled,

        /* theme resolution; if 0, use width/height of pixmap */
        .theme_width = 0,
        .theme_height = 0,

        /* position of pixmap */
        .pixmap_x = 0,
        .pixmap_y = 0,

	/* Palette indexes */
	.background             = 0,
  	.progressbar_background = 73,
  	.progressbar_foreground = 168,
	.text_background        = 0,
	.text_foreground        = 168,
	.text_success           = 128,
	.text_failure           = 227,

	/* Progress bar position and size in pixels */
  	.progressbar_x      = 352,
  	.progressbar_y      = 475,
  	.progressbar_width  = 320,
  	.progressbar_height = 18,

	/* Text box position and size in pixels */
  	.text_x      = 322,
  	.text_y      = 475,
  	.text_width  = 380,
  	.text_height = 200,

	/* Text details */
  	.line_height  = 15,
  	.line_length  = 32,
  	.status_width = 35,

    /* Functions */
    .init = t_init,
    .clear_progressbar = t_clear_progressbar,
    .draw_progressbar = t_draw_progressbar,
    .animate_step = t_animate_step,
};

void t_init(struct usplash_theme *theme) {
    int x, y;
    usplash_getdimensions(&x, &y);
    theme->progressbar_x = (x - usplash_theme_width(theme))/2 + theme->progressbar_x;
    theme->progressbar_y = (y - usplash_theme_height(theme))/2 + theme->progressbar_y;
}

void t_clear_progressbar(struct usplash_theme *theme) {
    t_draw_progressbar(theme, 0);
}

void t_clear_progressbar_16(struct usplash_theme *theme) {
    t_draw_progressbar_16(theme, 0);
}

void t_draw_progressbar(struct usplash_theme *theme, int percentage) {
    int w = (pixmap_throbber_back.width * percentage / 100);
    usplash_put(theme->progressbar_x, theme->progressbar_y, &pixmap_throbber_back);
    if(percentage == 0)
        return;
    if(percentage < 0)
        usplash_put_part(theme->progressbar_x - w, theme->progressbar_y, pixmap_throbber_back.width + w,
                         pixmap_throbber_back.height, &pixmap_throbber_fore, -w, 0);
    else
        usplash_put_part(theme->progressbar_x, theme->progressbar_y, w, pixmap_throbber_back.height, 
                         &pixmap_throbber_fore, 0, 0);
}

void t_draw_progressbar_16(struct usplash_theme *theme, int percentage) {
    int w = (pixmap_throbber_back_16.width * percentage / 100);
    usplash_put(theme->progressbar_x, theme->progressbar_y, &pixmap_throbber_back_16);
    if (percentage == 0)
        return;
    if (percentage < 0)
        usplash_put_part(theme->progressbar_x - w, theme->progressbar_y, pixmap_throbber_back_16.width + w,
                         pixmap_throbber_back_16.height, &pixmap_throbber_fore_16, -w, 0);
    else
        usplash_put_part(theme->progressbar_x, theme->progressbar_y, w, pixmap_throbber_back_16.height, 
                         &pixmap_throbber_fore_16, 0, 0);
}

void t_animate_step(struct usplash_theme* theme, int pulsating) {

    static int pulsate_step = 0;
    static int pulse_width = 56;
    static int step_width = 2;
    static int num_steps = 0;
    int x1;
    num_steps = (pixmap_throbber_fore.width - pulse_width)/2;

    if (pulsating) {
        t_draw_progressbar(theme, 0);
    
        if(pulsate_step < num_steps/2+1)
	        x1 = 2 * step_width * pulsate_step;
        else
	        x1 = pixmap_throbber_fore.width - pulse_width - 2 * step_width * (pulsate_step - num_steps/2+1);

        usplash_put_part(theme->progressbar_x + x1, theme->progressbar_y, pulse_width,
                         pixmap_throbber_fore.height, &pixmap_throbber_fore, x1, 0);

        pulsate_step = (pulsate_step + 1) % num_steps;
    }
}

void t_animate_step_16(struct usplash_theme* theme, int pulsating) {

    static int pulsate_step = 0;
    static int pulse_width = 28;
    static int step_width = 2;
    static int num_steps = 0;
    int x1;
    num_steps = (pixmap_throbber_fore_16.width - pulse_width)/2;

    if (pulsating) {
        t_draw_progressbar_16(theme, 0);
    
        if(pulsate_step < num_steps/2+1)
	        x1 = 2 * step_width * pulsate_step;
        else
	        x1 = pixmap_throbber_fore_16.width - pulse_width - 2 * step_width * (pulsate_step - num_steps/2+1);

        usplash_put_part(theme->progressbar_x + x1, theme->progressbar_y, pulse_width,
                         pixmap_throbber_fore_16.height, &pixmap_throbber_fore_16, x1, 0);

        pulsate_step = (pulsate_step + 1) % num_steps;
    }
}
