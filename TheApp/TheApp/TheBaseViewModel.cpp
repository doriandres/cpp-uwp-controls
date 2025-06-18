#pragma once
#include "pch.h"
#include "TheBaseViewModel.h"

using namespace Platform;
using namespace Windows::UI::Xaml::Data;

namespace TheApp
{
	void TheBaseViewModel::OnPropertyChanged(String^ propertyName)
	{
		PropertyChanged(this, ref new PropertyChangedEventArgs(propertyName));
	}
}