//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

@class IGRadioViewModel, IGStorySettingsRadioViewModel;
@protocol IGStorySettingsRadioSectionControllerDelegate;

@interface IGStorySettingsRadioSectionController : IGListSectionController
{
    IGRadioViewModel *_radioViewModel;
    id <IGStorySettingsRadioSectionControllerDelegate> _delegate;
    IGStorySettingsRadioViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGStorySettingsRadioViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)didSelectItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithDelegate:(id)arg1;

@end

