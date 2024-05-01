arr = ["eat","tea","tan","ate","nat","bat"]
sorted_arr = []
dict = {}
for i in  arr:
    sorted_i = ''.join(sorted(i))
    if sorted_i not in dict:
        dict[sorted_i] = [i]
    else:
        dict[sorted_i].append(i)
        
grouped_anagrams = list(dict.values())

print(grouped_anagrams)
