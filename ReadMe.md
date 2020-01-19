# HEXAPAWN
## A Game that learns!

### PLAYER VS COMPUTER
Player goes first hence move of player occur in odd number.
Therefore, computer's move are even numbered. All possible moves for computer for a particular board configuration are stored in a 'Movement' type datastructure.

### 'Movement' - DS to store moves [View As RAW]
      ___________________    
head->|      next       | ---------------------------------------------------------------------------->... 
      |   step_number   |     __________________    
      |   boardconfigs  |  -> |      next      | ------------------------------------------------->...
      |_________________|     |      board     |     ______________      ______________ 
                              |      moves     | -> |     next     | -> |     next     | -> NULL 
                              |   no_of_moves  |    |    from_i    |    |    from_i    |      
                              |________________|    |    from_j    |    |    from_j    | 
                                                    |     to_i     |    |     to_i     | 
                                                    |     to_i     |    |     to_i     | 
                                                    |______________|    |______________| 
                                                    
### Computers move
After player has played his/her move, computer will look for stored moves corresponding to step_number and board configuration in 'Movement'-DS, and then select a random move from all possibls moves.
If computer makes a losing move, that move is removed from the 'Movement'-DS so that computer can't take that move again.

#### Computer is not thinking but is learning. This kind of learning is called learning from punishment.
#### At first it looks like players are winning most games but as players are winning computer is learning and in later games computer can be seen winning often.

#### With each lossing move computer is also lossing a behaviour which leads to negative outcome.
