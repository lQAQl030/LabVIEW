int i, j;
int map[11][11];
for(i = 0 ; i < 11 ; i++){
    for(j = 0 ; j < 11 ; j++){
        map[i][j] = 0;
    }
}

for(i = 0 ; i < 11 ; i++){
    map[0][i] = 9;
    map[10][i] = 9;
    map[i][0] = 9;
    map[i][10] = 9;
}