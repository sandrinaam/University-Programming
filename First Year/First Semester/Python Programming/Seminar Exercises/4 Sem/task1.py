def FindDayWinner(games):
    team1_wins= 0
    team2_wins = 0
    for winner in games:
        if winner == 'Team1':
            team1_wins += 1
        elif winner == 'Team2':
            team2_wins += 1

    if team1_wins > team2_wins:
        return 'Team1'
    elif team2_wins > team1_wins:
        return 'Team2'
    else:
        return 'Tie'

games = ['Team1', 'Team2','Team1']
print(FindDayWinner(games))
