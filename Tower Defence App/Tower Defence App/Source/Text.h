#pragma once
#include "VisualElement.h"

// Элемент для отображения текста
class Text :
	public VisualElement
{
	// Изображение текста
	SDL_Surface* surface = NULL;
	// Шрифт текста
	TTF_Font* font = TTF_OpenFont("", 12);
	// Отображаемый текст
	string text = "";
	// Путь до файла шрифта
	string fontFile = "";
	// Размер шрифта
	int fontSize = 12;
	// Цвет текста
	SDL_Color foreground = { 0, 0, 0 };
	// Размер и расположение объекта
	SDL_Rect* dstRect = new SDL_Rect();

	// Создание изображения из текста
	void CreateSurface();

public:
	// Возвращает расстояние между левой границей элемента и границей окна
	int GetLeft();
	// Задает расстояние между левой границей элемента и границей окна
	void SetLeft(int left);
	// Возвращает расстояние между верхней границей элемента и границей окна
	int GetTop();
	// Задает расстояние между верхней границей элемента и границей окна
	void SetTop(int top);
	// Возвращает отображаемый текст
	const char* GetText();
	// Задает отображаемый текст
	void SetText(const char* text);
	// Задает путь до шрифта отображаемого текста
	void SetFontFile(const char* file);
	// Возвращает размер шрифта
	int GetFontSize();
	// Задает размер шрифта
	void SetFontSize(int pt);
	// Возвращает цвет текста
	SDL_Color GetForeground();
	// Задает цвет текста
	void SetForeground(SDL_Color foreground);

	// Возвращает изображение на основе которого будет отображаться объект
	SDL_Surface* GetSurface() override;
	// Возвращает размер и расположение отображаемой части изображения
	SDL_Rect* GetSourceRectangle() override;
	// Возвращает размер и расположение объекта
	SDL_Rect* GetDestinationRectangle() override;

};
