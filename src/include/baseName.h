//
// This file is part of openBliSSART.
//
// Copyright (c) 2007-2009, Alexander Lehmann <lehmanna@in.tum.de>
//                          Felix Weninger <felix@weninger.de>
//                          Bjoern Schuller <schuller@tum.de>
//
// Institute for Human-Machine Communication
// Technische Universitaet Muenchen (TUM), D-80333 Munich, Germany
//
// openBliSSART is free software: you can redistribute it and/or modify it under
// the terms of the GNU General Public License as published by the Free Software
// Foundation, either version 2 of the License, or (at your option) any later
// version.
//
// openBliSSART is distributed in the hope that it will be useful, but WITHOUT
// ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
// FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
// details.
//
// You should have received a copy of the GNU General Public License along with
// openBliSSART.  If not, see <http://www.gnu.org/licenses/>.
//

#ifndef __BASENAME_H__
#define __BASENAME_H__

#include <cstring>

/**
 * Returns the basename of the given path, i.e. the last portion of a path
 * or filename.
 * 
 * NOTE: On some platforms the 'legacy' basename(const char*) has been redefined
 * as basename(char*). This makes it somewhat neccessary to introduce a 
 * replacement for basename (for further explanations see *nix manpages)
 * 
 * @param   path    a pointer to the path or filename
 * @return          the corresponding basename
 */
inline static const char* baseName(const char* path)
{
    const char* tmp = strrchr(path, '\\');
    if (!tmp)
        tmp = strrchr(path, '/');
    return tmp ? ++tmp : "";
}

#endif
