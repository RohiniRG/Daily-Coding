def areIsomorphic(str1,str2):
    if len(str1) != len(str2):
            return 0
    
        defn = dict()
    
        for i in range(len(str1)):
            if str1[i] in defn.keys():
                if defn[str1[i]] != str2[i]:
                    return 0
                    
            elif str2[i] in defn.values():
                return 0

            else:
                defn[str1[i]] = str2[i]
        
        return 1


str1 = 'aab'
str2 = 'xxy'
if areIsomorphic(str1, str2):
    print('Strings are isomorphic')
else:
    print('Strings are not isomorphic')

