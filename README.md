# Google_HashCode
## Introduction
Isn't it fun to share pizza with friends? But, sometimes you just don't have enough time to choose
what pizza to order. Wouldn't it be nice if someone else chose for you?
In an imaginary world…

![image](https://user-images.githubusercontent.com/50981076/109250902-77d21a80-7810-11eb-8936-2cb719e6e9c7.png)


# Problem description
## Task

Help the imaginary pizzeria choose the pizzas to deliver to Hash Code teams. And since we want
everyone to enjoy their food, let's try to deliver to each team, as many dierent ingredients as we
can.

## Pizza

Expecting many hungry customers, the pizzeria has already prepared some pizzas with dierent
ingredients. Each pizza can be delivered to at most one team. There can be multiple pizzas with
the exact same set of ingredients.

![image](https://user-images.githubusercontent.com/50981076/109250973-a18b4180-7810-11eb-8ff1-690bda90592d.png)

## Teams

Teams of 2, 3, or 4 people all ordered pizzas. Each team ordered one pizza per team member, but
did not specify what ingredients to put on the pizzas. The pizzeria might not deliver to a team (no
pizzas are sent to that team). However, if the order is delivered, exactly one pizza should be
available per person. For example, it is an error to send 3 pizzas to a 4-person team.

## Goal

Given the description of the pizzas available, and the number of teams of 2, 3, or 4 people that
have ordered, decide which pizzas to send to each of the teams. The goal is to maximize, per
team, the number of dierent ingredients used in all their pizzas.

![image](https://user-images.githubusercontent.com/50981076/109251034-c2ec2d80-7810-11eb-92cb-008731693171.png)

## Input data set
The input data is provided as a data set le - a plain text le containing exclusively ASCII
characters with lines terminated with a single ‘\n’ character (UNIX-style line endings).
##File format

The rst line of the input le contains the following integer numbers separated by single spaces:

● M ( 1 ≤ M ≤ 100 000 ) - the number of pizzas available in the pizzeria

● T2
( 0 ≤ T 0 000 ) - the number of 2-person teams 2 ≤ 5

● T3 ( 0 ≤ T 0 000 ) - the number of 3-person teams 3 ≤ 5
● T4
( 0 ≤ T 0 000 ) - the number of 4-person teams 4 ≤ 5

The next M lines describe the pizzas available. Each line contains (space separated):

● an integer I ( 1 ≤ I ≤ 10 000 ) - the number of ingredients,

● followed by the list of I ingredients - Each ingredient consists of lowercase ASCII leers
and dash (-) characters, and its length can be between 1 and 20 characters in total. Each
ingredient in a pizza is dierent, but the same ingredient can appear on dierent pizzas.

![image](https://user-images.githubusercontent.com/50981076/109251067-d6979400-7810-11eb-8d94-14759b3fd9f7.png)

# Submissions
## File format
The rst line of the submission le contains a number D ( 1 ≤ D ≤ T ), representing the 2 + T3 + T4
number of pizza deliveries.

The following D lines contain descriptions of each delivery. Each line contains the following
integer numbers separated by single spaces:

● L ( 2 ≤ L ≤ 4 ) - the number of people in the team

● followed by the list of pizzas, P1 … PL - the space separated indexes of the pizzas delivered
to that team

Even though it’s nice to deliver pizzas to all teams, it is allowed to make fewer deliveries than the
number of teams. However, making more deliveries than the number of teams is an error. It is
also an error to make more deliveries to 2, 3 or 4-person teams than the corresponding number
of teams provided in the input le: the number of lines with L=N, should not be greater than TN.

![image](https://user-images.githubusercontent.com/50981076/109251126-f2029f00-7810-11eb-8c52-a24fd4291387.png)

## Validation
In order for the submission to be accepted:

● each pizza must be pa of at most one order,

● for all N-person teams, either nobody or everybody receives a pizza,

● there are TN or less deliveries to teams of N people.

## Scoring
For each delivery, the delivery score is the square of the total number of dierent ingredients of
all the pizzas in the delivery. The total score is the sum of the scores for all deliveries.

![image](https://user-images.githubusercontent.com/50981076/109251171-034bab80-7811-11eb-8feb-393d7e734938.png)
