int key;
int weight[11][11];
int a,b,c;
int direction;

for(a = 0 ; a < 11 ; a++){
    for(b = 0 ; b < 11 ; b++){
        weight[a][b] = 0;
    }
}
weight[x][y] = 1;

for(c = 0 ; c < 50 ; c++){
    for(a = 0 ; a < 11 ; a++){
        for(b = 0 ; b < 11 ; b++){
            if(weight[a][b] > 0){
                if(a-1 >= 0 && map[a-1][b] < 5 && weight[a-1][b] == 0) weight[a-1][b] = weight[a][b]+1;
                if(a+1 < 11 && map[a+1][b] < 5 && weight[a+1][b] == 0) weight[a+1][b] = weight[a][b]+1;
                if(b-1 >= 0 && map[a][b-1] < 5 && weight[a][b-1] == 0) weight[a][b-1] = weight[a][b]+1;
                if(b+1 < 11 && map[a][b+1] < 5 && weight[a][b+1] == 0) weight[a][b+1] = weight[a][b]+1;
            }
        }
    }
}

for(a = 0 ; a < 11 ; a++){
    for(b = 0 ; b < 11 ; b++){
        if(weight[a][b] == 0){
            weight[a][b] = 100;
        }
    }
}


if(tick == 0){
    tick = TICK;
    if(bomb-- > 0){
        if(map[i][j] == 14) key = 73;
        if(map[i][j] == 15) key = 75;
        if(map[i][j] == 16) key = 74;
        if(map[i][j] == 17) key = 76;
        tick = 0;
    }else{
        direction = 4;
        if(weight[i-1][j] <= weight[i][j-1] && weight[i-1][j] <= weight[i+1][j] && weight[i-1][j] <= weight[i][j+1]){
            key = 73; direction = 0;
        }
        if(weight[i][j-1] <= weight[i-1][j] && weight[i][j-1] <= weight[i+1][j] && weight[i][j-1] <= weight[i][j+1]){
            key = 74; direction = 1;
        }
        if(weight[i+1][j] <= weight[i-1][j] && weight[i+1][j] <= weight[i][j-1] && weight[i+1][j] <= weight[i][j+1]){
            key = 75; direction = 2;
        }
        if(weight[i][j+1] <= weight[i-1][j] && weight[i][j+1] <= weight[i][j-1] && weight[i][j+1] <= weight[i+1][j]){
            key = 76; direction = 3;
        }
        if(weight[i-1][j] == 3 || weight[i][j-1] == 3 || weight[i+1][j] == 3 || weight[i][j+1] == 3) key = 80;
        if(weight[i-1][j] < 2 || weight[i][j-1] < 2 || weight[i+1][j] < 2 || weight[i][j+1] < 2){
            if(x < i && map[i+1][j] < 5) key = 75;
            if(x > i && map[i-1][j] < 5) key = 73;
            if(y < j && map[i][j+1] < 5) key = 76;
            if(y > j && map[i][j-1] < 5) key = 74;
        }
    }
}else{
    tick--;
}

if (key == 73)
{
    map[i][j] = 14;
    if (i - 1 >= 0)
    {
        if (map[i - 1][j] < 5)
        {
            map[i--][j] = 0;
            map[i][j] = 14;
        }
        else if (map[i - 1][j] >= 18 && map[i - 1][j] <= 23)
        {
            if (props[0] == 0)
            {
                props[0] = int((map[i - 1][j] - 16) / 2);
            }
            else if (props[1] == 0)
            {
                props[1] = int((map[i - 1][j] - 16) / 2);
            }
            else if (props[2] == 0)
            {
                props[2] = int((map[i - 1][j] - 16) / 2);
            }
            map[i--][j] = 0;
            map[i][j] = 14;
        }
    }
}
else if (key == 74)
{
    map[i][j] = 16;
    if (j - 1 >= 0)
    {
        if (map[i][j - 1] < 5)
        {
            map[i][j--] = 0;
            map[i][j] = 16;
        }
        else if (map[i][j - 1] >= 18 && map[i][j - 1] <= 23)
        {
            if (props[0] == 0)
            {
                props[0] = int((map[i][j - 1] - 16) / 2);
            }
            else if (props[1] == 0)
            {
                props[1] = int((map[i][j - 1] - 16) / 2);
            }
            else if (props[2] == 0)
            {
                props[2] = int((map[i][j - 1] - 16) / 2);
            }
            map[i][j--] = 0;
            map[i][j] = 16;
        }
    }
}
else if (key == 75)
{
    map[i][j] = 15;
    if (i + 1 < 11)
    {
        if (map[i + 1][j] < 5)
        {
            map[i++][j] = 0;
            map[i][j] = 15;
        }
        else if (map[i + 1][j] >= 18 && map[i + 1][j] <= 23)
        {
            if (props[0] == 0)
            {
                props[0] = int((map[i + 1][j] - 16) / 2);
            }
            else if (props[1] == 0)
            {
                props[1] = int((map[i + 1][j] - 16) / 2);
            }
            else if (props[2] == 0)
            {
                props[2] = int((map[i + 1][j] - 16) / 2);
            }
            map[i++][j] = 0;
            map[i][j] = 15;
        }
    }
}
else if (key == 76)
{
    map[i][j] = 17;
    if (j + 1 < 11)
    {
        if (map[i][j + 1] < 5)
        {
            map[i][j++] = 0;
            map[i][j] = 17;
        }
        else if (map[i][j + 1] >= 18 && map[i][j + 1] <= 23)
        {
            if (props[0] == 0)
            {
                props[0] = int((map[i][j + 1] - 16) / 2);
            }
            else if (props[1] == 0)
            {
                props[1] = int((map[i][j + 1] - 16) / 2);
            }
            else if (props[2] == 0)
            {
                props[2] = int((map[i][j + 1] - 16) / 2);
            }
            map[i][j + 1] = 0;
            map[i][j] = 17;
        }
    }
}

// Place bomb
if (key == 80)
{
    tick = 0;
    switch (map[i][j])
    {
    case 14:
        if (i - 1 >= 0 && map[i - 1][j] < 5){
            map[i - 1][j] = 8;
            map[i][j] = 15;
            bomb = 3;
        }
        break;
    case 16:
        if (j - 1 >= 0 && map[i][j - 1] < 5){
            map[i][j - 1] = 8;
            map[i][j] = 17;
            bomb = 3;
        }  
        break;
    case 15:
        if (i + 1 < 11 && map[i + 1][j] < 5){
            map[i + 1][j] = 8;
            map[i][j] = 14;
            bomb = 3;
        }
        break;
    case 17:
        if (j + 1 < 11 && map[i][j + 1] < 5){
            map[i][j + 1] = 8;
            map[i][j] = 16;
            bomb = 3;
        }
        break;
    default:
        break;
    }
}