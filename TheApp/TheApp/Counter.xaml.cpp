#pragma once
#include "pch.h"
#include "Counter.xaml.h"
#include "CounterViewModel.h"

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

namespace TheApp
{
	Counter::Counter()
	{
		InitializeComponent();
		this->DataContext = this;		
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


