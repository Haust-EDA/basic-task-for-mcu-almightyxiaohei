

void delay_ms(unsigned int x)  // 延时函数
{
    unsigned int i,j;
    if(x==1000)
    {
        for(i=0;i<19601;i++)//延时1s
        {
            for(j=5;j>0;j--);
        }
    }
    else while(x--)for(j=115;j>0;j--);
}

// tips: 原理图当中led为低电平点亮，比如点亮LED2,代码为： P0 = 0xFE (1111 1110)

int P0;
int led_code[8] = {0xfe , 0xfd , 0xfb , 0xf7 , 0x7f , 0xbf , 0xef , 0xff};
int main(void)
{
    // """
    // 在下方编写你的代码
    // """
    while (1)
    for (int i = 0 ; i < 8 ; i++)
    {
        P0 = led_code[i];
        delay (500);
    }

 

    return 0;
}

