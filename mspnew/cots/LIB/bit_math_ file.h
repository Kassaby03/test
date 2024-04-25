#ifndef BIT_MATH__FILE_H_INCLUDED
#define BIT_MATH__FILE_H_INCLUDED
#define SET_BIT(REG,BITNO) (REG|=1<<BITNO)
#define TOG_BIT(REG,BITNO) ((REG)^= (1<<(BITNO)))
#define GET_BIT(REG,BITNO) ((REG&(1<<BITNO))>>BITNO)
#define SET_BYTE(REG,VAL)  (REG = VAL)
#define CLR_BIT(REG,BITNO) (REG&=~(1<<BITNO))
#define WRT_BIT(REG,BITNO,VALO)  ((REG)=(((REG)&(~(1<<BITNO))))|((VAL)<<(BITNO))))
#endif // BIT_MATH__FILE_H_INCLUDED