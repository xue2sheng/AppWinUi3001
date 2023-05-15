// Copyright (c) Microsoft Corporation and Contributors.
// Licensed under the MIT License.

#pragma once
#include "MainWindow.g.h"

namespace winrt::AppWinUi3001::implementation
{
    struct MainWindow : MainWindowT<MainWindow>
    {
        MainWindow();
        void myButton_Click(Windows::Foundation::IInspectable const& p0, Microsoft::UI::Xaml::RoutedEventArgs const& p1);
    };
}

namespace winrt::AppWinUi3001::factory_implementation
{
    struct MainWindow : MainWindowT<MainWindow, implementation::MainWindow>
    {
    };
        
}
