#pragma once

#define SWAP(U, V) U = U + V; \
V = U - V; \
U = U - V;

#define MIN(U, V) (U < V ? U : V)
