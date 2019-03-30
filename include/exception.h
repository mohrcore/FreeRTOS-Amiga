#ifndef _EXCEPTION_H_
#define _EXCEPTION_H_

#ifndef ISR_t
#define ISR_t _ISR_t
/* Interrupt Service Routine */
typedef void (*_ISR_t)(void);
#endif

#define EXC_BUSERR 2             /* 2: bus error */
#define EXC_ADDRERR 3            /* 3: address error */
#define EXC_ILLEGAL 4            /* 4: illegal instruction */
#define EXC_ZERODIV 5            /* 5: zero divide */
#define EXC_CHK 6                /* 6: CHK instruction */
#define EXC_TRAPV 7              /* 7: TRAPV instruction */
#define EXC_PRIV 8               /* 8: privilege violation */
#define EXC_TRACE 9              /* 9: trace */
#define EXC_LINEA 10             /* 10: line 1010 emulator */
#define EXC_LINEF 11             /* 11: line 1111 emulator */
#define EXC_FMTERR 14            /* 14: format error (68010 ONLY) */
#define EXC_BADIVEC 15           /* 15: uninitialized interrupt vector */
#define EXC_SPURINT 24           /* 24: spurious interrupt */
#define EXC_INTLVL(i) ((i) + 24) /* 25-31: level 1-7 interrupt autovector */
#define EXC_TRAP(i) ((i) + 32)   /* 32-47: TRAP 0-15 instruction vector */
#define EXC_LAST 255

typedef ISR_t ExcVec_t[EXC_LAST + 1];
extern ExcVec_t *ExcVecBase;
#define ExcVec (*ExcVecBase)

#endif /* !_EXCEPTION_H_ */
