#include <stdio.h>

int main() {
    char c;
    int i,j,d;
    float s=0,M[12][12];
    scanf("%d %c", &d,&c);
    for(i=0;i<12;i++){
        for(j=0;j<12;j++){
            scanf("%f", &M[i][j]);
            if(i==d)
                s=s+M[i][j];
        }
    }
    if(c=='S'){
        printf("%.1lf\n",s);
    }else if(c=='M'){
        printf("%.1lf\n",s/12);
    }
    
    return 0;
}