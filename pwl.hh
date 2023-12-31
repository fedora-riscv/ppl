/* This is the header file switcher of the Parma Watchdog Library.
   Copyright (C) 2001-2010 Roberto Bagnara <bagnara@cs.unipr.it>
   Copyright (C) 2010-2011 BUGSENG srl (http://bugseng.com)

This file is part of the Parma Watchdog Library (PWL).

The PWL is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation; either version 3 of the License, or (at your
option) any later version.

The PWL is distributed in the hope that it will be useful, but WITHOUT
ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License
for more details.

You should have received a copy of the GNU General Public License
along with this program; if not, write to the Free Software Foundation,
Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02111-1307, USA.

For the most up-to-date information see the CS@Parma software
site: http://www.cs.unipr.it/Software/ . */

#if defined(__x86_64__)
#include "pwl-x86_64.hh"
#elif defined(__i386__)
#include "pwl-i386.hh"
#elif defined(__powerpc64__)
#if __BYTE_ORDER__ == __ORDER_BIG_ENDIAN__
#include "pwl-ppc64.hh"
#else
#include "pwl-ppc64le.hh"
#endif
#elif defined(__powerpc__)
#include "pwl-ppc.hh"
#elif defined(__ia64__)
#include "pwl-ia64.hh"
#elif defined(__alpha__)
#include "pwl-alpha.hh"
#elif defined(__arm__)
#include "pwl-arm.hh"
#elif defined(__aarch64__)
#include "pwl-aarch64.hh"
#elif defined(__s390x__)
#include "pwl-s390x.hh"
#elif defined(__s390__)
#include "pwl-s390.hh"
#elif defined(__sh__)
#include "pwl-sh.hh"
#elif defined(__sparc__) && defined(__arch64__)
#include "pwl-sparc64.hh"
#elif defined(__sparc__)
#include "pwl-sparc.hh"
#else
#error "This architecture is not supported by the currently installed ppl-pwl-devel packages."
#endif
