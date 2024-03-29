#include "s21_controller.h"

#include "../model/s21_model.h"

s21::Controller::~Controller() {}

void s21::Controller::InitializeMaze(const std::string filename) {
  model_->InitializeMaze(filename);
}

bool s21::Controller::EmptyMaze() const { return model_->EmptyMaze(); }

int s21::Controller::GetMazeRows() const { return model_->GetMazeRows(); }
int s21::Controller::GetMazeCols() const { return model_->GetMazeCols(); }
const std::vector<bool>& s21::Controller::GetMazeRWalls() const {
  return model_->GetMazeRWalls();
}
const std::vector<bool>& s21::Controller::GetMazeBWalls() const {
  return model_->GetMazeBWalls();
}

void s21::Controller::InitializeCave(const std::string filename) {
  model_->InitializeCave(filename);
}

bool s21::Controller::EmptyCave() const { return model_->EmptyCave(); }

int s21::Controller::GetCaveRows() const { return model_->GetCaveRows(); }
int s21::Controller::GetCaveCols() const { return model_->GetCaveCols(); }

const std::vector<bool>& s21::Controller::GetCaveCells() const {
  return model_->GetCaveCells();
}

void s21::Controller::GenerateCave(int chance, int rows, int cols) {
  return model_->GenerateCave(chance, rows, cols);
}

bool s21::Controller::CaveCellularAutomaton(int birth_limit, int death_limit) {
  return model_->CaveCellularAutomaton(birth_limit, death_limit);
}

void s21::Controller::SaveMaze(const std::string filename) {
  model_->SaveMaze(filename);
}

void s21::Controller::SaveCave(const std::string filename) {
  model_->SaveCave(filename);
}

void s21::Controller::GenerateMaze(int rows, int cols) {
  model_->GenerateMaze(rows, cols);
}

void s21::Controller::FindPath(std::stack<std::pair<int, int>>& path,
                               std::pair<int, int> start,
                               std::pair<int, int> end) {
  model_->FindPath(path, start, end);
}
