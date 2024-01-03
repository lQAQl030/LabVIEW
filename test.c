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
        switch (map[i][j])
        {
        case 14:
            if (i - 1 >= 0 && map[i - 1][j] < 5)
                map[i - 1][j] = 8;
            break;
        case 16:
            if (j - 1 >= 0 && map[i][j - 1] < 5)
                map[i][j - 1] = 8;
            break;
        case 15:
            if (i + 1 < 11 && map[i + 1][j] < 5)
                map[i + 1][j] = 8;
            break;
        case 17:
            if (j + 1 < 11 && map[i][j + 1] < 5)
                map[i][j + 1] = 8;
            break;
        default:
            break;
        }
    }

    // ©ñ¹D¨ã
    if (key == 85 && props[0])
    {
        if (props[0] == 3)
        {
            switch (map[i][j])
            {
            case 14:
                if (i - 1 >= 0 && map[i - 1][j] < 5)
                    map[i - 1][j] = 24;
                break;
            case 16:
                if (j - 1 >= 0 && map[i][j - 1] < 5)
                    map[i][j - 1] = 24;
                break;
            case 15:
                if (i + 1 < 11 && map[i + 1][j] < 5)
                    map[i + 1][j] = 24;
                break;
            case 17:
                if (j + 1 < 11 && map[i][j + 1] < 5)
                    map[i][j + 1] = 24;
                break;
            default:
                break;
            }
        }
        else if (props[0] == 1 && h < 3)
        {
            h++;
        }
        else if (props[0] == 2){
            h = 4;
        }
            props[0] = props[1];
            props[1] = props[2];
            props[2] = 0;
    }