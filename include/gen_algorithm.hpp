#pragma once

class gen_algorithm {

public:
    gen_algorithm();
    ~gen_algorithm();

    void gen_function(int population_size, float mutation_probability, float cross_probability);
};