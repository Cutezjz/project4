/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _MINIFYJPEG_H_RPCGEN
#define _MINIFYJPEG_H_RPCGEN

#include <rpc/rpc.h>


#ifdef __cplusplus
extern "C" {
#endif


struct number {
	int num1;
	int num2;
};
typedef struct number number;

#define ADDITION 0x2fffffff
#define ADDITION_1 1

#if defined(__STDC__) || defined(__cplusplus)
#define ADD 1
extern  int * add_1(number *, CLIENT *);
extern  int * add_1_svc(number *, struct svc_req *);
extern int addition_1_freeresult (SVCXPRT *, xdrproc_t, caddr_t);

#else /* K&R C */
#define ADD 1
extern  int * add_1();
extern  int * add_1_svc();
extern int addition_1_freeresult ();
#endif /* K&R C */

/* the xdr functions */

#if defined(__STDC__) || defined(__cplusplus)
extern  bool_t xdr_number (XDR *, number*);

#else /* K&R C */
extern bool_t xdr_number ();

#endif /* K&R C */

#ifdef __cplusplus
}
#endif

#endif /* !_MINIFYJPEG_H_RPCGEN */