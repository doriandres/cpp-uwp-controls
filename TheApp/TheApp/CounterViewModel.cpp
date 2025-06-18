#pragma once
#include "pch.h"
#include "CounterViewModel.h"

using namespace Platform;
using namespace Windows::UI::Xaml::Data;

namespace TheApp
{
	void CounterViewModel::IncreaseCount()
	{
		this->Count += 1;
	}

	CounterViewModel::CounterViewModel()
	{
		m_count = 0;
		m_increaseBtnLabel = "Increase";
		m_increaseCountCommand = ref new TheCommand(
			ref new ExecuteDelegate([this](Object^ parameter) 
			{
				this->IncreaseCount();
			})
		);
	}

	TheCommand^ CounterViewModel::IncreaseCountCommand::get()
	{
		return m_increaseCountCommand;
	}

	int CounterViewModel::Count::get()
	{
		return m_count;
	}

	void CounterViewModel::Count::set(int value)
	{
		if (m_count != value)
		{
			m_count = value;
			OnPropertyChanged("Count");
		}
	}

	String^ CounterViewModel::IncreaseBtnLabel::get()
	{
		return m_increaseBtnLabel;
	}

	void CounterViewModel::IncreaseBtnLabel::set(String^ value)
	{
		if (m_increaseBtnLabel != value)
		{
			m_increaseBtnLabel = value;
			OnPropertyChanged("IncreaseBtnLabel");
		}
	}
}