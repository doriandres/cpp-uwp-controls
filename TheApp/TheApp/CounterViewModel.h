#pragma once
#include "pch.h"
#include "TheBaseNotifyPropertyChanged.h"
#include "RelayCommand.h"

using namespace Platform;
using namespace Windows::UI::Xaml::Data;

namespace TheApp
{
	public ref class CounterViewModel sealed : public TheBaseNotifyPropertyChanged
	{
	private:
		int m_count;
		String^ m_increaseBtnLabel;

		RelayCommand^ m_increaseCountCommand;

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

		property RelayCommand^ IncreaseCountCommand
		{
			RelayCommand^ get();
		}		
	};
}