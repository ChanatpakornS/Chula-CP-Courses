from bs4 import BeautifulSoup
from typing import List, Optional
from datetime import datetime

def get_soup_from_file(file_path: str) -> BeautifulSoup:
    with open(file_path) as f:
        html = ''.join(f.readlines())
    
    return BeautifulSoup(html, 'html.parser')

def Q1(file_path: str) -> List[int]:  # DO NOT modify this line

    m_th_en = {
            "มกราคม": "Jan",
            "กุมภาพันธ์": "Feb",
            "มีนาคม": "Mar",
            "เมษายน": "Apr",
            "พฤษภาคม": "May",
            "มิถุนายน": "Jun",
            "กรกฎาคม": "Jul",
            "สิงหาคม": "Aug",
            "กันยายน": "Sep",
            "ตุลาคม": "Oct",
            "พฤศจิกายน": "Nov",
            "ธันวาคม": "Dec"
        }

    soup = get_soup_from_file(file_path)
    bud_days = soup.select(".bud-day")
    counts = [0] * 7
    for bday in bud_days:
        date_str = bday.select_one(".bud-day-col").string
        parts = date_str.split(" ")
        new_date_str = parts[1] + " " + m_th_en.get(parts[2], parts[2]) + " " + str(int(parts[3]) - 543)
        date = datetime.strptime(new_date_str, "%d %b %Y")
        counts[date.weekday()] += 1

    return counts

def Q2(file_path: str) -> Optional[str]:  # DO NOT modify this line
    soup = get_soup_from_file(file_path)
    title = soup.select_one("a[title='วันวิสาขบูชา']")
    output = None
    if title:
        parent = title.parent.parent
        output = parent.select_one(".bud-day-col").string

    return output

exec(input().strip()) # do not delete this line
# print(Q1('2566.html'))
# print(Q2('2566.html'))

