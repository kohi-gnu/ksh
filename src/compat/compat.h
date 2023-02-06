/*
 * BSD 3-Clause License
 *
 * Copyright (c) 2022, d0p1
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice, this
 *    list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from
 *    this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef KSH_COMPAT_COMPAT_H
# define KSH_COMPAT_COMPAT_H 1

# include "config.h"
# include <string.h>

# ifdef HAVE_VIS_H
#  include <vis.h>
# else
#  include "compat/vis.h"
# endif /* HAVE_VIS_H */

# include "compat/time.h"

# ifndef HAVE_STRAVIS
int	stravis(char **, const char *, int);
# endif /* !HAVE_STRAVIS */

# ifndef HAVE_STRUNVIS
int	strunvis(char *, const char *);
# endif /* !HAVE_STRUNVIS */

# ifndef HAVE_STRLCPY
size_t strlcpy(char *dst, const char *src, size_t size);
# endif /* !HAVE_STRLCPY */

# ifndef HAVE_STRLCAT
size_t strlcat(char *dst, const char *src, size_t size);
# endif /* !HAVE_STRLCAT */

# ifndef HAVE_STRTONUM
long long strtonum(const char *nptr, long long minval, long long maxval,
					const char **errstr);
# endif /* !HAVE_STRTONUM */

# if !HAVE_DECL_SYS_SIGNAME && !defined(HAVE_SIGABBREV_NP)
const char *signame(int sig);
# endif /* !HAVE_DECL_SIGNAME */

# if !HAVE_DECL_SYS_SIGLIST && !defined(HAVE_SIGDESCR_NP)
const char *siglist(int sig);
# endif /* !HAVE_DECL_SIGNAME */


#endif /* !KSH_COMPAT_COMPAT_H */
