Key Fixes Explained
Random Number Generation
  -GetRandomNumber(3) now generates 1-3 (rock, paper, scissors)
  -srand() seeded only once using static flag
  -Original rand()%2+1 only made 1-2 (rock/paper)

Function Changes
  -name() → printChoice(): void function, no return needed
  -Removed buggy printf inside choice function

Game Logic
  -Simplified win conditions using single if-else chain
  -Score printed as running tally (Player-Computer)
  -Final messages only after loop exits
  -continue skips invalid inputs cleanly
