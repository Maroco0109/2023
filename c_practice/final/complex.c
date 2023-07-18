typedef struct complex{
    double real, imag;
}Complex ; // Complex 윗 공간에 란 새로운 구조체 type을 정의하세요.
 typedef struct complex* Complexp; // 이곳에 Complex의 pointer type 정의
 Complex cmult(Complex a, Complex b)
{ Complex result ;
 result.real = a.real * b.real-a.imag*b.imag ;
 result.imag = a.real * b.imag+a.imag*b.real ;
 return result ; }
void mult2(Complex a, Complex b, Complexp result)
{ result->real = a.real * b.real-a.imag*b.imag ;
 result[0].imag = a.real * b.imag+a.imag*b.real ; 
}
int main()// a b real imag 1.0 다음의 복소수 구조체 와 의 멤버 과 는 각각 값으로 초기화 시킴
{Complex a={1.,1.} ,b={1.,1.} , cmulted, pmulted;//a b real imag 1.0 는 각각 으로 초기화
 cmulted =cmult(a,b) ;mult2(a,b, &pmulted); return 0 ;
}