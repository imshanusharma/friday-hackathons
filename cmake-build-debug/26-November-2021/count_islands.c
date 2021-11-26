/* Problem B (Hacker Rank) */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void find_islands(int i, int j, int row, int col, int a[row][col], int visited[row][col]){
    if(i >= row) return;
    if(j >= col) return;
    if(i < 0) return;
    if(j < 0) return;
    if(!a[i][j]) return;
    if(visited[i][j]) return;
    
    visited[i][j] = 1;
    find_islands(i-1,j-1,row,col,a,visited);
    find_islands(i-1,j,row,col,a,visited);
    find_islands(i-1,j+1,row,col,a,visited);
    find_islands(i+1,j-1,row,col,a,visited);
    find_islands(i+1,j,row,col,a,visited);
    find_islands(i+1,j+1,row,col,a,visited);
    find_islands(i,j-1,row,col,a,visited);
    find_islands(i,j+1,row,col,a,visited);
    
}

int count_islands(int row, int col, int a[row][col], int visited[row][col]){
    int count = 0;
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            if(!a[i][j]) continue;
            if(visited[i][j]) continue;
            
            count++;
            find_islands(i,j,row,col,a,visited);
        }
    }
    return count;
}

int main() {

    int row,col;
    
    scanf("%d %d",&row,&col);
    int a[row][col];
    int visited[row][col];
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++)
        {
            visited[i][j] = 0;
        }
    }
    int ans = count_islands(row,col,a,visited);
    printf("%d",ans);
    return 0;
}
