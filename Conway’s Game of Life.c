//Game of Life
#include <stdio.h>
int main() {
	int m, n;
	printf("Enter the value of M:");
	scanf("%d",&m);
	printf("Enter the value of N:");
	scanf("%d",&n);

	int curr[100][100], next[100][100];
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			scanf("%d",&curr[i][j]);
		}
	}
	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			int liveNeighbors=0;
			for(int x=i-1; x<=i+1; x++) {
				for(int y=j-1; y<=j+1; y++) {
					if(x==i && y==j)
						continue;
					if(x>=0 && x<m && y>=0 && y<n) {
						liveNeighbors+=curr[x][y];
					}
				}
			}
			if(curr[i][j]==1) {
				if(liveNeighbors<2 || liveNeighbors>3)
					next[i][j]=0;
				else
					next[i][j]=1;
			}
			else {
				if(liveNeighbors==3)
					next[i][j]=1;
				else
					next[i][j]=0;
			}
		}
	}

	for(int i=0; i<m; i++) {
		for(int j=0; j<n; j++) {
			printf("%d",next[i][j]);
			if(j!=n-1)
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}
