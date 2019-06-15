/* Compatibility shim for <unistd.h>
 *
 * Copyright (C) 2016 Reece H. Dunn
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, see: <http://www.gnu.org/licenses/>.
 *
 * #if defined(HAVE_UNISTD_H)
 * #pragma GCC system_header // Silence "warning: #include_next is a GCC extension"
 * #include <unistd.h>
 */

#ifndef UNISTD_H_COMPAT_SHIM
#define UNISTD_H_COMPAT_SHIM

////
// #if defined(__WIN64__)
// #define _FILE_OFFSET_BITS	64
// #define __USE_LARGEFILE64

/* Values for the second argument to access.
   These may be OR'd together.  */
// #define R_OK    4       /* Test for read permission.  */
// #define W_OK    2       /* Test for write permission.  */
// #define   X_OK    1       /* execute permission - unsupported in windows*/
// #define F_OK    0       /* Test for existence.  */

#define STDIN_FILENO 0
#define STDOUT_FILENO 1
#define STDERR_FILENO 2
////

#if defined(HAVE_UNISTD_H)
#include <unistd.h>
#endif

#endif
