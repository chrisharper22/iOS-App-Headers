//
//     Generated by classdumpios 1.0.1 (64 bit) (iOS port by DreamDevLost)(Debug version compiled Mar 27 2019 15:10:13).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FBSharedFramework/IGListSectionController.h>

@class IGDirectVisualMessageTimelineCellViewModel;
@protocol IGDirectVisualMessageTimelineSectionControllerDelegate;

@interface IGDirectVisualMessageTimelineSectionController : IGListSectionController
{
    id <IGDirectVisualMessageTimelineSectionControllerDelegate> _delegate;
    IGDirectVisualMessageTimelineCellViewModel *_viewModel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) IGDirectVisualMessageTimelineCellViewModel *viewModel; // @synthesize viewModel=_viewModel;
- (void)didDeselectItemAtIndex:(long long)arg1;
- (void)didSelectItemAtIndex:(long long)arg1;
- (id)supplementaryViewSource;
- (struct CGSize)sizeForItemAtIndex:(long long)arg1;
- (void)didUpdateToObject:(id)arg1;
- (id)cellForItemAtIndex:(long long)arg1;
- (id)initWithViewModel:(id)arg1 delegate:(id)arg2;

@end

