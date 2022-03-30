from scipy import std
import ga, stdgenomes
import numpy as np

# init_vect = sum([range(1, 10)] * 9, [])
init_vect = list(np.arange(1, 10) * 9)
genome = stdgenomes.PermutateGenome(init_vect)

from examples import sudoku

solver = ga.GA(sudoku.ga_sudoku(sudoku.PUZZLE), genome)
solver.evolve(target_fitness=0)
