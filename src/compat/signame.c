/*
 * BSD 3-Clause License
 *
 * Copyright (c) 2023, d0p1
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

#include <signal.h>

#include "sh.h"

#if !HAVE_DECL_SYS_SIGNAME && !defined(HAVE_SIGABBREV_NP)

const char *
signame(int sig)
{
	switch (sig)
	{
#ifdef SIGHUP
		case SIGHUP:
			return "HUP";
#endif /* SIGHUP */
#ifdef SIGINT
		case SIGINT:
			return "INT";
#endif /* SIGINT */
#ifdef SIGQUIT
		case SIGQUIT:
			return "QUIT";
#endif /* SIGQUIT */
#ifdef SIGILL
		case SIGILL:
			return "ILL";
#endif /* SIGILL */
#ifdef SIGTRAP
		case SIGTRAP:
			return "TRAP";
#endif /* SIGTRAP */
#ifdef SIGABRT
		case SIGABRT:
			return "ABRT";
#endif /* SIGABRT */
#ifdef SIGBUS
		case SIGBUS:
			return "BUS";
#endif /* SIGBUS */
#ifdef SIGFPE
		case SIGFPE:
			return "FPE";
#endif /* SIGFPE */
#ifdef SIGKILL
		case SIGKILL:
			return "KILL";
#endif /* SIGKILL */
#ifdef SIGSEGV
		case SIGSEGV:
			return "SEGV";
#endif /* SIGSEGV */
#ifdef SIGPIPE
		case SIGPIPE:
			return "PIPE";
#endif /* SIGPIPE */
#ifdef SIGALRM
		case SIGALRM:
			return "ALRM";
#endif /* SIGALRM */
#ifdef SIGTERM
		case SIGTERM:
			return "TERM";
#endif /* SIGTERM */
#ifdef SIGUSR1
		case SIGUSR1:
			return "USR1";
#endif /* SIGUSR1 */
#ifdef SIGUSR2
		case SIGUSR2:
			return "USR2";
#endif /* SIGUSR2 */
#ifdef SIGSTKFLT
		case SIGSTKFLT:
			return "STKFLT";
#endif /* SIGSTKFLT */
#ifdef SIGCHLD
		case SIGCHLD:
			return "CHLD";
#endif /* SIGCHLD */
#ifdef SIGCONT
		case SIGCONT:
			return "CONT";
#endif /* SIGCONT */
#ifdef SIGSTOP
		case SIGSTOP:
			return "STOP";
#endif /* SIGSTOP */
#ifdef SIGTSTP
		case SIGTSTP:
			return "TSTP";
#endif /* SIGTSTP */
#ifdef SIGTTIN
		case SIGTTIN:
			return "TTIN";
#endif /* SIGTTIN */
#ifdef SIGTTOU
		case SIGTTOU:
			return "TTOU";
#endif /* SIGTTOU */
#ifdef SIGURG
		case SIGURG:
			return "URG";
#endif /* SIGURG */
#ifdef SIGXCPU
		case SIGXCPU:
			return "XCPU";
#endif /* SIGXCPU */
#ifdef SIGXFSZ
		case SIGXFSZ:
			return "XFSZ";
#endif /* SIGXFSZ */
#ifdef SIGVTALRM
		case SIGVTALRM:
			return "VTALRM";
#endif /* SIGVTALRM */
#ifdef SIGPROF
		case SIGPROF:
			return "PROF";
#endif /* SIGPROF */
#ifdef SIGWINCH
		case SIGWINCH:
			return "WINCH";
#endif /* SIGWINCH */
#ifdef SIGIO
		case SIGIO:
			return "IO";
#endif /* SIGIO */
#ifdef SIGPWR
		case SIGPWR:
			return "PWR";
#endif /* SIGPWR */
#ifdef SIGSYS
		case SIGSYS:
			return "SYS";
#endif /* SIGSYS */
		default:
			return "UNKNOWN";
	}
}

#endif
