typedef struct complex{
    double real, imag;
}Complex ; // Complex �� ������ �� ���ο� ����ü type�� �����ϼ���.
 typedef struct complex* Complexp; // �̰��� Complex�� pointer type ����
 Complex cmult(Complex a, Complex b)
{ Complex result ;
 result.real = a.real * b.real-a.imag*b.imag ;
 result.imag = a.real * b.imag+a.imag*b.real ;
 return result ; }
void mult2(Complex a, Complex b, Complexp result)
{ result->real = a.real * b.real-a.imag*b.imag ;
 result[0].imag = a.real * b.imag+a.imag*b.real ; 
}
int main()// a b real imag 1.0 ������ ���Ҽ� ����ü �� �� ��� �� �� ���� ������ �ʱ�ȭ ��Ŵ
{Complex a={1.,1.} ,b={1.,1.} , cmulted, pmulted;//a b real imag 1.0 �� ���� ���� �ʱ�ȭ
 cmulted =cmult(a,b) ;mult2(a,b, &pmulted); return 0 ;
}