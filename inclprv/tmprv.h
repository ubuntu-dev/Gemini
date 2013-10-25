/* 
Copyright (C) 2001 NuSphere Corporation, All Rights Reserved.

This program is open source software.  You may not copy or use this 
file, in either source code or executable form, except in compliance 
with the NuSphere Public License.  You can redistribute it and/or 
modify it under the terms of the NuSphere Public License as published 
by the NuSphere Corporation; either version 2 of the License, or 
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
NuSphere Public License for more details.

You should have received a copy of the NuSphere Public License
along with this program; if not, write to NuSphere Corporation
14 Oak Park, Bedford, MA 01730.
*/

#ifndef TMPRV_H
#define TMPRV_H

/**************************************************/
/* tmprv.h - Private interface for tm subsystem.  */
/**************************************************/

/***************************************************/
/* Private Function Prototypes for tm.c            */
/***************************************************/


struct dsmContext;

DSMVOID  tmalc	(struct dsmContext *pcontext, int maxtrn);
DSMVOID  tmdidflsh	(struct dsmContext *pcontext, int type);
DSMVOID  tmdoflsh	(struct dsmContext *pcontext);
DSMVOID  tmlstmod	(struct dsmContext *pcontext, LONG timeval);
int   tmntask	(struct dsmContext *pcontext);
DSMVOID  tmrcmalc	(struct dsmContext *pcontext);
DSMVOID  tmrealc	(struct dsmContext *pcontext, int maxtrn);
int   tmrlctr	(struct dsmContext *pcontext, LONG rlcounter);

#endif  /* ifndef TMPRV_H */