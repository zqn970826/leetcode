bool validUtf8(int* data,int length)
{
    unsigned char nBytes = 0;//UFT8可用1-4个字节编码,ASCII用一个字节
    unsigned char chr;
    for(int i = 0; i < length; ++i)
    {
        chr = data[i];
        if(nBytes == 0) //如果不是ASCII码,应该是多字节符,计算字节数
        {
            if(chr >= 0x80)
            {
                if(chr >= 0xF0 && chr <= 0xF7)
                    nBytes=4;
                else if(chr >= 0xE0 && chr <= 0xEF)
                    nBytes=3;
                else if(chr >= 0xC0 && chr <= 0xDF)
                    nBytes=2;
                else
                    return 0;
                nBytes--;
            }
        }
        else //多字节符的非首字节,应为 10xxxxxx
        {
            if( (chr&0xC0) != 0x80 )
                return 0;
            nBytes--;
        }
    }
    if( nBytes > 0) //违返规则
        return 0;
    return 1;
}