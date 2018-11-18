#include <stdio.h>

void a(){printf("Fun_a\n");}
void b(){printf("Fun_b\n");}
void c(){printf("Fun_c\n");}
void d(){printf("Fun_d\n");}
void e(){printf("Fun_e\n");}
void f(){printf("Fun_f\n");}
void g(){printf("Fun_g\n");}
void h(){printf("Fun_h\n");}
void i(){printf("Fun_i\n");}
void j(){printf("Fun_j\n");}
void k(){printf("Fun_k\n");}
void l(){printf("Fun_l\n");}
void m(){printf("Fun_m\n");}
void n(){printf("Fun_n\n");}
void o(){printf("Fun_o\n");}
void p(){printf("Fun_p\n");}
void q(){printf("Fun_q\n");}
void r(){printf("Fun_r\n");}
void s(){printf("Fun_s\n");}
void t(){printf("Fun_t\n");}
void u(){printf("Fun_u\n");}
void v(){printf("Fun_v\n");}
void w(){printf("Fun_w\n");}
void x(){printf("Fun_x\n");}
void y(){printf("Fun_y\n");}
void z(){printf("Fun_z\n");}

void (*afptr[])(void) = {a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z};
char symbol[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};

int main()
{
    int i;
    char key;
    scanf("%c",&key);    
    for(i=0;i<26;i++){  	
    	if(symbol[i]==key){
    	afptr[i]();
    	}
    }
    return 0;    
}