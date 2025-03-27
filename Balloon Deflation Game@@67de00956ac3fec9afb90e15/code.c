def balloon_deflation_game(balloons):
    balloons.sort()
    prev_sub = 0
    result = []
    n = len(balloons)
    for i in range(n):
        if balloons[i] <= prev_sub:
            continue
        current_min = balloons[i] - prev_sub
        result.append(n - i)
        prev_sub += current_min
    return result

# Example usage:
balloons = [5, 4, 6, 3]
print(balloon_deflation_game(balloons))  # Output: [4, 3, 2, 1]
