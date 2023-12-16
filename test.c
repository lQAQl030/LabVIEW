// Bomb detection
int i, j;
for(i = 0 ; i < 11 ; i++){
    for(j = 0 ; j < 11 ; j++){
        if(map[i][j] == 5){
            map[i][j] = 4;
            //UP
            if(i - 1 >= 0 && map[i - 1][j] < 5){
                map[i-1][j] = 4;
                if(i - 2 >= 0 && map[i - 2][j] < 5){
                    map[i-2][j] = 4;
                }else if(10 <= map[i - 2][j] && map[i - 2][j] <= 17){
                    if(10 <= map[i - 2][j] && map[i - 2][j] <= 13) h1--;
                    else h2--;
                }
            }else if(10 <= map[i - 1][j] && map[i - 1][j] <= 17){
                if(10 <= map[i - 1][j] && map[i - 1][j] <= 13) h1--;
                else h2--;
            }

            //Left
            if(j - 1 >= 0 && map[i][j - 1] < 5){
                map[i][j-1] = 4;
                if(j - 2 >= 0 && map[i][j - 2] < 5){
                    map[i][j-2] = 4;
                }else if(10 <= map[i][j - 2] && map[i][j - 2] <= 17){
                    if(10 <= map[i][j - 2] && map[i][j - 2] <= 13) h1--;
                    else h2--;
                }
            }else if(10 <= map[i][j - 1] && map[i][j - 1] <= 17){
                if(10 <= map[i][j - 1] && map[i][j - 1] <= 13) h1--;
                else h2--;
            }

            //Down
            if(i + 1 < 11 && map[i + 1][j] < 5){
                map[i+1][j] = 4;
                if(i + 2 < 11 && map[i + 2][j] < 5){
                    map[i+2][j] = 4;
                }else if(10 <= map[i + 2][j] && map[i + 2][j] <= 17){
                    if(10 <= map[i + 2][j] && map[i + 2][j] <= 13) h1--;
                    else h2--;
                }
            }else if(10 <= map[i + 1][j] && map[i + 1][j] <= 17){
                if(10 <= map[i + 1][j] && map[i + 1][j] <= 13) h1--;
                else h2--;
            }

            //Right
            if(j + 1 < 11 && map[i][j + 1] < 5){
                map[i][j+1] = 4;
                if(j + 2 < 11 && map[i][j + 2] < 5){
                    map[i][j+2] = 4;
                }else if(10 <= map[i][j + 2] && map[i][j + 2] <= 17){
                    if(10 <= map[i][j + 2] && map[i][j + 2] <= 13) h1--;
                    else h2--;
                }
            }else if(10 <= map[i][j + 1] && map[i][j + 1] <= 17){
                if(10 <= map[i][j + 1] && map[i][j + 1] <= 13) h1--;
                else h2--;
            }
        }else if(0 < map[i][j] && map[i][j] <= 8){
            map[i][j]--;
        }
    }
}