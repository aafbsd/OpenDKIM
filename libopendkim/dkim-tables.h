/*
**  Copyright (c) 2005-2008 Sendmail, Inc. and its suppliers.
**    All rights reserved.
**
**  Copyright (c) 2009, 2010, 2012, The OpenDKIM Project.  All rights reserved.
*/

#ifndef _DKIM_TABLES_H_
#define _DKIM_TABLES_H_

#ifdef __STDC__
# ifndef __P
#  define __P(x)  x
# endif /* ! __P */
#else /* __STDC__ */
# ifndef __P
#  define __P(x)  ()
# endif /* ! __P */
#endif /* __STDC__ */

/* structures */
struct nametable
{
	const char *	tbl_name;	/* name */
	const int	tbl_code;	/* code */
};

/* tables */
extern struct nametable *algorithms;
extern struct nametable *canonicalizations;
extern struct nametable *hashes;
extern struct nametable *keyflags;
extern struct nametable *keyparams;
extern struct nametable *keytypes;
extern struct nametable *policies;
extern struct nametable *policyparams;
extern struct nametable *policyresults;
extern struct nametable *querytypes;
extern struct nametable *results;
extern struct nametable *settypes;
extern struct nametable *sigerrors;
extern struct nametable *sigparams;

/* prototypes */
extern const char *dkim_code_to_name __P((struct nametable *tbl,
                                          const int code));
extern const int dkim_name_to_code __P((struct nametable *tbl,
                                        const char *name));

#endif /* _DKIM_TABLES_H_ */
