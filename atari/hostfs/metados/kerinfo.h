/*
 * $Id$
 *
 * The ARAnyM MetaDOS driver.
 *
 * 2002 STan
 *
 * Based on:
 * kerinfo.h,v 1.2 2001/06/13 20:21:22 fna Exp
 * 
 * This file belongs to FreeMiNT. It's not in the original MiNT 1.12
 * distribution. See the file CHANGES for a detailed log of changes.
 * 
 * 
 * Copyright 2001 Frank Naumann <fnaumann@freemint.de>
 * All rights reserved.
 * 
 * This file is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2, or (at your option)
 * any later version.
 * 
 * This file is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
 * 
 * 
 * Author: Frank Naumann <fnaumann@freemint.de>
 * Started: 2001-04-24
 * 
 * please send suggestions, patches or bug reports to me or
 * the MiNT mailing list
 *  
 */

# ifndef _kerinfo_h
# define _kerinfo_h

# include "mint/mint.h"
# include "mint/kerinfo.h"


# define DEFAULT_DIRMODE	(0777)

# if 0
# define DEFAULT_MODE		(0666)
# else
# define DEFAULT_MODE		(kernelinfo.default_perm)
# endif

extern struct kerinfo kernelinfo;


# endif /* _global_h */
