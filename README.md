# Longest-Common-Substring
algorithm，bioinfoematics，Dynamic programming
author wangyang
address School of computer science ,xidian university
time 2018/10/5
e-mail wangyang_cs2014@163.com
this project is solve the problem that about longest common substring problem.
References https://en.wikipedia.org/wiki/Longest_common_substring_problem.
if you have any question ,plaese write letter give me for e-mail.
# the Longest-common-Subsequence 
 longest common substring problem is to find the longest string (or strings) that is a substring (or are substrings) of two or more strings.
 ## Pseudocode
 function LCSubstr(S[1..r], T[1..n])  
    L := array(1..r, 1..n)  
    z := 0  
    ret := {}  
    for i := 1..r  
        for j := 1..n  
            if S[i] == T[j]  
                if i == 1 or j == 1  
                    L[i,j] := 1  
                else  
                    L[i,j] := L[i-1,j-1] + 1  
                if L[i,j] > z  
                    z := L[i,j]  
                    ret := {S[i-z+1..i]}  
                else  
                if L[i,j] == z  
                    ret := ret ∪ {S[i-z+1..i]}  
            else  
                L[i,j] := 0  
    return ret  
    
