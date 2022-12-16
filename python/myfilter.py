def my_filter(func, iterable):
    for i in iterable:
        if func(i):
            yield i


def is_pair(x):
    return True if x % 2 == 0 else False


items = list(range(1, 11))
pairs = list(filter(is_pair, items))
mypairs = list(my_filter(is_pair, items))

print(*items)
print(*pairs)
print(*mypairs)
