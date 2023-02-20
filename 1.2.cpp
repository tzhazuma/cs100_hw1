#include <stlmain>
int main(){
    double x1,y1,x2,y2;
    scanf("(%lf,%lf)\n",&x1,&y1);
    scanf("(%lf,%lf)",&x2,&y2);
    //cout<<x1<<" "<<x2<<" "<<y1<<" "<<y2;
    double d_x=x2-x1;
    double d_y=y2-y1;
    if(d_x!=0){
        double k=d_y/d_x;
        double b=y2-k*x2;
        if(b>=0){
            printf("y = %.2lfx + %.2lf",k,b);
        }
        else{
            printf("y = %.2lfx - %.2lf",k,-b);
        }
    }
    else{
        printf("x = %.2lf",x1);
    }
    return(0);
}