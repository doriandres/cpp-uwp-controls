#pragma once
#include "pch.h"
#include "TheBaseNotifyPropertyChanged.h"

using namespace Platform;
using namespace Windows::UI::Xaml::Data;

namespace TheApp
{
	void TheBaseNotifyPropertyChanged::OnPropertyChanged(String^ propertyName)
	{
		PropertyChanged(this, ref new PropertyChangedEventArgs(propertyName));
	}
}