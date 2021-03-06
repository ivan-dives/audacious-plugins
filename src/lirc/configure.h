/* Audacious LIRC plugin - configure.h

   Copyright (C) 2012 Joonas Harjumäki (jharjuma@gmail.com)

   Copyright (C) 2005 Audacious development team

   Copyright (c) 1998-1999 Carl van Schaik (carl@leg.uct.ac.za)

   Copyright (C) 2000 Christoph Bartelmus (xmms@bartelmus.de)

   some code was stolen from:
   IRman plugin for xmms by Charles Sielski (stray@teklabs.net)

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#include <gtk/gtk.h>
#include <glib.h>

extern gint b_enable_reconnect;
extern gint reconnect_timeout;
extern gchar *aosd_font;

void load_cfg (void);

void configure (void);

GtkWidget *create_lirc_cfg (void);
