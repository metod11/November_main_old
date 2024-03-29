#pragma once

#include "math.hpp"
#include "StopCondition.hpp"

// Авторы: Амиров Аскар, Китаев Станислав
IterationData dfp2(Function f, Vector start_point, const StopCondition& stop_condition = default_stop_condition);
// f - указатель на целевую функцию
// start_point - начальное приближение
// stop_condition - критерий остановы
// Результат работы метода будет лежать в структуре данных о последней итерации

Matrix out_pr2(Vector& x, Vector& y);

Matrix hes_upd2(Function f, Matrix& B, Vector& x_cur, Vector& x_prv);

Real search_alpha2(Function f, const Vector& x, const Vector& p, int iter_limit);