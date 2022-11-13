
void nhap(float &a)
{
    cin >> a;
}
void xuat(int kq)
{
    cout << kq;
}

int xuly(float a)
{
    if (a < 0)
    {
        return (int)a - 1;
    }
    else
    {
        return (int)a;
    }
}

int main()
{
    float a;
    nhap(a);
    int kq = xuly(a);
    xuat(kq);
    return 0;
}