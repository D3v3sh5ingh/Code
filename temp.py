test = int(input())

while test > 0:
    tweets = int(input())
    dict = {}
    max_t = 0
    while tweets > 0:
        inp = input()
        x = inp.find(" ")
        key = inp[:x]
        id = inp[x+1:]
        if key in dict:
            dict[key] = dict[key]+1
        else:
            dict[key] = 1
        max_t = max(max_t, dict[key])
        tweets = tweets-1

    tweet_list = []
    for x in dict:
        if dict[x] is max_t:
            tweet_list.append(x)
    tweet_list.sort()
    for x in tweet_list:
        print(x, max_t)
    test = test-1
