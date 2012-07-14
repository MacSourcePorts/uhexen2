/*
 * threads.h
 * $Id: threads.h,v 1.3 2009-05-12 14:23:12 sezero Exp $
 *
 * Copyright (C) 1996-1997  Id Software, Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or (at
 * your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * See the GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef __H2UTILS_THREADS_H
#define __H2UTILS_THREADS_H

extern	int		numthreads;

typedef void (*threadfunc_t) (void *);

void	InitThreads (void);
void	ThreadLock (void);
void	ThreadUnlock (void);
void	RunThreadsOn (threadfunc_t func);

#endif	/* __H2UTILS_THREADS_H */

