#pragma once
#include "pch.h"
#include "TheBaseViewModel.h"
#include "TheCommand.h"

using namespace Platform;
using namespace Windows::UI::Xaml::Data;

namespace TheApp
{
	public ref class CounterViewModel sealed : public TheBaseViewModel
	{
	private:
		int m_count;
		String^ m_increaseBtnLabel;

		TheCommand^ m_increaseCountCommand;

		void IncreaseCount();	

	public:
		CounterViewModel();

		property int Count
		{
			int get();
			void set(int value);
		}

		property String^ IncreaseBtnLabel
		{
			String^ get();
			void set(String^ value);
		}

		property TheCommand^ IncreaseCountCommand
		{
			TheCommand^ get();
		}		
	};
}