//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGViewController.h>

#import "IGRangeSliderDelegate-Protocol.h"

@class IGBottomButtonsView, IGRangeSlider, IGResultsFilterModelsMetadata, IGResultsFilterRangeConfig, IGUserSession, NSString, UIBarButtonItem, UILabel;
@protocol IGResultsFilterRangeSelectionViewControllerDelegate;

@interface IGResultsFilterRangeSelectionViewController : IGViewController <IGRangeSliderDelegate>
{
    IGResultsFilterModelsMetadata *_resultsFilterMetadata;
    IGResultsFilterRangeConfig *_rangeConfig;
    NSString *_analyticsModule;
    UILabel *_rangeLabel;
    IGRangeSlider *_rangeSlider;
    UIBarButtonItem *_clearButton;
    IGUserSession *_userSession;
    IGBottomButtonsView *_applyButton;
    id <IGResultsFilterRangeSelectionViewControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <IGResultsFilterRangeSelectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)sliderDidEndMaxThumbSliding:(id)arg1;
- (void)sliderDidEndMinThumbSliding:(id)arg1;
- (void)sliderDidChangeMaxValue:(id)arg1;
- (void)sliderDidChangeMinValue:(id)arg1;
- (void)sliderDidBeginMaxThumbSliding:(id)arg1;
- (void)sliderDidBeginMinThumbSliding:(id)arg1;
- (void)_updateSelectedItemsInMetadata;
- (_Bool)_isDefaultValuesSelected;
- (_Bool)_hasValuesChanged;
- (id)_previousRangeSelected;
- (void)_clearSelectedValues;
- (void)_updateButtons;
- (void)_updateLabelTextFromSliderValues;
- (id)_getRangeConfigFromFilterConfigs;
- (void)_didTapDoneButton;
- (id)analyticsModule;
- (struct CGSize)preferredContentSize;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithResultsFilterMetadata:(id)arg1 userSession:(id)arg2 displayName:(id)arg3 module:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

