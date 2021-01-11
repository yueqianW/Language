#!/usr/bin/env python3

names= input('name:')
assignments = int(input('assignments:'))
grades= eval(input('grades:'))

print('Hi' + names)
print('This is a reminder that you have '+ str(assignments) +' assignments left to submit before you can graduate. Your current grade is '+ str(grades) +' and can increase to '+ str(grades * 2) +' if you submit all assignments before the due date.')