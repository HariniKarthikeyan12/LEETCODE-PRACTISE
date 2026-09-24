bool judgeCircle(char* moves) {
    int a = 0;
    int b = 0;
    int x = 0;
    int y = 0;
    for(int i =0 ;moves[i] != '\0';i++)
    {
        if(moves[i] == 'U')
        {
            a++;
        }
        else if(moves[i] == 'D')
        {
            b++;
        }
        else if(moves[i] == 'R')
        {
            x++;
        }
        else
        {
            y++;
        }
    }

    if(abs(a-b) == 0 && abs(x-y) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}