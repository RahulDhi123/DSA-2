// IMPLEMENTATION OF GRAPH USING ADJENCY MATRIX

#include<stdio.h>

int main(){
    int n,e;
    int graph[20][20]={0};
    int u,v;


    printf("ENTER NUMBER OF VERTICES\n");
    scanf("%d",&n);

    printf("ENTER NUMBER OF EDGES\n");
    scanf("%d",&e);


    for(int i=0;i<e;i++){
        printf("ENTER EDGE(u,v)\n");
        scanf("%d %d",&u,&v);

        graph[u][v]=1;
        graph[v][u]=1;
    }


    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d",graph[i][j]);
        }

        printf("\n");
    }
}