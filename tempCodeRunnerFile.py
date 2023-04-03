principal = int(input('Please input principal value: '))
rate = int(input('Please input rate of interest: '))
duration = int(input('Please input duration (in years): '))

interest = rate*duration
total = principal + interest
print('The interest is: ',interest, '\nThe total amount is: ',total)