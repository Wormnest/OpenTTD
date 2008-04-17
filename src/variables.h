/* $Id$ */

/** @file variables.h */

#ifndef VARIABLES_H
#define VARIABLES_H

#include "tile_type.h"
#include "strings_type.h"

/* Amount of game ticks */
VARDEF uint16 _tick_counter;

/* Skip aging of cargo? */
VARDEF byte _age_cargo_skip_counter;

/* Position in tile loop */
VARDEF TileIndex _cur_tileloop_tile;

/* Also save scrollpos_x, scrollpos_y and zoom */
VARDEF uint16 _disaster_delay;

/* Determines what station to operate on in the
 *  tick handler. */
VARDEF uint16 _station_tick_ctr;

/* Iterator through all towns in OnTick_Town */
VARDEF uint32 _cur_town_ctr;
/* Frequency iterator at the same place */
VARDEF uint32 _cur_town_iter;

VARDEF uint _cur_player_tick_index;
VARDEF uint _next_competitor_start;

/* Determines how often to run the tree loop */
VARDEF byte _trees_tick_ctr;

/* Keep track of current game position */
VARDEF int _saved_scrollpos_x;
VARDEF int _saved_scrollpos_y;

/* NOSAVE: Used in palette animations only, not really important. */
VARDEF int _palette_animation_counter;


VARDEF uint32 _frame_counter;
VARDEF uint32 _realtime_tick;

VARDEF bool _is_old_ai_player; // current player is an oldAI player? (enables a lot of cheats..)

VARDEF bool _do_autosave;
VARDEF int _autosave_ctr;

VARDEF byte _display_opt;
VARDEF int _caret_timer;

VARDEF bool _rightclick_emulate;

/* IN/OUT parameters to commands */
VARDEF TileIndex _build_tunnel_endtile;
VARDEF bool _generating_world;

/* Used when switching from the intro menu. */
VARDEF byte _switch_mode;
VARDEF StringID _switch_mode_errorstr;

VARDEF char _savegame_format[8];

VARDEF char *_config_file;
VARDEF char *_highscore_file;
VARDEF char *_log_file;

/* landscape.cpp */
extern const byte _tileh_to_sprite[32];

extern bool _draw_bounding_boxes;

/* misc */
VARDEF char _screenshot_name[128];
VARDEF byte _vehicle_design_names;

/* Forking stuff */
VARDEF bool _dedicated_forks;

#endif /* VARIABLES_H */
