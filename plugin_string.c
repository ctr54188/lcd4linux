/* $Id: plugin_string.c,v 1.2 2004/01/11 18:26:02 reinelt Exp $
 *
 * string plugin
 *
 * Copyright 2003,2004 Michael Reinelt <reinelt@eunet.at>
 * Copyright 2004 The LCD4Linux Team <lcd4linux-devel@users.sourceforge.net>
 *
 * This file is part of LCD4Linux.
 *
 * LCD4Linux is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 *
 * LCD4Linux is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 *
 *
 * $Log: plugin_string.c,v $
 * Revision 1.2  2004/01/11 18:26:02  reinelt
 * further widget and layout processing
 *
 * Revision 1.1  2003/12/19 05:50:34  reinelt
 * added plugin_math.c and plugin_string.c
 *
 */

/* 
 * exported functions:
 *
 * int plugin_init_string (void)
 *  adds some handy string functions
 *
 */


#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include "debug.h"
#include "plugin.h"


static void my_strlen (RESULT *result, RESULT *arg1)
{
  double value=strlen(R2S(arg1));
  SetResult(&result, R_NUMBER, &value); 
}


int plugin_init_string (void)
{

  // register some basic string functions
  AddFunction ("strlen", 1, my_strlen);

  return 0;
}
