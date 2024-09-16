void permu(string v, string s)
{

    if (s == "")
    {
        cout << v << endl;
        return;
    }
    for (int i = 0; i < s.size(); i++)
    {
        string left = s.substr(0, i);
        string right = s.substr(i + 1);
        permu(v + s[i], left + right);
    }
}