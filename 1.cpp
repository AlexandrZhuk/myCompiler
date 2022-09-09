



char *resize(const char *str, unsigned size, unsigned new_size)
{
    char *str2 = new char[new_size];
    for(int i=0;i<((new_size<size)?new_size:size);i++){
        str2[i] = str[i];
    }
    return str2;
}