    for (int i = 0; i < m - start; ++i)
    {
        rev[i] = arr[m - i - 1];
        cout << rev[i] << "-";
    }
    cout << endl;
    for (int i = start; i < m; ++i)
    {
        cout << arr[i] << " ";
    }
    cout << start << " TO " << stop << endl;