##
## This file is part of openBliSSART.
##
## Copyright (c) 2007-2009, Alexander Lehmann <lehmanna@in.tum.de>
##                          Felix Weninger <felix@weninger.de>
##                          Bjoern Schuller <schuller@tum.de>
##
## Institute for Human-Machine Communication
## Technische Universitaet Muenchen (TUM), D-80333 Munich, Germany
##
## openBliSSART is free software: you can redistribute it and/or modify it under
## the terms of the GNU General Public License as published by the Free Software
## Foundation, either version 2 of the License, or (at your option) any later
## version.
##
## openBliSSART is distributed in the hope that it will be useful, but WITHOUT
## ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
## FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more
## details.
##
## You should have received a copy of the GNU General Public License along with
## openBliSSART.  If not, see <http://www.gnu.org/licenses/>.
##

bin_PROGRAMS = icatool

icatool_CPPFLAGS = -I../include

icatool_LDADD = $(top_srcdir)/src/LibAudio/libAudio.la \
                $(top_srcdir)/src/LibLinAlg/libLinAlg.la \
                $(top_srcdir)/src/LibICA/libICA.la

icatool_SOURCES = ARFFExporter.cpp \
                  ARFFExporter.h \
                  AbstractExporter.h \
                  AbstractSeparator.cpp \
                  AbstractSeparator.h \
                  SampleSeparator.cpp \
                  SampleSeparator.h \
                  WaveExporter.cpp \
                  WaveExporter.h \
                  main.cpp

EXTRA_DIST = icatool.vcproj
