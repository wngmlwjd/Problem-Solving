from datetime import date

a, b = map(int, input().split())

date1 = date(2007, 1, 1)
date2 = date(2007, a, b)

diff = date2 - date1

day = ['MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT', 'SUN']

print(day[diff.days % 7])