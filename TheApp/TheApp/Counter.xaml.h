#pragma once
#include "pch.h"
#include "Counter.g.h"
#include "CounterViewModel.h"

namespace TheApp {
	[Windows::Foundation::Metadata::WebHostHidden]
	public ref class Counter sealed
	{
	private:
		CounterViewModel^ m_viewModel;

	public:
		Counter();

		property CounterViewModel^ ViewModel
		{
			CounterViewModel^ get();
		}

		property int InitialCount
		{			
			void set(int value);
		}

		property String^ BtnLabel
		{			
			void set(String^ value);
		}
	};
}
