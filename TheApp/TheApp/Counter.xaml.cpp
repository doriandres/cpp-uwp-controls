#pragma once
#include "pch.h"
#include "Counter.xaml.h"
#include "CounterViewModel.h"

using namespace Platform;

namespace TheApp
{
	Counter::Counter()
	{
		InitializeComponent();
		m_viewModel = ref new CounterViewModel();
	}

	CounterViewModel^ Counter::ViewModel::get()
	{
		return m_viewModel;
	}

	void Counter::InitialCount::set(int value)
	{
		m_viewModel->Count = value;
	}

	void Counter::BtnLabel::set(String^ value)
	{
		m_viewModel->IncreaseBtnLabel = value;
	}
}


