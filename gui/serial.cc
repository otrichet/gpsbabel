//
//  Copyright (C) 2015 Olivier Trichet <olivier@trichet.fr>
//
//  This program is free software; you can redistribute it and/or
//  modify it under the terms of the GNU General Public License as
//  published by the Free Software Foundation; either version 2 of the
//  License, or (at your option) any later version.
//
//  This program is distributed in the hope that it will be useful,
//  but WITHOUT ANY WARRANTY; without even the implied warranty of
//  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
//  General Public License for more details.
//
//  You should have received a copy of the GNU General Public License
//  along with this program; if not, write to the Free Software
//  Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111
//  USA
//

// Use own magic on Widows
#if defined(Q_OS_WIN)
  #include "serial_win.h"
// Otherwise use Qt plugin
#elif defined(HAVE_QSERIALPORTINFO)
  #include "serial_qt.h"
// As Mac is an Unix, test it first
#elif defined(Q_OS_MAC)
  #include "serial_mac.h"
#else
  #include "serial_unix.h"
#endif
