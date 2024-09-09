#include <iostream>
#include <algorithm>
#include <set>
#include <vector>
#include <map>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N, M;
    cin >> N >> M;

    map<string, set<string>> booking_seat;

    while (N--)
    {
        string airline, seat;
        cin >> airline >> seat;
        booking_seat[airline].insert(seat);
    }

    while (M--)
    {
        vector<pair<string, string>> tmp_booking;
        int number_book;
        cin >> number_book;
        bool is_possible = true;
        while (number_book--)
        {
            string book_airline, book_seat;
            cin >> book_airline >> book_seat;
            if (is_possible && booking_seat[book_airline].find(book_seat) == booking_seat[book_airline].end())
            {
                is_possible = false;
            }
            else
            {
                tmp_booking.push_back({book_airline, book_seat});
            }
        }

        if (is_possible)
        {
            for (auto &booked : tmp_booking)
            {
                booking_seat[booked.first].erase(booked.second);
            }
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}