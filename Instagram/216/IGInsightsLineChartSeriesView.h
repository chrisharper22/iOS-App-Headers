//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class IGInsightsLineChartCanvasViewModelV2, IGInsightsLineChartSeriesViewModel, IGInsightsLineChartSeriesViewModelV2;

@interface IGInsightsLineChartSeriesView : UIView
{
    IGInsightsLineChartSeriesViewModel *_viewModel;
    IGInsightsLineChartSeriesViewModelV2 *_seriesViewModel;
    IGInsightsLineChartCanvasViewModelV2 *_canvasViewModel;
}

- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithSeriesViewModel:(id)arg1 canvasViewModel:(id)arg2;
- (id)initWithViewModel:(id)arg1;

@end
